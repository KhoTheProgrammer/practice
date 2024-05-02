while True:
    try:
        height = int(input("Enter a number between 1 and 8: "))
        if height > 0 and height < 9:
            break
    except ValueError:
        pass

for i in range(1, height + 1):
    for j in range(1, height - i + 1):
        print(" ", end="")
    for k in range(1, i + 1):
        print("#", end="")
    print()