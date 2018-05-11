#pragma once
#include "Task.h"
class StepTask : public Task
{
private:
	int iterations;
public:
	void do_work();
	bool can_start() const;
	StepTask();
	StepTask(char*, int, bool, int);
};

