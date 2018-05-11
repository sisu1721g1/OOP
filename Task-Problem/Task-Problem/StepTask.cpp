#include "StepTask.h"

void StepTask::do_work()
{
	if (!can_start()) { return; }

	iterations--;

	if (iterations == 0)
	{
		is_finished = true;
	}
}

bool StepTask::can_start() const
{
	return !is_finished;
}

StepTask::StepTask() : Task()
{
	iterations = 1;
}

StepTask::StepTask(char* input_name, int input_id, bool input_finished, int input_it)
	: Task(input_name, input_id, input_finished)
{
	iterations = input_it;
}