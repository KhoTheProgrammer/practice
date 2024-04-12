s = input("Do you agree?: ")

#  Check if the user agreed or not
if s in ["y", "Yes"]:
    print("Agreed!")
elif s in ["n", "No"]:
    print("Not Agreed!!")
else:
    print("Y for yes and N for no")
