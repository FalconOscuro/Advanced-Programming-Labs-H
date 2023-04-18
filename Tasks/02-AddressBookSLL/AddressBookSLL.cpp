#include "AddressBookSLL.h"

AddressBookSLL::AddressBookSLL(void) : m_head(nullptr)
{ }

AddressBookSLL::~AddressBookSLL(void)
{
    if (!m_head)
        return;
    
    PersonNode* current = m_head;
    do
    {
        PersonNode* next = current->GetNext();
        delete current;
        current = next;
    } while (current);

    m_head = nullptr;
}

void AddressBookSLL::AddPerson(const string& name, int age)
{
    AddPerson(new PersonNode(name, age));
}

void AddressBookSLL::AddPerson(PersonNode* person)
{
    // Check if SLL is empty
    if (!m_head)
    {
        m_head = person;
        return;
    }

    // Traverse SLL until tail node is found
    PersonNode* current = m_head;
    while (current->GetNext())
        current = current->GetNext();
    
    current->SetNext(person);
}