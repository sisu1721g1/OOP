#pragma once
class Task
{
private:
	char * name;
	int id_number;
protected:
	bool is_finished = false;
public:
	bool finished() const;
	virtual void do_work() = 0;
	virtual bool can_start() const = 0;
	virtual void print() const;
	Task();
	Task(char*, int, bool);
	Task(const Task&);
	virtual ~Task();
	Task& operator=(const Task&);
};

