arr = [[0,0,0],[0,0,0],[0,0,0]]
for i in range(3):
    a, b, c = input().split()
    if a!="X":
        a = int(a)
    if b!="X":
        b = int(b)
    if c!="X":
        c = int(c)
    arr[i][0] = a
    arr[i][1] = b
    arr[i][2] = c
##iterate through rows

def check():
    ##check rows
    if (arr[0][2]-arr[0][1])!=(arr[0][1]-arr[0][0]):
        return False
    if (arr[1][2]-arr[1][1]) != (arr[1][1]-arr[1][0]):
        return False
    if (arr[2][2]-arr[2][1]) != (arr[2][1]-arr[2][0]):
        return False
    ##check columns
    if (arr[2][0]-arr[1][0]) != (arr[1][0]-arr[0][0]):
        return False
    if (arr[2][1]-arr[1][1]) != (arr[1][1]-arr[0][1]):
        return False
    if (arr[2][2]-arr[1][2]) != (arr[1][2]-arr[0][2]):
        return False
    return True        
    
if arr[0][1] == 'X' and arr[0][2]=='X' and arr[1][0]=='X' and arr[1][1]=='X' and arr[2][0]=='X'and arr[2][2]=='X':
    arr[0][0] = 14
    arr[0][1] = 14
    arr[0][2] = 14
    arr[1][0] = 16
    arr[1][1] = 16
    arr[1][2] = 16
    arr[2][0] = 18
    arr[2][1] = 18
    arr[2][2] = 18

else:
    for i in range(3):
        if arr[i][0]=="X":
            arr[i][0] = arr[i][2]-arr[i][1]
        elif arr[i][1] == "X":
            arr[i][1] = int((arr[i][2]+arr[i][0])/2)
        elif arr[i][2]=="X":
            arr[i][2] = arr[i][1]+(arr[i][1]-arr[i][0])
for i in range(3):
    print(*arr[i])

