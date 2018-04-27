#ifndef STACK_H
#define STACK_H
#include<iostream>

using namespace std;

int const MAX = 100;

template<typename T>
class Stack
{
private:
	const int sizeGrowRate = 2;

	T *arr;	    // ��������� ����� � ���������� �� �����
	int topIndex;
	int size;

	bool full() const
	{
		return topIndex == size - 1;
	}

	void grow() {
		T* newArr = new T[sizeGrowRate * size];
		for (int i = 0; i < size; i++)
		{
			newArr[i] = arr[i];
		}

		delete[] arr;
		arr = newArr;
		size *= sizeGrowRate;
	}
public:
	Stack()
	{
		size = MAX;
		arr = new T[size];
		topIndex = -1;
	}

	Stack(Stack<T> const& s) : size(s.size), topIndex(s.topIndex)
	{
		arr = new T[size];
		for (int i = 0; i <= topIndex; i++)
		{
			arr[i] = s.arr[i];
		}
	}

	~Stack() {
		delete[] arr;
	}

	Stack<T>& operator=(Stack<T> const & s) {
		if (this != &s) {
			size = s.size;
			topIndex = s.topIndex;
			delete[] arr;
			arr = new T[size];
			for (int i = 0; i <= topIndex; i++)
				arr[i] = s.arr[i];
		}

		return *this;
	}

	// �������� ���� ���� � ������
	bool empty() const {
		return topIndex == -1;
	}

	// �������� �� �������� �� ����� �� �����
	T peek() const
	{
		if (empty()) {
			cout << "������: ���� �� ���������� � ������ ����!\n";
			return 0;
		}

		return arr[topIndex];
	}

	// ��������

	// ��������� �� �������
	void push(T x)
	{
		if (full()) {
			grow();
		}
		arr[++topIndex] = x;
	}

	T pop() {
		if (empty()) {
			cout << "������: ���� �� ���������� �� ������ ����!\n";
			return 0;
		}

		return arr[topIndex--];
	}
};

#endif /* STACK_H_ */