from pathlib import Path

bin_path = Path("software/loop.bin")
hex_path = Path("programs/loop.hex")

data = bin_path.read_bytes()

if len(data) % 4 != 0:
    raise ValueError("Binary size must be a multiple of 4 bytes")

with hex_path.open("w") as f:
    for i in range(0, len(data), 4):
        word = int.from_bytes(
            data[i:i + 4],
            byteorder="little"
        )
        f.write(f"{word:08x}\n")

print(f"Generated {hex_path}")