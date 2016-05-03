#pragma once
#include <iostream>
using namespace std;

template<class Type>
struct Key
{
	Key() { next = NULL; }
	Type value;
	Key *next;
};

template<class Type>
class List
{
	Key<Type>* begin;
	int now_size;
	static int max_size;
public:
	List<Type> &operator + (Type& t);
	List<Type> &operator = (List<Type>& t);
	List<Type> &operator -- (int unused);
	bool operator != (List<Type>&t);
	int getNowSize() const;
	int getMaxSize() const;
	Type getValue() const;
	void print();
	void input(int count);
	List();
	List(const List<Type>& t);
	~List();
};

template<class Type>
int List<Type>::max_size;

template<class Type>
inline List<Type>::List() 
{
	begin = NULL;
	now_size = NULL;
}


template<class Type>
inline List<Type>::List(const List<Type> & t)
{
	value = t.value;
}


template<class Type>
inline List<Type>::~List()
{
	cout << "Список уничтожен!";
}

template<class Type>
inline int List<Type>::getNowSize() const
{
	return now_size;
}

template<class Type>
inline int List<Type>::getMaxSize() const
{
	return max_size;
}

template<class Type>
inline Type List<Type>::getValue() const
{
	return value;
}

template<class Type>
inline void List<Type>::print()
{
	if (!begin) {
		cout << "Список пуст! " << endl;
		return;
	}
	Key<Type> *s = begin;
	cout << "Список: ";
	while (s) {
		cout << s->value << " ";
		s = s->next;
	}
	cout << endl;
}

template<class Type>
inline void List<Type>::input(int count)
{
	cout << endl << "Создаем список... " << this << endl;
	if (count <= 0) {
		cout << "Параметр количества элементов для добавления <= 0, ОШИБКА!\n";
		return;
	}
	for (int i = 0; i < count; i++) {
		
		Key<Type>* s = new Key<Type>;
		cout << "Введите [" << now_size << "] элемент списка " << endl;
		cin >> s->value;
		now_size++;
		if (!begin) {
			begin = s;
		}
		else {
			Key<Type>* t = begin;
			while (t->next) {
				t = t->next;
			}
			t->next = s;
		}
	}
}


template<class Type>
inline List<Type> &List<Type>::operator=(List<Type> & t)
{
	Key<Type> * other;
	if (!t.begin) return *this;
	else other = t.begin;
	if (!begin) {
		begin = new Key<Type>;
		Key<Type> * that = begin;
		that->value = t.begin->value;

		while (other->next) {
			that->next = new Key<Type>;
			that->next->value = other->next->value;
			other = other->next;
			that = that->next;
		}
	}
	Key<Type> * that = begin;
	that->value = t.begin->value;

	while (that->next && other->next) {
		that->next->value = other->next->value;
		other = other->next;
		that = that->next;
	}
	return *this;
}

template<class Type>
inline List<Type> & List<Type>::operator+(Type& t)
{
		Key<Type> * s = begin;

		while (s->next)
			s = s->next;
		s->next = new Key<Type>;
		s->next->value = t;
		return *this;
}

template<class Type>
inline List<Type>& List<Type>::operator--(int unused)
{
	Key<Type> * s = begin;
	Key<Type> * r = NULL;
	while (s->next) {
		r = s;
		s = s->next;
	}
	r->next = NULL;
	return *this;
}

template<class Type>
inline bool List<Type>::operator!=(List<Type> &t)
{
	Key<Type>* that = begin;
	Key<Type>* other = t.begin;

	if (that->value != other->value) return true;
	else {
		while (that->next && other->next) {
			if (that->next->value != other->next->value) return true;
			else {
				that = that->next;
				other = other->next;
			}
		}
		if (that->next && !other->next) {
			cout << "Списки разной длины! Ошибка!" << endl;
			return false;
		}
		if (other->next && !that->next) {
			cout << "Списки разной длины! Ошибка!" << endl;
			return false;
		}
	}
	return false;
}


