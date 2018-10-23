#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define N 10

// int q[N];
// int front = -1, rear = -1;

// void enqueue(int n){
// 	if(rear>=N-1){
// 		cout<<"Q full!";
// 		return;
// 	}
// 	if(front==-1){
// 		front=rear=0;
// 	}
// 	else{
// 		rear++;
// 	}
// 	q[rear]=n;
// }

// void dequeue(){
// 	if(rear==front){
// 		cout<<"Q empty!";
// 		return;
// 	}
// 	front++;
// 	if(rear==front)
// 		front=rear=-1;
// }

// void display(){
// 	if(front==rear){
// 		cout<<"Q empty!";
// 		return;
// 	}
// 	for (int i = front; i <= rear; ++i)
// 	{
// 		cout<<q[i]<<" ";
// 	}
// }

// int main(){

// 	int choice;
// 	do{
// 		cout<<"\n1.enqueue\n2.dequeue\n3.display\n4.Exit\nEnter choice : ";
// 		cin>>choice;
// 		switch(choice){
// 			case 1: int x;
// 					cin>>x;
// 					enqueue(x);
// 					break;
// 			case 2: dequeue();
// 					break;
// 			case 3: display();
// 					break;
// 		}
// 	}while(choice!=4);
	
// }

struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int n){
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = n;
	newnode->next = NULL;
	if(front==NULL){
		front = rear = newnode;
	}
	else{
		rear->next = newnode;
		rear = newnode;
	}
}

void dequeue(){
	struct node *temp = front;
	if(front==NULL){
		cout<<"Q empty!";
		return;
	}
	front = front->next;
	free(temp);
}

void display(){
	struct node *temp = front;
	if(front==NULL){
		cout<<"Q empty!";
		return;
	}
	while(temp!=rear){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main(){

	int choice;
	do{
		cout<<"\n1.enqueue\n2.dequeue\n3.display\n4.Exit\nEnter choice : ";
		cin>>choice;
		switch(choice){
			case 1: int x;
					cin>>x;
					enqueue(x);
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
		}
	}while(choice!=4);
	
}