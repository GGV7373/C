import sys

def bubbleSort(array):
    for i in range(len(array)):
        for j in range(len(array) - i - 1):
            if array[j] > array[j + 1]:
                array[j], array[j + 1] = array[j + 1], array[j]

def read_numbers(filename):
    with open(filename) as f:
        return [int(x) for x in f.read().split()]

# Reeds file whit data
if len(sys.argv) < 2 or len(sys.argv) > 3:
    print(f"Bruk: python3 {sys.argv[0]} <filnavn> [output filnavn]")
    sys.exit(1)

# Output file name is optional, default is sorted_py.txt
out_name = sys.argv[2] if len(sys.argv) == 3 else "sorted_py.txt"

data = read_numbers(sys.argv[1])

bubbleSort(data)

with open(out_name, "w") as f:
    f.write(" ".join(str(x) for x in data) + "\n")
