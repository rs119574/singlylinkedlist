#include<stdio.h>
#include<stdlib.h>
#include"support.c"
#include"add.c"
#include"delete.c"
#define out printf
#define in scanf
int main(void){
	out("OPERATION ON SINGLY LINKED LIST\n");
	out("\nLet's firstly create singly linked list: ");
	z:
	out("\n\tEnter the no. of nodes to be created: ");
	int n;in("%d",&n);
	node *x=NULL;
	int created=0;
	x=create(n,&created);
	if(created==0){
		out("List not created.\n\tre-enter:\n");
		goto z;
	}
	int i=0;
	y:
	out("\n");
	for(i=0;i<40;i++)out("-");i=0;
	out("\nNow let's OPERATE on list: \n");
	for(i=0;i<32;i++)out("-");i=0;
	out("\n%d.Find out the size of list",++i);
	out("\n%d.Display the node",++i);
	out("\n%d.Insert the node",++i);
	out("\n%d.Delete the node",++i);
	out("\n%d.Reverse the node",++i);
	out("\n%d.Re-create the list",++i);
	out("\n%d.Exit",++i);
	i=0;
	out("\nEnter your choice : ");
	int choice;in("%d",&choice);
	for(i=0;i<40;i++)out("-");i=0;
	out("\n");
	
	switch (choice){
		case 1:
			// size of list
			size(x);
			goto y;
		case 2:
			// Display the list
			display(x);
			goto y;
		case 3:
			// Insertion in the list
			
		case 4:
			// Performing deletion in the list
			
		case 5:
			// reverse the list
			out("\nwait:  Reversing...\n");
			reverse(x);
			out("DONE\tList has been reversed.\n");
			goto y;
		case 6:
			out("\nLet's re-create the list: ");
			goto z;
		case 7:
			out("\nTHANK YOU for using our program");
			exit(0);
		default:
			out("\nOOPS!!! wrong input...");
			out("\n we are taking you back to re-enter the choice.\n re-enter:");
			goto y;
			
	}
return 0;
}
