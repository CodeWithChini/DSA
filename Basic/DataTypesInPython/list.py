l = [10, 20, 30, 40, 50, 60,]
  #  0    1   2   3   4   5
  #  -6  -5  -4  -3  -2  -1    This is also index

print(l)
print(l[0])
print(l[-1])
print(l[2])
print(l[-3])

l.append(90)
l.append(50)
print("After Append : " , l)


l.insert(1, 15)
print("After Insert : ", l)


print(30 in l)
print(l.count(50))  # Occurrences in list
print(l.index(40))

l.remove(20)
print(l)

print(l.pop())
print(l)
print(l.pop(1))  #we can also provide index to pop function
print(l)

del l[2]
print(l)

del l[0 : 2]  # delete all items between 0 & 2
print(l)
