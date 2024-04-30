let button = document.getElementById("btn");
let heading = document.getElementById("head");

button.onclick = () => {
    let name = prompt("Whats your name: ");
    heading.textContent = `hello ${name}, nice to meet you`;
}