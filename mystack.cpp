/*
Elanna Grossman
Vector Stack application
*/

#include "mystack.h"

template <class Item>
void stack<Item>::push(const Item& entry)
{
	data.push_back(entry);
}//end push

template <class Item>
void stack<Item>::pop()
{
	if (size() > 0)
	{
		data.pop_back();
	}//end if

	else
	{
		cerr << "POP Your stack is empty." << endl;
	}//end else
}//end pop

template <class Item>
Item stack<Item>::top() const
{
	if (size() > 0)
	{
		return data.back();
	}//end if

	else
	{
		cerr << "TOP Your stack is empty." << endl;
		return NULL;
	}//end else
}//end top