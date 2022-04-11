# a=int(input("Enter the a: "))

# b=int(input("Enter the b: "))


# print(a+b)
# print(a-b)
# print(a*b)
# print(a/b)
# print(a//b)
# print(a%b)
# print(a**b)
# print(a&b)
# print(a|b)
# print(a^b)
# print(~a)
# print(a<<b)
# print(a>>b)

class Point:
    def __init__(self,x=0,y=0):
        self.x=x
        self.y=y
    def __str__(self):
        return "({0},{1})".format(self.x,self.y)
    def __add__(self,other):
        x= self.x+other.x
        y= self.y+other.y
        return Point(x,y)
    def __sub__(self,other):
        x= self.x-other.x
        y= self.y-other.y
        return Point(x,y)
    def __mul__(self,other):
        x= self.x*other.x
        y= self.y*other.y
        return Point(x,y)
    def __truediv__(self,other):
        x= self.x/other.x
        y= self.y/other.y
        return Point(x,y)
    def __floordiv__(self,other):
        x= self.x//other.x
        y= self.y//other.y
        return Point(x,y)
p1 = Point(2,3)
p2 = Point(4,5)


print(p1*p2)


class Employee:
    def __init__(self,name,salary):
        self.name=name
        self.salary=salary
    def get_pay(self):
        return self.salary
class SalesEmployee:
    def __init__(self,name,salary,sales):
        self.name=name
        self.salary=salary
        self.sales=sales
    def get_pay(self):
        return self.salary+self.sales*0.05


p1 = SalesEmployee("anup",1000,100)
p2 = Employee("ss",1000)
print(p1.get_pay())
print(p2.get_pay())
if(p1>p2):
    print("p1 is greater")
else:
    print("p2 is greater")