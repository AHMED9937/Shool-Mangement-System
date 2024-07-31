#include "SubjectDefinition.h"

using namespace std;

SubjectDefinition::SubjectDefinition() {

}

SubjectDefinition::SubjectDefinition(string Name, string Description, double MaxGrade, double MinGrade, double SuccessGrade) :Name{ Name }, Description{ Description }, MaxGrade{ MaxGrade }, MinGrade{ MinGrade }, SuccessGrade{SuccessGrade} {



}

SubjectDefinition::~SubjectDefinition(){
	

}


void SubjectDefinition::PrintReport() {
	cout << " Name: " << Name << endl;
	cout << " Description :" << Description << endl;
	cout << " MaxGrade :" << MaxGrade << endl;
	cout << " MinGrade :" << MinGrade << endl;
	cout << " SuccessGrade " << SuccessGrade << endl;
	

}