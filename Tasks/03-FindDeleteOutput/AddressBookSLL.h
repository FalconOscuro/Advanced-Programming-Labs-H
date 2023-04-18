#ifndef ADDRESSBOOKSSL_H
#define ADDRESSBOOKSSL_H

#include "PersonNode.h"

#include <iostream>
#include <string>
using namespace std;

class AddressBookSLL
{
public:
	AddressBookSLL(void);
	~AddressBookSLL(void);

	void AddPerson(const string& name, int age);
	void AddPerson(PersonNode* person);

	const PersonNode* FindPerson(const string& name) const;
	bool DeletePerson(const string& name);

	friend ostream& operator<<(ostream& os, const AddressBookSLL& addressBook);

private:
	PersonNode* m_head;
};

#endif // ADDRESSBOOKSSL_H