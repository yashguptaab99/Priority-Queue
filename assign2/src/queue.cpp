//============================================================================
// Class            : SE9
// Batch            : F9
// Roll No.         : 23121
// Author           : Yash Gupta
// Assignment No.   : 1
// Problem Statement: Implement priority queue as ADT using single linked list for servicing
//                    patients in an hospital with priorities as i) Serious (top priority) ii) medium
//                    illness (medium priority) iii) General (Least priority)
//============================================================================

#include<iostream>
#include<string.h>
#include<iomanip>
#include "queue.h"
using namespace std;

//Constructor
queue_adt::queue_adt()
{
	head=NULL;
	front=NULL;
	rear=NULL;
	totalPatients=0;
}

//Destructor
queue_adt::~queue_adt()
{

}

//Getnode function for dynamic allocation
node* queue_adt:: getnode()
{
	node *temp;
	temp=new node;
	return temp;
}

//Function used to display list of queue
void queue_adt:: display()
{
	node *temp;
	temp=getnode();
	temp=front;
	cout<<"\n\t\t------------------------------------------------------------";
	cout<<"\n\t\t                 #### Patient List ####";
	cout<<"\n\t\t------------------------------------------------------------";
	cout<<"\n\t\t   Name                Age       Patient's Priority No";
	cout<<"\n\t\t------------------------------------------------------------";
	while(temp!=NULL)
	{
		cout<<"\n\t\t   "<<setw(20)<<left<<temp->name;
		cout<<setw(15)<<left<<temp->age;
		cout<<temp->priority;
		cout<<"\n\t\t------------------------------------------------------------";
		temp=temp->next;
	}
}

//Function to insert element into queue according to into priority
void queue_adt:: enqueue()
{
	node *temp;
	temp=getnode();

	node *current;
	current=getnode();

	cout<<"\n\tEnter Patient Name::";
	cin.ignore();
	cin.getline(temp->name,29);
	while(1)
	{
		cout<<"\n\tEnter Patient's Age :";
		cin>>temp->age;
		if(temp->age>0 && temp->age<100)
			break;
		else
			cout<<"\n\tInvalid Age !!";
	}
	while(1)
	{
		cout<<"\n\tEnter priority of the patient::\n\n\t1. Serious (top priority)\n\n\t2. Medium illness (medium priority)\n\n\t3. General (Least priority)\n\n\n\tEnter the Choice :";
		cin>>temp->priority;
		if(temp->priority>0 && temp->priority<4)
			break;
		else
			cout<<"\n\tInvalid Option Selected !! Please enter again !";
	}


	//Inserting into queue from rear according to its priority
	if((front==NULL && rear==NULL) || (front->priority >= temp->priority))
	{
		temp->next=front;
		front=temp;
		rear=front;
		totalPatients++;
	}
	else
	{
		current=front;
		while(current->next!=NULL && current->priority < temp->priority)
		{
			current=current->next;
		}
		temp->next=current->next;
		current->next=temp;
		totalPatients++;
	}
}

//Function to remove element from queue from front
void queue_adt:: dequeue()
{
	node *temp;
	temp=getnode();
	temp=front;
	front=front->next;
	totalPatients--;
	delete temp;

	cout<<"\n\n\t\t!!! Patient checked successfully !!!"<<endl;
}
