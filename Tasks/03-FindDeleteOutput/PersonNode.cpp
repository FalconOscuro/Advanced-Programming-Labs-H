#include "PersonNode.h"

PersonNode::PersonNode(void) : m_name(""), m_age(0), m_next(nullptr)
{ }

PersonNode::PersonNode(const string& name, int age) : m_name(name), m_age(age), m_next(nullptr)
{ }

PersonNode::~PersonNode(void)
{ }

string PersonNode::GetName() const
{
    return m_name;
}

void PersonNode::SetName(const string& name)
{
    m_name = name;
}

int PersonNode::GetAge() const
{
    return m_age;
}

void PersonNode::SetAge(const int& age)
{
    m_age = age;
}

PersonNode* PersonNode::GetNext() const
{
    return m_next;
}

void PersonNode::SetNext(PersonNode* next)
{
    m_next = next;
}

ostream& operator<<(ostream& os, const PersonNode& person)
{
    os << "Name: " << person.m_name << " : Age: " << person.m_age;

    if (person.m_next)
        os << '\n' << *person.m_next;
    
    return os;
}