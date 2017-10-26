parts = input()
full = "BFLTC"
if parts == full:
    print("NO MISSING PARTS")
if parts.count("B") >=1 and parts.count("F") >=1 and parts.count("L")>= 1 and parts.count("T") >= 1 and parts.count("C"):
    print("NO MISSING PARTS")
if parts.count("B") == 0:
    print("B")
if parts.count("F") == 0:
    print("F")
if parts.count("C") == 0:
    print("C")
if parts.count("T") == 0:
    print("T")
if parts.count("L") == 0:
    print("L")