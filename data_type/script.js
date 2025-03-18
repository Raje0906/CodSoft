let str = "Hello";  // String
let num = 42;       // Number
let bool = true;    // Boolean
let undef;          // Undefined
let nul = null;     // Null

console.log(typeof str, typeof num, typeof bool, typeof undef, typeof nul);


//OBJECTS
let person = {
    name: "Alice",
    age: 25
};
console.log(typeof person); // Output: "object"
console.log(person.name); // Output: "Alice"


let colors = ["red", "green", "blue"];
console.log(typeof colors); // Output: "object"
console.log(colors[0]); // Output: "red"
