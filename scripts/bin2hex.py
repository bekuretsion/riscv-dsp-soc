import sys
from pathlib import Path


if len(sys.argv) != 3:
    print("Usage: python3 bin2hex.py input.bin output.hex")
    sys.exit(1)


bin_path = Path(sys.argv[1])
hex_path = Path(sys.argv[2])


data = bin_path.read_bytes()


if len(data) % 4 != 0:
    raise ValueError(
        "Binary size must be a multiple of 4 bytes"
    )


hex_path.parent.mkdir(
    parents=True,
    exist_ok=True
)


with hex_path.open("w") as f:

    for i in range(0, len(data), 4):

        word = int.from_bytes(
            data[i:i + 4],
            byteorder="little"
        )

        f.write(f"{word:08x}\n")


print(f"Generated {hex_path}")