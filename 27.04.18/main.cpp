/*
* Main.cpp
*/

#include "Stack2.h"

#include <iostream>
using namespace std;

int main()
{
	Stack<int> st;

	for (int i = 0; i < 1000; i++) {
		st.push(i);
	}

	Stack<double> st1;
	Stack<Stack<int>> st2;

	cout << endl;
}
