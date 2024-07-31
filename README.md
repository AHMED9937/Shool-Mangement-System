This project is a Student Management System implemented in C++ with multiple classes to manage students, subjects, and their respective data.

Table of Contents
Classes and Functionality
Student
SubjectDefinition
SubjectData
StudentController
SubjectController
StorageController
Installation
Usage
Contributing
Contact
Classes and Functionality
Student
The Student class represents a student with personal details and subjects they are enrolled in.

Attributes
FirstName
LastName
Age
PhoneNumber
Subjects[] (array of SubjectData)
Methods
Setters/Getters: Methods to set and get student attributes.
CalculatePercentage(): Calculates the percentage of the student's grades.
PrintReport(): Prints the student's report including personal details and grades.
SubjectDefinition
The SubjectDefinition class represents the definition of a subject, including its grading criteria.

Attributes
Name
Description
MaxGrade
MinGrade
SuccessGrade
Methods
Getters/Setters: Methods to set and get subject attributes.
PrintReport(): Prints the subject's report including details and grading criteria.
SubjectData
The SubjectData class represents the data of a subject for a student, including their grade.

Attributes
SubjectDefinition
Grade
Methods
Setter/Getter: Methods to set and get subject data attributes.
StudentController
The StudentController class manages a collection of students and provides various operations on them.

Attributes
Students[] (array of Student)
Methods
Setters/Getters: Methods to set and get students.
Search(): Searches for a student.
CRUD Operations: Methods to add, delete, and modify students.
Statistics Operations:
PrintAll(): Prints all students.
PrintAlpha(): Prints students in alphabetical order.
PrintTopGrade(): Prints students with the highest grades.
PrintLeaderBoards(): Prints the leaderboard of students.
PrintPercentageOfPass(): Prints the percentage of students who passed.
PrintPercentageOfFail(): Prints the percentage of students who failed.
Setting/Getting grades: Methods to set and get grades for students.
SubjectController
The SubjectController class manages a collection of subjects and provides various operations on them.

Attributes
Subjects (array of SubjectDefinition)
Methods
Setters/Getters: Methods to set and get subjects.
CRUD Operations: Methods to add, delete, and modify subjects.
Statistics Operations:
PrintSubjectsInfo(): Prints information about all subjects.
PrintPassGrades(): Prints subjects where students have passing grades.
StorageController
The StorageController class handles saving and loading students and subjects.

Methods
Save/Load Students: Saves or loads student data.
Save/Load Subjects: Saves or loads subject data.
