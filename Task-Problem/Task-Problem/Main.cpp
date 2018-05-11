#include <iostream>
#include "Task.h"
#include "StepTask.h"
#include "DependantTask.h"

void completeAll(Task *tasks[] , int n)
{
	int available_task_counter;
	do
	{
		available_task_counter = 0;
		for (int i = 0; i < n; i++)
		{
			if (tasks[i]->can_start()) 
			{
				available_task_counter++;
				tasks[i]->do_work(); 
			}
		}
	} while (available_task_counter != 0);


	for (int i = 0; i < n; i++)
	{
		if (tasks[i]->finished())
		{
			tasks[i]->print();
		}
	}
}


void main()
{
	Task** tasks = new Task*[2];

	tasks[0] = new StepTask("Test1", 3465, false, 3);
	tasks[1] = new DependantTask("Test2", 3466, false, *tasks[0]);

	completeAll(tasks, 2);

	system("pause");
}