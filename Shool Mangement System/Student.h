#include"string"
#include "SubjectData.h"
#include"vector"

using namespace std;

class Student
{

public:

		 Student();
		~Student();

		string FirstName;
		string LastName;
		int Age;
		long PhoneNumber;
		vector<SubjectData> Subjects;
		void Setters_Subjects(vector<SubjectData>);
		vector<SubjectData> Getters_Subjects();

		// / Getters
		// CalculatePercentage
		// PrintReport



};
