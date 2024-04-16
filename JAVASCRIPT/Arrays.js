// Creating an empty array using the Array constructor
let array = new Array();

// Filling the array with values using a loop
for (let i = 0; i < 10; i++) {
    array[i] = 2 * i; // Doubling the index value and assigning it to the array
}
console.log(array); // Output the contents of the array

// Short hand array creation with predefined values
let names = ['kho', 'hbghgd', 'gvvd'];

// Iterating through the names array using a loop
for (let index = 0; index < names.length; index++) {
    console.log("Hello " + names[index]); // Outputting a greeting with each name
}
