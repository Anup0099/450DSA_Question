# import re


# import re

# txt = "The rain in Spain"

# #Check if the string has any a, r, or n characters:

# x = re.findall("[arn]", txt)

# print(x)

# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")



from traceback import print_tb


class m:

    def __init__(self, name, age):
        self.name = name
        self.age = age
    def __str__(self):
        return self.name + " " + str(self.age)
    def move(self):
        print("move")
    def eat(self):
        print("eat")

p1 = m('anup', 25)
p2 = m('vikushikari', 26)
print(p1.name)

class  xam:
    def __init__(self, name, age,id,email):
        self.name = name
        self.age = age
        self.id = id
        self.email = email


    def exam(self):
        print("exam is coming"+self.name)


p1 = xam('anup', 25, '1234','anuppal602@gmail.com' )
print("exam is coming",p1.name,p1.age,p1.id,p1.email)
print(p1.exam())


class Student:
    def __init__(self, name, id):
        self.name = name
        self.id = id
    def exam(self):
        print("exam is coming"+self.name)
    def getDetails(self):
        print("name is",self.name,"id is",self.id)
    

p2 = Student('vikushikari', '1234')
print("exam is coming",p2.name,p2.id)
print(p2.exam())
print(p2.getDetails())