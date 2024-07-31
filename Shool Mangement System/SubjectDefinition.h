#pragma once

#include <iostream>
#include <string>

using namespace std;

class SubjectDefinition
{
public:


	      string Name;
		  string Description; 
		  double MaxGrade;
		  double MinGrade;
		  double SuccessGrade;

		  SubjectDefinition(string, string, double, double, double);
		  SubjectDefinition();
		  ~SubjectDefinition();

		 //Getters / Setters
		  void PrintReport();



};

