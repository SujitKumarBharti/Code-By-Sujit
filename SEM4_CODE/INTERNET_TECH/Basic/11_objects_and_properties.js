const book = {
    title: "Internet Technology & Web Design",
    author: "Sujit Kumar",
    year: 2024,
    price: 499,
    topics: ["HTML", "CSS", "JavaScript", "JSP"],
    getSummary() {
        return `${this.title} by ${this.author} (${this.year}) - Rs. ${this.price}`;
    }
};

console.log("Book Object    :", book);
console.log("Summary Method :", book.getSummary());

console.log("Object.keys()  :", Object.keys(book));  // Object introspection
console.log("Object.values():", Object.values(book));
console.log("Object.entries():", Object.entries(book));
