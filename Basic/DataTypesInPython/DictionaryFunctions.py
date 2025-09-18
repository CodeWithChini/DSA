d = {101:"Hill", 102:"Rahil", 103:"Yash"}

print(d.get(101))
print(d.get(108))  # None
if 125 in d:
    print(d[125])
else:
    print("Not Found")
