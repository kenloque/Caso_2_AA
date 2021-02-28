#ifndef STACK_H_
#define STACK_H_

#include "list.h"

template <class T>
class Stack : public List{
public:
	void push(T &pValue){
		addToEnd(pValue);
	}
	
	T pop(){
		T element = getLast();
		deleteLast();
		return element;	
	}
};
typedef Stack<T>*  ptrStack;
#endif
