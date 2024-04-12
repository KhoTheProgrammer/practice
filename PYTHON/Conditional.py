# Get age from user
age = int(input("Enter your age: "))

# Check if user is adult or young
if age > 18:
    print("You are an adult")
elif age == 18:
    print("Between adult and young")
else:
    print("You are still young")