#include <iostream>
#include <cstring>
#include "Task.h"

const int MAX_NAME_LENGHT = 50;

bool Task::finished() const
{
	return is_finished;
}

Task::Task()
{
	name = new char[MAX_NAME_LENGHT];
}

Task::Task(char* input_name, int input_id, bool input_finished)
{
	if (input_name != nullptr)
	{
		int name_len = strlen(input_name) + 1;
		name = new char[name_len];
		memcpy(name, input_name, name_len);
	}

	id_number = input_id;
	is_finished = input_finished;
}

Task::Task(const Task& other)
{
	if (other.name != nullptr)
	{
		int name_len = strlen(other.name) + 1;
		name = new char[name_len];
		memcpy(name, other.name, name_len);
	}

	id_number = other.id_number;
	is_finished = other.is_finished;
}

Task& Task::operator=(const Task& other)
{
	if (this != &other)
	{
		if (name != nullptr) { delete[] name; }

		if (other.name != nullptr)
		{
			int name_len = strlen(other.name) + 1;
			name = new char[name_len];
			memcpy(name, other.name, name_len);
		}

		id_number = other.id_number;
		is_finished = other.is_finished;
	}

	return *this;
}


Task::~Task()
{
	delete[] name;
}

void Task::print() const
{
	std::cout << id_number << " / " << name << std::endl;
}