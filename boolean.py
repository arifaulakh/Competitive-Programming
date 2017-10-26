N = input()
x = N.split(" ")
if x.count("not") % 2 == 0 and x.count("True") == 1:
  print("True")

if x.count("not") % 2 != 0 and x.count("True") == 1:
  print("False")

if x.count("not") % 2 == 0 and x.count("False") == 1:
  print("False")

if x.count("not") % 2 != 0 and x.count("False") == 1:
  print("True")