#include<iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
struct node{
	int data;
	node* next;
};
node* front =NULL;
node* rear = NULL;

void enqueue(int value);
void dequeue();
int peek();
void display();

	int main(){
		int choice,element ;
		cout<<"1- Enqueue\n";
		cout<<"2- dnqueue\n";
		cout<<"3- display\n";
		cout<<"4- peek\n";
		cout<<"5- exit\n";

		for(; ;){
			cout<<" enter choice\n";
			
			cin>>choice;
			 switch(choice){
			 	case 1:
			 		cout<<"enter elements\n";
			 		cin>>element;
			 		enqueue(element);
			 		break;
			 	case 2:
				 	dequeue();
				 	break;
				case 3 :
				display ();
				break;
				case 4:
				cout << "peek = \ "<<peek() <<"\n";
				
				break;
				case 5:
				exit(0); 	
			 }
			 
		}
		
		
	}
	
	
	void enqueue(int value){
		node* new_node=new node;
		new_node->data=value;
		new_node->next=NULL;
		
		if(front== NULL){
			front = rear =new_node;
			
		}
		else{
			rear->next = new_node;
			rear =new_node;
		}
	}
	void dequeue(){
		if(rear==NULL){
			cout <<"queue is empty" ;
		}
		else if( front == rear) {
			node* ptr =front;
			front = rear =NULL;
			delete(ptr);
			
		}
		else{
			node* ptr =front ;
			front =front->next;
			delete(ptr);
		}
	}
	int peek(){
		if(front== NULL){
			cout<<"queue is empty \n";
			return -1;
		}
		else{
			return front->data;
			
			
		}
	}
	
	
	
	
	
	
	 void display(){
	 	if ( front== NULL ){
	 		cout<<"queue is empty\n";
		 }
		 else{
		 	node* current =front;
		 	while(current !=NULL){
		 		cout<< current->data <<"   /   " ;
		 		current=current->next;
			 }
			cout<<"\n";	 
	 }
	 }
	
