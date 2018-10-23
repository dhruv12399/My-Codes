#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define N 10

// int s[N];
// int top = -1;

// void push(int n){
// 	if(top>=N-1){
// 		cout<<"Stack overflow";
// 		return;
// 	}
// 	top++;
// 	s[top]=n;
// }

// void pop(){
// 	if(top==-1){
// 		cout<<"Stack underflow!";
// 		return;
// 	}
// 	top--;
// }

// void display(){
// 	if(top==-1){
// 		cout<<"Stack empty!";
// 		return;
// 	}
// 	for (int i = 0; i <= top; ++i)
// 	{
// 		cout<<s[i]<<" ";
// 	}
// }

// void showtop(){
// 	if (top==-1)
// 	{
// 		cout<<"Stack empty!";
// 		return;
// 	}
// 	cout<<s[top]<<endl;
// }

// int main(){

// 	int choice;
// 	do{
// 		cout<<"\n1.push\n2.pop\n3.display\n4.top\nEnter choice : ";
// 		cin>>choice;
// 		switch(choice){
// 			case 1: int x;
// 					cin>>x;
// 					push(x);
// 					break;
// 			case 2: pop();
// 					break;
// 			case 3: display();
// 					break;
// 			case 4: showtop();
// 					break;
// 		}
// 	}while(choice!=5);
	
// }



struct node
{
	int data;
	struct node *next;
}*top=NULL;

void push(int n){
	struct node *newnode;
	newnode = (struct node*) malloc(sizeof(struct node));
	newnode-> data = n;
	if(top == NULL)
		newnode->next = NULL;
	else
		newnode->next = top;
	top = newnode;
}

void pop(){
	if(top==NULL){
		cout<<"Stack underflow";
		return;
	}
	struct node *temp = top;
	top = top->next;
	free(temp);
}

void display(){
	struct node *temp = top;
	if(top==NULL){
		cout<<"Stack empty!";
		return;
	}
	while(temp!=NULL){
		cout<<temp->data;
		temp = temp->next;
	}
}

int main(){

	int choice;
	do{
		cout<<"\n1.push\n2.pop\n3.display\n4.Exit\nEnter choice : ";
		cin>>choice;
		switch(choice){
			case 1: int x;
					cin>>x;
					push(x);
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
		}
	}while(choice!=4);
	
}
