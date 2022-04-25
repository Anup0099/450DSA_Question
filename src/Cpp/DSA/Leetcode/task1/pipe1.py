from pipe import where,select

l1 =[1, 2, 3]
l2 =list(l1|select(lambda x:x**2))
l3 =list(l1|where(lambda x:x**2))

print(l2)

