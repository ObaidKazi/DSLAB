#include<stdio.h>
#include<stdlib.h>

typedef singlyLL
{
	int data;
	struct singlyLL *next;
}node;

void traverse(node *q){
node *temp;
temp=q;
while(temp!=NULL)
{
	printf("%d\t",temp->data);
	temp=temp->next;

}
}

void insert_beg (node **q,int num){
	node *ptr,*temp;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=num;
	temp=*q;
	if(temp=NULL)
	{
		ptr->next=NULL;
	else
	ptr->next=temp;
	*q=ptr;
	print(*q);
} 
}

void insert_end(node **q,int num){
	node *ptr,*temp;
	ptr=(node*)malloc(sizeof (node));
	ptr->data=num;
	ptr->next=NULL;
	temp=*q;
	if(temp==NULL)
	{
		*q=ptr;
	else
	while(temp-next!=NULL)
	
	{
		temp=temp->next;
		temp->next=ptr;
	}
	}
print(*q); 
}
void insert_loc(node *q,int num){
	node *ptr,*temp,*old;
	int loc,i;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=num;
	temp=q;
	printf("\n Enter the location where node is to be inserted");
	scanf("%d",&loc);
	if(loc==1)
	{
		printf("\nPlese use Insert at Begin Option";
		return 0;
	}
	
	for(i=1;i<loc;i++)
	  {
		if(temp==NULL)
		{
			printf("\n Number of node in linked list is less than location");
			return 0;
		}
			old=temp;
		temp=temp->next;
		
		}
		if(temp==NULL)
		{
			printf("\n Please use insert at end option");
			return 0;
		}
		
		old->next=ptr;
		ptr->next=temp;
		
	}
	void delete (node **q,int num){
	node *temp,*old;
	int f;
	temp=*q;
	old=NULL;
	
	while(temp!=NULL)
	{
		if(temp->data==num)
		{	
			f=1;
			if(temp==*q)
			*q=temp->next;
			else
			old->next=temp->next;
			free(temp);
			break;
			}
			if(f==0)
			{
		printf("\n Linked list Empty)";
		return;
				}
		old=temp;
		temp=temp->next;
		}
		
		
	printf("\n Enter the location where node is to be Deleted");
	scanf("%d",&loc);
	
	for(i=1;i<loc;i++)
	  {
		  
		old->next=ptr;
		ptr->next=temp;
		
		print(*q);
			
		}
	void print(node *q){
		printf("\nThe Element of linked list are");
		traverse(q);
		printf("\nEnd Of Linked List");
		}
int main()
{
	int choice,i,n;
	node *start;
	printf("\nENter the Number of node"):
	scanf("%d",&n);
	if(n<1)
	{
		printf("|n Invalid Number of Nodes");
		return 0;
		
		}
		for(i=0;i<n;i++)
		{
			pre=(node*)malloc(sizeof(node));
			if(i==0)
			start=ptr;
			else
			temp->next=ptr;
			printf("\nEnter  the data for node %d",(i+1));
			scanf("%d",&ptr->data);
			temp=ptr;
			temp->next=ptr;
			
			}
			pre->next=NULL:
			do{
				printf("\n Enter your Choices ");
				printf("\n 1:Insert the begining \n 2:Insert the ending \n 3:insert at any specified location  \n 4:delete  \n 5:Print \n");
		scanf("%d",&choice);
		switch(choice)		
		{
			case 1:
				int a;
				printf("\n Please Enter the element to be inserted In begining\n");
				scanf("%d",&a);
				insert_beg(&start,a);
				break;
			case 2:
				int b;
				printf("\n Please Enter the element to be inserted in Ending\n");
				scanf("%d",&b);
				insert_end(&start,b);
				break;
			case 3:
				int c;
				printf("\n Please Enter the element to be inserted in Location\n");
				scanf("%d",&c);
				insert_loc(&start,c);
				break;
			case 4:
				int d;
				printf("\n Please enter the element to be delete");
				scanf("%d",&d);
				delete(d);
			default:
			printf("Wrong Choice");
			break;
			}
		}
		while(1);
				}
			
			return 0'
	}
