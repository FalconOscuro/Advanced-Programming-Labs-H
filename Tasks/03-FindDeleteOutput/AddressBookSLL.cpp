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
        PersonNode* next = current->m_next;
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
    while (current->m_next)
        current = current->m_next;
    
    current->SetNext(person);
}

const PersonNode* AddressBookSLL::FindPerson(const string& name) const
{
    for (PersonNode* current = m_head; current; current = current->m_next)
        if (current->GetName() == name)
            return current;
    
    return nullptr;
}

bool AddressBookSLL::DeletePerson(const string& name)
{
    if (!m_head)
        return false;
    
    else if (m_head->GetName() == name)
    {
        PersonNode* newHead = m_head->m_next;
        delete m_head;
        m_head = newHead;
        return true;
    }

    PersonNode* previous = m_head;
    PersonNode* current = previous->m_next;
    while (current)
    {
        if (current->GetName() == name)
        {
            previous->m_next = current->m_next;
            delete current;
            return true;
        }
        previous = current;
        current = previous->m_next;
    }

    return false;
}

ostream& operator<<(ostream& os, const AddressBookSLL& addressBook)
{
    if (addressBook.m_head)
        os << *addressBook.m_head;
    
    return os;
}