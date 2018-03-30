#pragma once
#include"Person.h"

class Student : public Person
{
private:
	double m_GPA;
public:
	Student();
	Student(int age, char* name, char* email, double gpa);
	Student(const Student& other);
	~Student();
	Student& operator=(const Student& other);

	double getGPA();
	void setGPA(double gpa);

	void goToLectures();

	char* getEmail();
};

