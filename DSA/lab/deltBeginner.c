#include<stdio.h>
#include<stdlib.h>
void create(int);
void begdelete();
struct node
{
int data;
struct node *next;
};
struct node *head;
void main ()
{
int choice,item;
do
{
printf("\n1.Append List\n2.Delete node\n3.Exit\n4.Enter your choice?");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nEnter the item\n");
scanf("%d",&item);
create(item);
break;
case 2:
begdelete();
break;
case 3:
exit(0);
break;
default:
printf("\nPlease enter valid choice\n");
}

}while(choice != 3);
}
void create(int item)
{
struct node *ptr = (struct node *)malloc(sizeof(struct node *));
if(ptr == NULL)
{
printf("\nOVERFLOW\n");
}
else
{
ptr->data = item;
ptr->next = head;
head = ptr;
printf("\nNode inserted\n");
}

}
void begdelete()
{
struct node *ptr;
if(head == NULL)
{
printf("\nList is empty");
}
else
{
ptr = head;
head = ptr->next;
free(ptr);
printf("\n Node deleted from the begining ...");
}
}





	// Create a new LL node
		QNode* temp = new QNode(x);

		// If queue is empty, then
		// new node is front and rear both
		if (rear == NULL) {
			front = rear = temp;
			return;
		}

		// Add the new node at
		// the end of queue and change rear
		rear->next = temp;
		rear = temp;
	}

	// Function to remove
	// a key from given queue q
	void deQueue()
	{
		// If queue is empty, return NULL.
		if (front == NULL)
			return;

		// Store previous front and
		// move front one node ahead
		QNode* temp = front;
		front = front->next;

		// If front becomes NULL, then
		// change rear also as NULL
		if (front == NULL)
			rear = NULL;

		delete (temp);
	}
};

// Driver code
int main()
{

	Queue q;
	q.enQueue(10);
	q.enQueue(20);
	q.deQueue();
	q.deQueue();
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.deQueue();
	cout << "Queue Front : " << ((q.front != NULL) ? (q.front)->data : -1)<< endl;
	cout << "Queue Rear : " << ((q.rear != NULL) ? (q.rear)->data : -1);
}
write a simple queue program using linklist, in this program the input will be taten by the user