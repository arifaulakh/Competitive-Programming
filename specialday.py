month = int(input())
date = int(input())
if month <= 2 and date < 18:
    print("Before")
if month < 2 and date >= 18:
    print("Before")
if month == 2 and date == 18:
    print("Special")
if month == 2 and date > 18:
    print("After")
if month >= 3 and date > 0:
    print("After")