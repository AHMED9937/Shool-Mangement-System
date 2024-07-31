#include "StudentController.h"



using namespace std;
int StudentController::search(string f_name,string last_n) {

	for (int i = 0; i < (int)students.size(); i++)
	{
		if (students[i].FirstName == f_name && students[i].LastName == last_n)
			return i;

	}
	return -1;

}
void StudentController::Add() {
	
	int Students_Number;
	char YN;

		Student s;

		cout << "Please Enter Student First Name: \n";
		cin >> s.FirstName;

		cout << "Please Enter Student Last Name: \n";
		cin >> s.LastName;

		cout << "Please Enter Student Last Age: \n";
		cin >> s.Age;

		cout << "Please Enter Student Last PhoneNumber: \n";
		cin >> s.PhoneNumber;

		
		   students.push_back(s);
	}









void StudentController::PrintAll() {
	for (int i = 0; i < students.size(); i++)
	{
		cout << "\n\n\n\n";
		cout <<"studentFirstName: "<< students[i].FirstName<<endl;
		cout <<"student last Name: "<< students[i].LastName<< endl;
		cout << "studentAge: " << students[i].Age<< endl;
		cout << "student phone number:" << students[i].PhoneNumber<< endl;
		
		for (int j = 0; j < students[i].Subjects.size(); j++)
		{
			cout << "Grade: "<< students[i].Subjects[j].Grade << endl;
			students[i].Subjects[j].Subject_def.PrintReport();

		}

		cout << "\n\n\n\n";
	}
}



void StudentController::Delete(string firs_n,string last_n) {
	bool Deleted=false;
	for (int i = 0; i < students.size(); i++)
	{
		if (students[i].FirstName==firs_n && students[i].LastName==last_n)
		{
			vector<Student>::iterator it;
			it = students.begin() + i;
			students.erase(it);
			Deleted = !Deleted;


		}
	}
	if (Deleted)
		cout << "Student Deleted\n";
	else
		cout << "Student Not Found\n";




}
int  StudentController::Search(string firs_n,string last_n) {

	for (int i = 0; i < students.size(); i++)
	{
		if (students[i].FirstName == firs_n && students[i].LastName == last_n)
			return i;
	}
	return -1;

}


void StudentController::Modify() {

	int chose;
	int Modf_element;
	string first_n,last_n,M_Subj;
	char YN;
	bool find_Elem = true;
	

	while (find_Elem)
	{
		cout << "Whats the FirstName of student? \n";
		cin >> first_n;
		cout << "Whats the lastName of student? \n";
		cin >> last_n;

		Modf_element = Search(first_n,last_n);

		find_Elem = !find_Elem;

		if (Modf_element == -1)
		{
			cout << "this Element Is Not Exsist You Want To try again? press y or any thing to Exit ?";
			cin >> YN;

			switch (YN)
			{
			case 'Y' || 'y':
				find_Elem = !find_Elem;
				break;


			default:
				break;
			}
		}


	}
	if (Modf_element == -1)
		return;

	do
	{
		cout << "Please chose Number From the List Or any thing else to Exite\n ";
		cout << "1- firstName\n 2-LastName\n 3-Age\n 4-PhoneNumber\n";

		cin >> chose;



		switch (chose)
		{
		case 1:
			cout << "Pleas Write the new FirstName:  ";
			cin >> students[Modf_element].FirstName;
			break;


		case 2:
			cout << "Pleas Write the new lastName:  ";
			cin >> students[Modf_element].LastName;
			break;


		case 3:
			cout << "Pleas Write the new Age:  ";
			cin >> students[Modf_element].Age;
			break;

		case 4:
			cout << "Pleas Write the new PhoneNumber:  ";
			cin >> students[Modf_element].PhoneNumber;
			break;


		

		default:
			break;
		}







	} while (chose > 0 && chose < 6);


}