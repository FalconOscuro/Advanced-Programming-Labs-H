#ifndef PERSONNODE_H
#define PERSONNODE_H

#include <string>
using namespace std;

class PersonNode
{
public:
	friend class AddressBookSLL;

	PersonNode(void);
	PersonNode(const string& name, int age);
	~PersonNode(void);

	string GetName() const;
	void SetName(const string& name);

	int GetAge() const;
	void SetAge(const int& age);

	PersonNode* GetNext() const;
	void SetNext(PersonNode* next);

private:
	string m_name;
	int m_age;
	PersonNode* m_next;
};

#endif // PERSONNODE_H