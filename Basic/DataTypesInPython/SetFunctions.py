s = {10, 20, 30}
s1 = {10, 20, 30}

# for s set
s.add(40)
print(s)
s.add(40)
print(s)

s.update([50, 60])
print(s)
s.update({60, 90}, [80, 70])
print(s)

s.discard(30)
print(s)
s.remove(40)
print(s)
s.clear()
print(s)

s.add(40)
print(s)


# for s1 set
print(len(s1))
print(20 in s1)
print(50 in s1)
