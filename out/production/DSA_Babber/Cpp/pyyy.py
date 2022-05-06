# Write a Python program to print the prime nos. within the range of nos. provided.


def prime_nos(start, end):
    for num in range(start, end + 1):
        if num > 1:
            for i in range(2, num):
                if (num % i) == 0:
                    break
            else:
                print(num)


# Write a Python program to print the length of each string provided inside a list.
def string_length(list_of_strings):
    for string in list_of_strings:
        print(len(string))


prime_nos(1, 20)
print('q2')

string_length(["hello", "world", "python"])
