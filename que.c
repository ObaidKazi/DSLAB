#include<stdio.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;

//return true if queue is full else false
int isFull(){
	
	return rear==MAX_SIZE-1; 
}
//return true if queue is empty else false
int isEmpty(){
	return front&&rear==-1;
	}
	//return element at top of stack
void display()
{
	int i;
		if(!isEmpty())
		{
			
		for(i=front;i<=rear;i++)
				printf("%d\t",queue[i]);
				
			}	
			
		else
		{
			printf("\n Queue is empty. Returning  -1");
		}
	
		}
	
		void insert (int e)
		{
				if(!isFull())
				{
					if(isEmpty())
					{
					front=0;
				}
				
					rear++;
					queue[rear]=e;
					printf("\n Element is successfully inserted\n");
					
			}
		
			else
			{
				printf("\n Queue is Full. Element cannot be inserted\n");
			}	
		}
			int delete ()
			{
				int d;
				if(!isEmpty())
				{
					
					d=queue[front];
					
					if(front==rear)
					{
						front=rear=-1;
					}
					
					else
					
					front++;
					return d;
					
				}
					else
					{
						printf("Queue is emty.No Element to delete");
						return -1;
						}
				
			}
			
int main()
{
		int choice,e;
		do{		
		printf("\nEnter Your Choice:>");
		printf("\n 1:Insert \n 2:delete \n 3:display \n 4:Exit \n");
		scanf("%d",&choice);
		switch(choice)		
		{
			case 1:
				printf("\n Please Enter the element to be inserted\n");
				scanf("%d",&e);
				insert(e);
				break;
			case 2:
				e=delete();
				printf("\n The Element Deleted is :>%d\n",e);
				break;
			case 3:
				display();
				
				break;
			case 4:
				return 0;
				break;
			default:
			printf("Wrong Choice");
			break;
			}
		}
		while(1);
	return 0;
}

