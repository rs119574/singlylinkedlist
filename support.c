#include<stdio.h>
#include<stdlib.h>
#define out printf
#define in scanf
typedef struct node{
	int data;
	struct node *next;
};

node* create(int n,int *created){
	node *x=NULL,*y,*z;
	int i=0;
	if(n<0){
		out("\nOOPS!! invalid value of 'n' inputed.");
		*created=0;
	}
	else if(n==0){
		out("\nEmpty list created.");
		*created=1;
	}
	else{
		*created=1;
		x=(node *)malloc(sizeof(node));
		out("\nenter the data of node %d : ",i++);
		in("%d",&(x->data));
		x->next =NULL;
		z=x;
		while(--n){
		y=(node *)malloc(sizeof(node));
		out("enter the data of node %d : ",i++);
		in("%d",&(y->data));
		y->next=NULL;
		z->next=y;
		z=y;
		}
	}
return x;
}
void size(node *x){
	node *z;
	z=x;
	int i=0;
	if(z==NULL){
		out("\nList is empty.");
	}
	while(z!=NULL){
		i++;z=z->next;
	}
	out("\nSize is %d\n",i);
return;
}
void display(node *z){
	node *x;
	x=z;
	int i=0;
	out("\nWait: Displaying nodes...\nList is :");
	if(x==NULL) {
	out(" empty\n"); 
	return;}
	while(x!=NULL){
		out(" -> %d ",x->data);
		x=x->next;
	}
	out("-> NULL.\n"); 
return ;
}
void reverse(node *x){
	node *z,*y;
	y=NULL;
	while(x!=NULL){
		z=x->next;
		x->next=y;
		y=x;
		x=z;
	}
	x->next=y;
return ;
}









