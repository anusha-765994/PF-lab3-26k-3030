#include<stdio.h>
int main()
{
	int plan_choice;
	int minutes_used;
	float total_bill;
	printf("enter plan choice : (1=plan 1,2=plan 2,3=plan 3,4=plan 4)");
	scanf("%d",&plan_choice);
	printf("Enter minutes used :  ");
	scanf("%d",&minutes_used);
	switch (plan_choice)
	{
		case 1:
	    	total_bill=500.0;
	    	if(minutes_used > 1000)
	    	    total_bill=(minutes_used-1000)*2.0;
			break;
	
		case 2:
			total_bill=800.0;
			if(minutes_used>2000) 
				total_bill=(minutes_used-2000)*2.0;
			break;
		case 3:
			total_bill=1200.0;
			break;
		case 4:
			total_bill=minutes_used*1.0;
			break;
			
		default:
	       printf("invalid plan choice entered");
	}
	printf("Total bill amount: %.2f",total_bill);
	return 0;
}
