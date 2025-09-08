let a;
const b=10;
console.log(a);
console.log(b);
var c=20;
console.log(c);
a=BigInt(100);
console.log(a);
let y=Symbol("Hello!")
console.log(y);
//Data types in js: int,bigint,string,boolean,symbol,undefined,null

// object declaration in js
const student={
    name: "Aditya",
    age: 20,
    isStudent: true,
    subjects: ["Math", "Science", "English"],
    address: {
        city: "Pune",
        country: "India"
    }
}
console.log(student);
console.log(student.name);
console.log(student["age"]);;