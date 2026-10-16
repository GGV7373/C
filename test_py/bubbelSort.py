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
if len(sys.argv) != 2:
    print(f"Bruk: python3 {sys.argv[0]} <filnavn>")
    sys.exit(1)

data = read_numbers(sys.argv[1])

bubbleSort(data)

print("Sorted Array in Ascending Order:")
print(data)
