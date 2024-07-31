#include "SubjectData.h"




SubjectData::SubjectData() {

}

SubjectData::~SubjectData(){}


double SubjectData::Grade_Getter(){
	return Grade;
}
void SubjectData::Grade_Setter(double g) {
	Grade = g;
}

SubjectDefinition SubjectData::Getter_SubjectDefinition() {

	return Subject_def;
}

void SubjectData::Setter_SubjectDefinition(SubjectDefinition SubjectDefinition) {
	Subject_def = SubjectDefinition;
}
