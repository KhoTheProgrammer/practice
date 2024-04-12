# Calls greet function
def main():
    greet()

# Greets the user 
def greet():
    name = input("Enter your name: ")
    age = int(input("Enter your age: "))
    print("Hello", name + "!! You are", age, "Years old!")
    
#  Call main function 
main()