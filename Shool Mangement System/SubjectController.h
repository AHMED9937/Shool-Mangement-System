#include<vector>
#include "SubjectDefinition.h"
#pragma once

using namespace std;
//SubjectController

//-Subjects(SubjectDefinition)
//= Setter / Getter
//= CRUD Operations(Add / Delete / Modify)
//= StatisticsOperations(PrintSubjectsInfo, Print pass grades, etc.)




class SubjectController
{
public:

	vector<SubjectDefinition>Subjects;
	void setter_Subjects(vector<SubjectDefinition>);
	vector<SubjectDefinition> getter_Subjects();
	void Add();
	void Delete(string);
	void Modify();
	int Search(string a);
	void PrintSubjectsInfo();
};

