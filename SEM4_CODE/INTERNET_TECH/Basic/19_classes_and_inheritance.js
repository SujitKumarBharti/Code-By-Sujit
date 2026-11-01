class Person {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }

    introduce() {
        return `Hello, my name is ${this.name} and I am ${this.age} years old.`;
    }
}

class Student extends Person {
    constructor(name, age, rollNo, course) {
        super(name, age);
        this.rollNo = rollNo;
        this.course = course;
    }

    displayDetails() {
        return `${this.introduce()} Roll No: ${this.rollNo}, Enrolled Course: ${this.course}`;
    }
}

const s1 = new Student("Pooja", 20, 105, "BCA");
console.log(s1.displayDetails());
