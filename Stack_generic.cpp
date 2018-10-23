#include <iostream>
using namespace std;
#define SIZE 10 
 
template <class T>

class stack {
  
	T stck[SIZE];
	int tos;
 
public:
	stack() {
		tos = 0;
	}
	
	void push(T ob)
	{
		if(tos==SIZE) {
			cout << "Stack is full.\n";
			return;
	  	}
		stck[tos] = ob;
		tos++;
	}
 
	T pop()
	{
		if(tos==0) {
			cout << "Stack is empty.\n";
			return 0;
		}
		tos--;
		return stck[tos];
	}

	void display(){
		if(tos!=0){
			for (int i = 0; i < tos; ++i)
			{
				cout<<stck[i]<<" ";
			}
		}
		else
			cout<<"stack empty!"<<endl;
	}
};
 
int main() {
	stack<int> s1;
 
	for (int i = 0; i < 5; ++i)
		s1.push(i);

	for(int i=0; i<5; i++)
		cout<< s1.pop() <<" ";

	cout<<endl;

	stack<char> s2;

	s2.push('v');
	s2.push('u');
	s2.push('r');
	s2.push('h');
	s2.push('d');

	s2.display();
	
	// for(int i=0; i<5; i++)
	// 	cout<<s2.pop()<<" "; 
	return 0;
}