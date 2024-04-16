// Define an object named 'car' with properties and methods
let car = {
    model: "Mustang", // Property: model of the car
    color: "Red", // Property: color of the car
    year: 2023, // Property: manufacturing year of the car

    // Method: function to simulate driving the car
    drive: function () {
        console.log("You drive the car");
    },

    // Method: function to simulate stepping on the brake
    brake: function () {
        console.log("You step on the brake");
    }
};

// Access and log the values of properties
console.log(car.model); // Output: "Mustang"
console.log(car.color); // Output: "Red"
console.log(car.year); // Output: 2023

// Call the methods of the car object
car.brake(); // Output: "You step on the brake"
car.drive(); // Output: "You drive the car"
