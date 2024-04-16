// Function Constructors
function Circle(radius = 1){
    this.radius = radius;
}
Circle.prototype.getArea = function(){
    return Math.PI * Math.pow(this.radius, 2);
}
Circle.prototype.getRadius = function(){
    return this.radius;
}
let circle1 = new Circle(9, 1);
console.log("Radius: " + circle1.getRadius() + "cm\nArea: "+ circle1.getArea() + "cm^2");

// Object literals and "this"
let literalCircle = {
    radius: 10,
    getArea: function(){
        console.log(this);
        return Math.PI * Math.pow(this.radius, 2);
    }
};
console.log(literalCircle.getArea());