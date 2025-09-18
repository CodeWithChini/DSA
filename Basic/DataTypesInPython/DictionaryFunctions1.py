d1 = {101:"Hill", 102:"Rahil", 103:"Yash", 104:"Jeet"}

d1[103] = "yash"
print(len(d1))
print(d1)
del d1[104]
print(d1)
d1[106] = "Ansh"
print(d1.popitem())
