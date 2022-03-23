# write a function program
def sample(i):
    arg=i
    print(arg)
i=6
sample(i)

def samples(i,s='hello'):
    arg=i
    print(arg)
    print(s)
s='anup'
print(samples(8,s))


# tuple
s=('formula','anup','python')
print(s)

t1=([1,2,3,4,5] ,[6,7,8,9,10])

t1[0][0]=56

print(t1)

x ,y=t1
print(x)
print(y)


# # print pascal triangle
# def pascal_triangle(n,k):
#     if k==0 or k==n:
#         return 1
#     else:
#         return pascal_triangle(n-1,k-1)+pascal_triangle(n-1,k)
# def pascal(n):
#     for i in range(n):
#         for j in range(i+1):
#             print(pascal_triangle(i,j),end=' ')
#         print()


s1 ={1,2,3,4,5}
s2 ={3,4,5,6,7}
print(s2|s1) 
print(s1-s2)                
print(s1^s2)                