n = int(input())
for i in range(0,n):
    year,month,day = input().split(" ")
    year = int(year)
    month = int(month)
    day = int(day)
    if year > 1989:
      print("No")
    elif year <1989:
      print("Yes")
    elif year == 1989:
      if month == 2 and day <= 27:
        print("Yes")
      elif month <= 1:
        print("Yes")
      elif month >=3:
        print("No")
      elif month == 2 and day > 27:
        print("No")