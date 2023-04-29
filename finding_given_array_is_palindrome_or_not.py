array = ['a', 'b', 'd', 'e', 'd', 'b', 'a']
n = len(array)
i = 0
j = n - 1

while i <= j:
    if array[i] != array[j]:
        print("The given array is not a palindrome")
        break
    i += 1
    j -= 1
else:
    print("The given array is a palindrome")
