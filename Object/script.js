// 1️⃣ Creating an Object
let person = {
    name: "Alice",
    age: 25,
    city: "New York"
};

// 2️⃣ Accessing Properties
console.log(person.name);  // Output: Alice
console.log(person["city"]); // Output: New York

// 3️⃣ Modifying Properties
person.age = 30;
console.log(person.age); // Output: 30

// 4️⃣ Adding a New Property
person.country = "USA";
console.log(person); 
// Output: { name: "Alice", age: 30, city: "New York", country: "USA" }

// 5️⃣ Deleting a Property
delete person.city;
console.log(person); 