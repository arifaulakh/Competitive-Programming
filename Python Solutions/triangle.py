angle1 = int(input())
angle2 = int(input())
angle3 = int(input())
x=[]
x.append(angle1)
x.append(angle2)
x.append(angle3)
if angle1 == 60 and angle2 == 60 and angle3 == 60:
    print("Equilateral")
if angle1 + angle2 + angle3 ==180 and angle1!=angle2 and angle1!=angle3 and angle2!=angle3:
    print("Scalene")
if angle1 + angle2 + angle3 == 180 and (angle1 == angle2 or angle1 ==angle3 or angle2 == angle3):
    print("Isosceles")
if angle1 + angle2 + angle3 != 180:
    print("Error")