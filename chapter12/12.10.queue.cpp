#include "12.10.queue.h"
#include <cstdlib>

Queue::Queue(int qs): qSize(qs){
	first = last = NULL;
	items = 0;
}
Queue::~Queue(){
	Node* temp;
	while(first != NULL){
		temp = first;
		first = first->next;
		delete temp;
	}
}
bool Queue::isEmpty()const{
	return items == 0;
}
bool Queue::isFull()const{
	return items == qSize;
}
int Queue::count()const{
	return items;
}
bool Queue::enQueue(const Item& item){
	if(isFull()){
		return false;
	}
	Node* add = new Node;
	if(add == NULL){
		return false;
	}
	add->item = item;
	add->next = NULL;
	items++;
	if(first == NULL){
		first = add;
	}else{
		last->next = add;
	}
	last = add;
	return true;
}

bool Queue::deQueue(Item& item){
	if(isEmpty()){
		return false;
	}
	item = first->item;
	items--;
	Node* temp = first;
	first = first->next;
	delete temp;
	if( items == 0){
		last = NULL;
	}
	return true;
}
void Customer::set(long when){
	processTime = std::rand()%3 + 1;
	arrive = when;
}
		
