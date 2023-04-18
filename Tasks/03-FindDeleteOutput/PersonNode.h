#ifndef PERSONNODE_H
#define PERSONNODE_H

#include <string>
#include<iostream>
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

	friend ostream& operator<<(ostream& os, const PersonNode& person);

private:
	string m_name;
	int m_age;
	PersonNode* m_next;
};

#endif // PERSONNODE_H