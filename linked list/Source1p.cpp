
#include<stdio.h>
#include<stdlib.h>
struct list{
	int data;
	struct list *next;
};
typedef struct list node;
void display(node *start);
int main(){
	node *start,*temp,*prev;
	int ans;
	printf("Do you want to add Data: ");
	scanf("%d", &ans);
	start= NULL;
	while(ans==1)
	{
		if(start==NULL)
		{
			start= new node();
			start->next= NULL;
			printf("Enter data: ");
			scanf("%d",&start->data);
			prev=start;
		}
		else
		{
			temp =new node();
			temp->next= NULL;
			printf("Enter data: ");
			scanf("%d", &temp->data);
			prev->next=temp;
			prev=temp;
		}

		printf("Do you want to add Data: ");
		scanf("%d", &ans);
	}
	printf("\nLinkedlist: ");
	display(start);
	getchar();

	return 0;
}
void display(node *start)
{
	node *temp;
	temp= start;
	
	while(temp!=NULL){
		printf("%d ",temp->data);//to print
		temp=temp->next;
	}
	getchar();

	return;
}