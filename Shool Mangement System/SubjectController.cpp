#include "SubjectController.h"
#include<string>
#include <vector>
using namespace std;
void SubjectController::setter_Subjects(vector<SubjectDefinition> s) {

	for (size_t i = 0; i < (int)s.size(); i++)
	Subjects[i] = s[i];


}


vector<SubjectDefinition> SubjectController::getter_Subjects() {
	return Subjects;

}

void SubjectController::Add() {
	
	int Subjects_Number;
	cout << "Please Enter How Many Subject You Want To Add? ";
	cin >> Subjects_Number;
	

	for (int  i = 0; i < Subjects_Number; i++)
	{
		SubjectDefinition sub;

		cout << "please Enter the Subject Name: ";
		cin>> sub.Name;

		cout << "please Enter the Subject Description: ";
		cin >> sub.Description;

		cout << "please Enter the Subject MaxGrade: ";
		cin >> sub.MaxGrade;

		cout << "please Enter the Subject MinGrade: ";
		cin >> sub.MinGrade;

		cout << "please Enter the Subject SuccessGrade: ";
		cin >> sub.SuccessGrade;
		
		Subjects.push_back(sub);


	}


}





void SubjectController::Delete(string name) {

	bool Deleted = false;
	for (size_t i = 0; i < !Deleted && Subjects.size(); i++)
	{
		if (Subjects[i].Name == name)
		{
			vector<SubjectDefinition>::iterator it;
			it = Subjects.begin()+i;
			Subjects.erase(it);
			Deleted = !Deleted;

		
		
		}


	}

	if (Deleted)
		cout << "the Element Is Deleted " << endl;
	else
		cout << "the Element Is Not  Found" << endl;

	

}

int SubjectController::Search(string name_of_Subj) {

	for (size_t i = 0; i < Subjects.size(); i++)
	{
		if (Subjects[i].Name == name_of_Subj)
			return i;

	}

	return -1;


}


void SubjectController::Modify() {

	int chose;
	int Modf_element;
	string Sub_Name;
	char YN;
	bool find_Elem=true;

	while (find_Elem)
	{
		cout << "Whats the Name Of the Subject?   \n\n";
		cin >> Sub_Name;
		Modf_element = Search(Sub_Name);

		find_Elem = !find_Elem;

		if (Modf_element == -1)
		{
			cout << "this Element Is Not Exsist You Want To try again? press y or any thing to Exit ?";
			cin >> YN;

			switch (YN)
			{
			case 'Y'||'y':	
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
			cout << "1- Name\n 2-Description\n 3-MaxGrade\n 4-MinGrade\n 5-SuccessGrade\n";
			
			cin >> chose;

		

		switch (chose)
		{
		case 1:
		cout << "Pleas Write the new Name:  ";
		cin >> Subjects[Modf_element].Name;
		break;


		 case 2:
			cout << "Pleas Write the new Description:  ";
			cin >> Subjects[Modf_element].Description;
			break;


		 case 3:
			 cout << "Pleas Write the new MaxGrade:  ";
			 cin >> Subjects[Modf_element].MaxGrade;
			 break;

		 case 4:
			 cout << "Pleas Write the new MinGrade:  ";
			 cin >> Subjects[Modf_element].MinGrade;
			 break;


		 case 5:
			 cout << "Pleas Write the new SuccessGrade:  ";
			 cin >> Subjects[Modf_element].SuccessGrade;
			 break;


		default:
			break;
		}







	}while (chose > 0 && chose < 6);


}
void SubjectController::PrintSubjectsInfo() {

	for (int i = 0; i < Subjects.size(); i++)
	{
		cout << "\n\n";
		cout <<"Name:" << " " << Subjects[i].Name << endl;
		cout <<"Description:" << " " << Subjects[i].Description << endl;
		cout << "MaxGrade:" << " " << Subjects[i].MaxGrade << endl;
		cout <<"MinGrade: " << " " << Subjects[i].MinGrade << endl;
		cout <<"SuccessGrade: " << " " << Subjects[i].SuccessGrade << endl;
		cout << "\n\n";

	}

}