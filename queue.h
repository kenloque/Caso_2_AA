#ifndef QUEUE_H_
#define QUEUE_H_

#include "list.h"

template <class T>
class Queue : public List{
public:
	void queue(T &pValue){
		addToEnd(pValue);
	}
	
	T dequeue(){
		T element = getFirst();
		deleteFirst();
		return element;	
	}
};
typedef Queue<T>*  ptrQueue;
#endif
