# # write a function program
# from collections import deque
# from itertools import count


# def sample(i):
#     arg = i
#     print(arg)


# i = 6
# sample(i)


# def samples(i, s='hello'):
#     arg = i
#     print(arg)
#     print(s)


# s = 'anup'
# print(samples(8, s))


# # tuple
# s = ('formula', 'anup', 'python')
# print(s)

# t1 = ([1, 2, 3, 4, 5], [6, 7, 8, 9, 10])

# t1[0][0] = 56

# print(t1)

# x, y = t1
# print(x)
# print(y)


# # # print pascal triangle
# # def pascal_triangle(n,k):
# #     if k==0 or k==n:
# #         return 1
# #     else:
# #         return pascal_triangle(n-1,k-1)+pascal_triangle(n-1,k)
# # def pascal(n):
# #     for i in range(n):
# #         for j in range(i+1):
# #             print(pascal_triangle(i,j),end=' ')
# #         print()


# s1 = {1, 2, 3, 4, 5}
# s2 = {3, 4, 5, 6, 7}
# print(s2 | s1)
# print(s1-s2)
# print(s1 ^ s2)

# # ther are 2 groups of stufent in university that chose different subject out of whch one member want to change the subject and want to another group subject

# s1 = ['math', 'science', 'english', 'sanskrit']
# s2 = ['german', 'psychology', 'hindi', 'economics']


# group1 = ('john', 'jane', 'joseph', 'josephine')
# group2 = ('steve', 'amit', 'dd', 'david')

# s1[0] = 'sanskrit'
# print(s1)


# x = 0


# def counter():
#     x = 1
#     print(x)

#     def iner():
#         x = 2
#         print(x)
#     iner()
# counter()

# # list append remove insert
# list1 =[1,2,3,5, 6, 7, 8, 9, 10]
# list1.append(len(list1))
# list1.sort()
# list1.extend(list1)
# print(list1.index(5))
# list1.count(5)
# list2 =[23,24,25,26,27,28,29,30]
# list1.copy()

# print(list1)

# # queue

# queue=deque(["eirc","joseph","anup","sanket"])
# queue.append("anup")
# queue.popleft()

# print(queue)
# # /
# list=[1,2,3]
# list2=[3,1,4]


# list3=[]
# for i in range(3):
#     for j in range(3):
#         if list[i]!=list2[j]:
#             list3.append((list[i],list2[j]))

# print(list3)


# list comprehension
list1 = [2, 9, 16, 25]
list2 = [8, 27, 64, 125]

list5 = []

# for i in [2, 9, 16, 25]:
#     for j in [8, 27, 64, 125]:
#         if((i % 2 == 0) and (j % 2 == 0)):
#             list5.append(i)

#             list5.append(j)
for i in [2, 9, 16, 25]:
    if(i % 2 == 0):
        list5.append(i)
for j in [8, 27, 64, 125]:
    if(j % 2 == 0):
        list5.append(j)
print(list5)

tel = {'jack': 4098, 'sape': 4139}
tel['guido'] = 4127
print(tel)
