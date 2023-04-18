#ifndef ADDRESSBOOKSSL_H
#define ADDRESSBOOKSSL_H

#include "PersonNode.h"

class AddressBookSLL
{
public:
	AddressBookSLL(void);
	~AddressBookSLL(void);

	void AddPerson(const string& name, int age);
	void AddPerson(PersonNode* person);

private:
	PersonNode* m_head;
};

#endif // ADDRESSBOOKSSL_H