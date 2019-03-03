#include"LinkStaQue.h"


LinkQueue::LinkQueue()
:_Head(), _Tail()
{
	_count = 0;
}

LinkQueue::LinkQueue(LinkQueue& src)
{
	Node *p = src._Head._next;

	for (int i = 0; i < src._count; i++)
	{
		push(p->_data);
		p = p->_next;
	}
}
LinkQueue& LinkQueue::operator=(LinkQueue& src)
{
	if (this == &src)
	{
		return *this;
	}

	if (NULL != _Head._next || NULL != _Tail._next)
	{
		delete _Head._next;
		delete _Tail._next;
	}

	Node *p = src._Head._next;

	for (int i = 0; i < src._count; i++)
	{
		push(p->_data);
		p = p->_next;
	}

	return *this;
}
void LinkQueue::push(ElemType val)
{
	Node *s = BuyNode(val);
	if (_count == 0)
	{
		_Head._next = s;
		_Tail._next = s;
	}
	else
	{
		_Tail._next->_next = s;
		_Tail._next = s;
	}
	_count++;
}
void LinkQueue::pop()
{
	Node *p = _Head._next;
	_Head._next = p->_next;
	delete p;
	_count--;
}
ElemType LinkQueue::GetHead()
{
	return _Head._next->_data;
}
void LinkQueue::Show()
{
	Node *p = &_Head;

	while (p->_next != NULL)
	{
		p = p->_next;
		cout << p->_data << " ";
	}
	cout << endl;
}