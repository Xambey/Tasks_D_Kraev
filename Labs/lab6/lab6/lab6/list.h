#pragma once
template<class Type>
class List
{
	List();
	~List();
	List* begin;
	int now_size;
	int max_size;
	void print();
	void input();
	List operator=(List& t);
};

template<class Type>
inline List<Type>::List() {}


template<class Type>
inline List<Type>::~List()
{
}

template<class Type>
inline void List<Type>::print()
{
}

template<class Type>
inline void List<Type>::input()
{
}

template<class Type>
inline List List<Type>::operator=(List& t)
{
	now_size = t.now_size;
	max_size = t.max_size;
	begin = t.begin;
}
