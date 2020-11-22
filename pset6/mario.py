h = int(input("Height: \n"))

while h < 0 or h > 8:
    print("This is invalid input. \n")
    h = int(input("Height: \n"))
    
for i in range(h):
    # one plus and one minus
    print(" "*(h - i)+ "#"*(i + 1))
