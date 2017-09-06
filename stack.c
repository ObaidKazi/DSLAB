#include<stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE],top=-1;

//return true if stack is full else false
int isFull(){
	
	return top==MAX_SIZE-1; 
}
//return true if stack is empty else false
int isEmpty(){
	return top==-1;
	}
	//return element at top of stack
int peek(){
		if(!isEmpty())
			return stack[top];
		else{
			printf("\n Stack is empty. Returning  -1");
			return -1;
		}
		
		
		}
		void push (int e)
		{
				if(!isFull())
				{
					stack[++top]=e;
					printf("\n Element is successfully inserted\n");
			}
			else
			{
				printf("\n Stack is Overflow. Element cannot be inserted\n");
			}	
		}
			int pop (){
				int d;
				if(!isEmpty()){
					d=stack[top--];
					return d;
					}
					else
					{
						printf("|n Stack Underflow.No Element to delete.Returning -1");
						return -1;
						}
				}
				
				
int main(){
		int choice,e;
		while(1){		
		printf("\nEnter Your Choice:>");
		printf("\n 1:Push \n 2:Pop \n 3:Peek \n 4:Exit \n");
		scanf("%d",&choice);
		switch(choice)		{
			case 1:
				printf("\n Please Enter the element to be inserted\n");
				scanf("%d",&e);
				push(e);
				break;
			case 2:
				e=pop();
				printf("\n The Element Deleted is :>%d\n",e);
				break;
			case 3:
				e=peek();
				printf("\n Element at top of stack is %d:>\n",e);
				break;
			case 4:
				return 0;
				break;
			default:
			printf("Wrong Choice");
			break;
			}
		}
	return 0;
}
