/*
* Stack.h
*/

#ifndef STACK_H
#define STACK_H

#include "Fish.h"

int const MAX = 100;

class FishSack
{
private:
	Fish* arr[MAX];	// ����� � ���������� �� �����
	int top;	    // ������ �� ��������� �������

	bool full() const;// �������� ���� ������ � �����

public:

	// ��������� �� ������ ����
	FishSack();

	// ������� �� ������

	// �������� ���� ���� � ������
	bool empty() const;

	// �������� �� �������� �� ����� �� �����
	Fish* peek() const;

	// ��������

	// ��������� �� �������
	void push(Fish& fish);

	// ���������� �� �������
	Fish* pop();

};

#endif /* STACK_H_ */