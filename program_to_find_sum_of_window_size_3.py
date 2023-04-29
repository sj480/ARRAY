array = [5, 2, 1, 4, 3, 9, 7, 6, 8]
n = len(array)

for i in range(n-2):
    sum = 0
    for j in range(i, i+3):
        sum += array[j]
    print(f"Sum of window starting at index {i} is {sum}")
