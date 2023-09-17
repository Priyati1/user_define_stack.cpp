#include"stack.h"
#include<iostream>
int main(){
	Stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	while(!s.is_empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}