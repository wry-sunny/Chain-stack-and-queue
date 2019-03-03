#include"LinkStaQue.h"


LinkStack::LinkStack()
	:_top()
{
	_count = 0;
}

LinkStack::LinkStack(LinkStack& src)
{
	Node *p = src._top._next;

	for (int i = 0; i < src._count; i++)
	{
		Node *q = &_top;
		for (int j = 0; j < _count; j++)
		{
			q = q->_next;
		}
		Node *s = new Node;
		s->_data = p->_data;
		s->_next = q->_next;
		q->_next = s;
		_count++;
		p = p->_next;
	}
}
LinkStack& LinkStack::operator=(LinkStack& src)
{
	if (this == &src)
	{
		return *this;
	}

	if (NULL != _top._next)
		delete _top._next;

	Node *p = src._top._next;

	for (int i = 0; i < src._count; i++)
	{
		Node *q = &_top;
		for (int j = 0; j < _count; j++)
		{
			q = q->_next;
		}
		Node *s = new Node;
		s->_data = p->_data;
		s->_next = q->_next;
		q->_next = s;
		_count++;
		p = p->_next;
	}

	return *this;
}
void LinkStack::push(ElemType val)
{
	Node *s = BuyNode(val);
	_top._next = s;
	_count++;
}
void LinkStack::pop()
{
	Node *p = _top._next;
	_top._next = p->_next;
	delete p;
	_count--;
}
ElemType LinkStack::GetTop()
{
	return _top._next->_data;
}
void LinkStack::Show()
{
	Node *p = &_top;

	while (p->_next != NULL)
	{
		p = p->_next;
		cout << p->_data << " ";
	}
	cout << endl;
}