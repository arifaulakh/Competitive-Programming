a = int(input())
b = int(input())
c = int(input())

if a + b + c == 180:
  if a == b and b == c and a == c:
    print("Equilateral")
  if a != b and b != c and a != c:
    print("Scalene")
  if (a!=b and b == c and a != c) or (a == b and b!= c and a!=c) or (a!=b and b!=c and a ==c):
    print("Isosceles")

else:
  print("Error")