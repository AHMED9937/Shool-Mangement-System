#pragma once
#include "Student.h"



class StudentController
{
/*
-Students[](Student)
=Setter/Getters
=Search
=CRUD Operations(Add/Delete/Modify)
=Statistics Operations (PrintAll, PrintAlpha/Top Grade, PrintLeaderBoards, PrintPercentageOfPass/Fail, etc.)
=Setting/Getting grades
*/
public:
	vector<Student>students;
	int search(string,string);
	void Add();
	void Delete(string,string);
	void PrintAll();
	void Modify();
	int Search(string firs_n, string last_n);
};

