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
#include "queue.h"
using namespace std;

int main()
{
	queue_adt patient;//Priority Queue object
	int choice;

	do
	{
		//MENU
		cout<<"\n\n\t*********************\n";
		cout<<"\tWELCOME TO THE MENU ! \n";
		cout<<"\t*********************\n";

		cout<<"\n\t1.Entry For A Patient\n\n\t2.Display Priority Queue for Patients\n\n\t3.Delete an Entry (According to Priority)\n\n\t4.Exit";
		cout<<"\n\nEnter the Choice :";
		cin>>choice;

		switch(choice)
		{
		case 1:
			patient.enqueue();
			break;

		case 2:
			patient.display();
			break;

		case 3:
			patient.dequeue();
			break;

		case 4://Exit
			cout<<"\n\tProgram Terminated Successfully !!";
			break;
		}
	}while(choice!=4);

	return 0;
}
