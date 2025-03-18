// Traditional function
function greet(name) {
    return "Hello, " + name;
}

// Arrow function equivalent
const greet = (name) => {
    return "Hello, " + name;
};

// Even shorter (Implicit return)
const greetShort = name => `Hello, ${name}`;

console.log(greet("Alice")); // Output: Hello, Alice
console.log(greetShort("Bob")); // Output: Hello, Bob
