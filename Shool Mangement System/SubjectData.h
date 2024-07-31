#include "SubjectDefinition.h"
#pragma once



class SubjectData
{

public:

	SubjectData();
	~SubjectData();
	
	    SubjectDefinition Subject_def;
        double Grade;
		void Grade_Setter(double);
		double Grade_Getter();
		SubjectDefinition Getter_SubjectDefinition();
		void Setter_SubjectDefinition(SubjectDefinition);


};

