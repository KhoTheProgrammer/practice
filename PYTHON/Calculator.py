def main():
    x = get_int("Enter a number: ")
    y = get_int("Enter a number: ")
    # Prints sum of two numbers
    print (x + y)
    
 
# Returns a number from user otherwise prompts for a number
def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Not a number")
            
main()

