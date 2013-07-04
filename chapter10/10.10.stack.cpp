#include <iostream>
#include "10.10.stack.h"

Stack::Stack(){
	top = 0;
}

bool Stack::push(const Item item){
	if( top == Max ){
		return false;
	}else{
		items[top++] = item;
		return true;
	}	
}
bool Stack::pop(Item& item){
	if( top > 0 ){
		item = items[--top];
		return true;
	}else{
		return false;
	}
}