
#include<stdio.h>
int main()
{

	int bookID,duedate,returndate,daysoverdue;
	float finerate,fineamount;
	
	printf("enter book ID:");
	scanf("%d",&bookID);
	
	printf("enter due date(as an integer):");
	scanf("%d",&duedate);
	
	printf("enter return date(as an integer):");
	scanf("%d",returndate);
	
	daysoverdue=returndate-duedate;
	
	if(daysoverdue<=7){
		finerate=20;}
		else
		if(daysoverdue>7&&daysoverdue<=14)
		{finerate=50;
		}
		else
		{finerate=100;}
		
		fineamount=finerate*daysoverdue;
		
		printf("bookID:%d\n",bookID);
		printf("duedate:%d\n",duedate);
		printf("returndate:%d\n",returndate);
		printf("daysoverdue:%d\n",daysoverdue);
		printf("finerate:Ksh%.2f per day\n",finerate);
		printf("totalfine amount:Ksh%.2f\n",fineamount);
		
		return 0;
}
		
		