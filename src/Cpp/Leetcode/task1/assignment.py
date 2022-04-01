
# 1 Write a program to print the sum of the following series 1 + 1/2 + 1/3 +. …. + 1/n
def series(n):
    sum = 0
    for i in range(1, n+1):
        sum += sum+(1/i)
    ans = round(sum, 0)
    return ans


print(series(2))


# 3 Write Python program to perform a linear search for a given Key number in the list and report Success or Failure.
def linearSearch(list, key):
    for i in range(len(list)):
        if list[i] == key:
            return i
    return -1


# 2
#  Write Python code to create a function called most_frequent() that takes a string and prints the letters in decreasing order of frequency. Use dictionaries.

def most_frequent(str):
    d = {}
    for i in str:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1
    print(d)
    return sorted(d, key=d.get, reverse=True)


print(most_frequent("anuppp"))


# 4
# Write a Python Program to input information for n number of students as given below: (Use OOP concepts

class Student:
    def __init__(self, name, registration, marks):
        self.name = name
        self.registration = registration
        self.marks = marks

    def display(self):
        print(self.name, self.registration, self.marks)


p = Student("anup", 20, 100)
print(p.name, p.registration, p.marks)
no = int(input("Enter the number of students: "))
for i in range(no):
    name = input("Enter the name: ")
    registration = input("Enter the registration: ")
    marks = input("Enter the marks: ")
    p = Student(name, registration, marks)
    p.display()
