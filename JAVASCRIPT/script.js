// // Prints hello world to the console
// console.log(document.getElementById("title"));
function sayHello(){
    let name = document.getElementById("name").value;
    let message = '<h2>hello ' + name + '!</h2>';
    document.getElementById('content').innerHTML = message;
    
    if (name == 'student')
    {
        let title = document.querySelector("#title").textContent;
        title += " & loving it";
        document.getElementById("title").textContent = title;
    }
}
document.querySelector("button").addEventListener("click", sayHello);