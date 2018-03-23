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
	Fish* arr[MAX];	// масив с елементите на стека
	int top;	    // индекс на последния елемент

	bool full() const;// проверка дали стекът е пълен

public:

	// създаване на празен стек
	FishSack();

	// функции за достъп

	// проверка дали стек е празен
	bool empty() const;

	// намиране на елемента на върха на стека
	Fish* peek() const;

	// мутатори

	// включване на елемент
	void push(Fish& fish);

	// изключване на елемент
	Fish* pop();

};

#endif /* STACK_H_ */