/*
* Stack.cpp
*/

#include <iostream>

#include "FishSack.h"

using namespace std;

FishSack::FishSack()
{
	top = -1; // Празен стек
}

bool FishSack::empty() const
{
	return top == -1;
}

Fish* FishSack::peek() const
{
	if (empty()) {
		return nullptr;
	}

	return arr[top];
}

void FishSack::push(Fish& x) {
	if (full()) {
		cout << "Грешка: опит за включване в пълен стек!\n";
	}
	else {
		arr[++top] = &x;
	}
}

bool FishSack::full() const {
	return top == MAX - 1;
}

Fish* FishSack::pop() {
	if (empty()) {
		return nullptr;
	}

	return arr[top--];
}
