import math
r=int(input("enter radius"))
def area(r):
    area=math.pi*pow(r,2)
    return area
print("area= ",area(r))

def cir(r):
    cir=2*math.pi*r
    return cir
print("circumference= ",cir(r))