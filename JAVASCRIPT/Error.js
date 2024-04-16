try{
    let x = window.prompt("Enter a number: ");
    x = Number(x)

    if (isNaN(x)){
        throw "Please Enter a number"
    }
    if (x == ""){
        throw "That was empty"
    }
}
catch(error){
    console.log(error);
}