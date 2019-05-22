#import math


s= "CADCEEDAABDDCEEFDBADECABABCDCFDFDFBEBEEA"

light = len(s)

a = s.count("A")
b = s.count("B")
c = s.count("C")
d = s.count("D")
e = s.count("E")
f = s.count("F")
g = s.count("G")
h = s.count("H")
i = s.count("I")
j = s.count("J")


P_A = a/light
P_B = b/light
P_C = c/light
P_D = d/light
P_E = e/light
P_F = f/light
P_G = g/light
P_H = h/light
P_I = i/light
P_J = j/light

# I_A = math.log2(1/P_A)
# I_B = math.log2(1/P_B)
# I_C = math.log2(1/P_C)
# I_D = math.log2(1/P_D)
# I_E = math.log2(1/P_E)
# I_F = math.log2(1/P_F)
# I_G  = math.log2(1/P_G)
# I_H  = math.log2(1/P_H)
# I_I  = math.log2(1/P_I)
# I_J  = math.log2(1/P_J)


#H_max = math.log2(8)

#H_MSG = - P_A*math.log2(P_A) + P_B*math.log2(P_B) + P_C*math.log2(P_C) + P_D*math.log2(P_D) + P_E*math.log2(P_E) +\
      #  P_F*math.log2(P_F) + P_G*math.log2(P_G) + P_H*math.log2(P_H) + P_I*math.log2(P_I) + P_J*math.log2(P_J)

#R_MSG = H_max - H_MSG

print(a)
print(b)
print(c)
print(d)
print(light)

#print(H_MSG)
#print(H_max)
#print(R_MSG)

