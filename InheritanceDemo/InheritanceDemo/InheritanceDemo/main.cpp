#include<iostream>

#include"Student.h"

using namespace std;

int main()
{
	Student* student = new Student();
	student->goToLectures();

	system("pause");
	return 0;
}