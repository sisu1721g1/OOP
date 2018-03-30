#include <iostream>
#include "Student.h"


Student::Student() : Person::Person()
{
	m_GPA = 0.0;
}

Student::Student(int age, char * name, char * email, double gpa) : Person::Person(age, name, email), m_GPA(gpa)
{
}


Student::~Student()
{
}

void Student::goToLectures()
{
	std::cout << "Kak ne mi se hodi...!" << std::endl;
	std::cout << "Kolegi moje li da mi pratite zapiskite na emaila?" << std::endl;
	std::cout << "Emaila mi e " << Person::getEmail();
}

char * Student::getEmail()
{
	return "DERIVED email!!!";
}
