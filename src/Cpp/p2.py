# list1 = [1, 2, 3, 3, 5, 5, 1]

# for i in list1:
#     if(list1.count(i) == 1):
#                print("it is aunique string ")
#     else:
#                 print("it is not a unique string")


# for i in range(6):
#     for j in range(1,6):
#         print(i+","+j)

# for i in range(5,0,-1):
#     for j in range(i):
#         print('*',end='')
#     print()

print("welcome to car world")

choice = input("enter help for instruction or press quit or exit")
while(choice != 'quit'):
    if(choice == 'help'):
        print('move to start the car')
        print('stop to stop the car')
    if(choice == 'move'):
        print('the car is moving')
    elif(choice == 'stop'):
        print('the car is stopped')
print('sucesfully executed')



class Student: 
    def __init__(self, name, dept,salary):
        self.name = name
        self.dept = dept
        self.salary = salary

class movie:
    def __init__(self,movie__title,movie_story,tariler):

            self.title = movie__title
            self.story = movie_story
            self.tariler = tariler
def showname(self):
    print("titile of moovie")
