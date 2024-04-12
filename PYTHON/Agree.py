s = input("Do you agree?: ")

# Converts input to lowercases
s = s.lower()

#  Check if the user agreed or not
if s in ["y", "yes"]:
    print("Agreed!")
elif s in ["n", "no"]:
    print("Not Agreed!!")
else:
    print("Y for yes and N for no")
