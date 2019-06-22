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


#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

struct node
{
	char name[30];
	int age;
	int priority;
	struct node *next;
};

class queue_adt
{
	node *head,*front,*rear;
	int totalPatients;

public:

	queue_adt();

	node* getnode();
	void display();
	void enqueue();
	void dequeue();

	virtual ~queue_adt();
};

#endif /* LINKEDLIST_H_ */
