module mmio_interconnect (
    input  logic        clk,
    input  logic        reset,

    input  logic        mem_write,
    input  logic        mem_read,

    input  logic [31:0] address,
    input  logic [31:0] write_data,

    output logic [31:0] read_data,

    output logic        fir_selected,
    output logic        fir_done
);

    logic is_fir;

    logic [31:0] ram_read_data;
    logic [31:0] fir_read_data;

    logic ram_write_en;
    logic fir_write_en;
    logic fir_read_en;


    // ========================================
    // ADDRESS MAP
    // ========================================
    //
    // Normal RAM:
    //   0x0000_0000 ...
    //
    // FIR MMIO region:
    //   0x4000_0000 - 0x4000_FFFF
    //
    // ========================================

    assign is_fir =
        (address[31:16] == 16'h4000);

    assign fir_selected = is_fir;


    // ========================================
    // WRITE / READ ENABLE ROUTING
    // ========================================

    assign ram_write_en =
        mem_write && !is_fir;

    assign fir_write_en =
        mem_write && is_fir;

    assign fir_read_en =
        mem_read && is_fir;


    // ========================================
    // NORMAL DATA RAM
    // ========================================

    data_memory ram (
        .clk(clk),

        .mem_write(ram_write_en),

        .address(address),
        .write_data(write_data),

        .read_data(ram_read_data)
    );


    // ========================================
    // FIR ACCELERATOR
    // ========================================

    fir_accelerator fir (
        .clk(clk),
        .reset(reset),

        .write_en(fir_write_en),
        .read_en(fir_read_en),

        // FIR only needs the local register offset
        .address(address[4:0]),

        .write_data(write_data),

        .read_data(fir_read_data),

        .done(fir_done)
    );


    // ========================================
    // READ DATA MUX
    // ========================================

    always_comb begin

        if (is_fir)
            read_data = fir_read_data;

        else
            read_data = ram_read_data;

    end

endmodule