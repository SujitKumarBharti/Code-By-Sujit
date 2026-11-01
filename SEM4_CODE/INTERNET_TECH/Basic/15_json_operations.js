const courseData = {
    course: "Bachelor of Computer Applications",
    code: "BCACS",
    semester: 4,
    subjects: ["Internet Technology", "DBMS", "VB.NET"],
    active: true
};

const jsonString = JSON.stringify(courseData, null, 2);
console.log("Serialized JSON String:\n", jsonString);

const parsedObject = JSON.parse(jsonString);
console.log("\nParsed Back to Object:");
console.log("Course Name:", parsedObject.course);
console.log("Subjects   :", parsedObject.subjects.join(", "));
