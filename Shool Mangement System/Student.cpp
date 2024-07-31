
#include "Student.h"


Student::Student() {

}

Student::~Student() {


}

vector<SubjectData> Student::Getters_Subjects() {
	return Subjects;
}


void Student::Setters_Subjects(vector<SubjectData>my_subject) {

	for (size_t i = 0; i < my_subject.size(); i++)
		Subjects[i] = my_subject[i];


}









