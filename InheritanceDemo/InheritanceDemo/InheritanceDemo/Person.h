class Person {
private:
	unsigned int m_Age;
	char* m_Name;
	char* m_Email;

public:
	Person();
	Person(int age, char* name, char* email);
	Person(const Person& other);
	~Person();
	Person& operator=(const Person& other);

	int getAge();
	void setAge(int age);

	char* getName();
	void setName(char* name);

	char* getEmail();
	void setEmail(char* email);
};
