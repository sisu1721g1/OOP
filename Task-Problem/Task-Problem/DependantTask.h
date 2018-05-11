#pragma once
#include "Task.h"
class DependantTask : public Task
{
private:
	const Task * required_task;
public:
	void do_work();
	bool can_start() const;
	void print() const;
	DependantTask();
	DependantTask(char*, int, bool, const Task&);
};

