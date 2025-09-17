# set contain only distinct items
# set is unorder
# set has no indexing
# union , intersection , set difference is faster in set than list , because set is using internally hashing

s1 = {10, 20, 30, 40}
s2 = set([30, 40, 50, 60])
s3 = {}
s4 = set()

print(s1)
print(s2)
print(type(s3))  # this is dict
print(type(s4))  #this is set
print(s4)
