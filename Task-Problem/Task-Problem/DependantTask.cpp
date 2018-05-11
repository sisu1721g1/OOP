#include "DependantTask.h"
#include <iostream>

bool DependantTask::can_start() const
{
	return !is_finished && ( required_task == nullptr || required_task->finished() );
}

void DependantTask::do_work()
{
	if (!can_start()) { return; }

	is_finished = true;
}

DependantTask::DependantTask() : Task()
{
	required_task = nullptr;
}

DependantTask::DependantTask(char* input_name, int input_id, bool input_finished, const Task& required)
	: Task(input_name, input_id, input_finished)
{
	required_task = &required;
}


void DependantTask::print() const
{
	Task::print();
	required_task->print();
}