// Get references to HTML elements
let button = document.getElementById("button"); // Button element
let textField = document.getElementById("tfield"); // Input field for temperature
let radioCelcius = document.getElementById("cRadio"); // Celsius radio button
let radioFahren = document.getElementById("fRadio"); // Fahrenheit radio button
let result = document.getElementById("result"); // Result display area

// Event handler for button click
button.onclick = function(){
    // Get the value entered by the user and convert it to a number
    let number = Number(textField.value);
    
    // Check which radio button is selected
    if (radioCelcius.checked){
        // If Celsius is selected, convert the temperature to Celsius and display the result
        result.innerHTML = toCelcius(number) + "°C";
    }
    else if (radioFahren.checked){
        // If Fahrenheit is selected, convert the temperature to Fahrenheit and display the result
        result.innerHTML = toFahren(number) + "°F";
    }
    else{
        // If neither radio button is selected, prompt the user to select one
        result.innerHTML = "Please select one";
    }
}

// Function to convert temperature to Fahrenheit
function toFahren(temp){
    return (temp * 9 / 5) + 32;
}

// Function to convert temperature to Celsius
function toCelcius(temp){
    return (temp - 32) * (5 / 9);
}
