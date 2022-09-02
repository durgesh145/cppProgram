#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int coeff,expo;
	struct node *next;
}N;

N *input();
N *p_addition(N *,N *);
N *getnode();

N *getnode() {
	N *new;
	new=(N*)malloc(sizeof(N));		
	new->next=NULL;
}
N *p_addition(N *ptr,N *qtr) {
	N *rptr=getnode(),*r1ptr=rptr,*aptr=NULL;
	int s;
	printf("\n...................addition starts...................\n");
	while(ptr!=NULL&&qtr!=NULL) {
		if(ptr->expo==qtr->expo) {
			s=ptr->coeff+qtr->coeff;
			if(s!=0) {
				aptr=getnode();
				aptr->coeff=s;
				aptr->expo=ptr->expo;
				r1ptr->next=aptr;
				r1ptr=aptr;
			}			
			ptr=ptr->next;
			qtr=qtr->next;
		}
		
		else if(ptr->expo>qtr->expo) {
			aptr=getnode();
			aptr->coeff=ptr->coeff;
			aptr->expo=ptr->expo;
			ptr=ptr->next;
			r1ptr->next=aptr;
			r1ptr=aptr;
		}
		else {
			aptr=getnode();
			aptr->coeff=qtr->coeff;
			aptr->expo=qtr->expo;
			qtr=qtr->next;
			r1ptr->next=aptr;
			r1ptr=aptr;

		}
	}
		while(ptr!=NULL) {
			aptr=getnode();
			aptr->coeff=ptr->coeff;
			aptr->expo=ptr->expo;
			ptr=ptr->next;
			r1ptr->next=aptr;
			r1ptr=aptr;

		}
		while(qtr!=NULL) {
			aptr=getnode();
			aptr->coeff=qtr->coeff;
			aptr->expo=qtr->expo;
			qtr=qtr->next;
			r1ptr->next=aptr;
			r1ptr=aptr;
		}		
		return (rptr->next);
}
N *input()
{
	N *new,*qtr,*ptr;
	int i,n;
	new=(N *)malloc(sizeof(N));
	new->next=NULL;
	qtr=new;
	printf("Enter number of nodes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		ptr=(N*)malloc(sizeof(N));		
		printf("Enter Coeff & Expo respectively");
		scanf("%d%d",&ptr->coeff,&ptr->expo);
		ptr->next=NULL;
		qtr->next=ptr;
		qtr=qtr->next;
	}
	return(new->next);
}
int main() 
{
	N *ptr,*qtr,*add;
	ptr=input();
	qtr=input();
	add=p_addition(ptr,qtr);
	while(add!=NULL) {
		printf("%dX^%d+",add->coeff,add->expo);
		add=add->next;
	}

}