#ifndef __LINKSTAQUE_H
#define __LINKSTAQUE_H

#include <iostream>
using namespace std;

typedef int ElemType;

class LinkStack
{
	class Node
	{
	public:
		Node()
		{
			_next = NULL;
		}
	private:
		ElemType _data;
		Node *_next;

		friend class LinkStack;
	};
public:
	LinkStack();
	LinkStack(LinkStack& src);
	LinkStack &operator=(LinkStack& src);
	Node* BuyNode(ElemType val)
	{
		Node *s = new Node;

		s->_data= val;
		s->_next = _top._next;

		return s;
	}
	void push(ElemType val);
	void pop();
	ElemType GetTop();
	void Show();
private:
	Node _top;
	int _count;

};


class LinkQueue
{
	class Node
	{
	public:
		Node()
		{
			_next = NULL;
		}
	private:
		ElemType _data;
		Node *_next;

		friend class LinkQueue;
	};
public:
	LinkQueue();
	LinkQueue(LinkQueue& src);
	LinkQueue &operator=(LinkQueue& src);
	Node* BuyNode(ElemType val)
	{
		Node *s = new Node;

		s->_data = val;

		return s;
	}
	void push(ElemType val);
	void pop();
	ElemType GetHead();
	void Show();
private:
	Node _Head;
	Node _Tail;
	int _count;

};



#endif