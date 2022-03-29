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

