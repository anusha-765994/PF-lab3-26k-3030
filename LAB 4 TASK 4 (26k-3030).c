#include<stdio.h>
int main ()
{
	int type_of_membership,time_slot;
	float base_rate, final_fee;
	printf("Select membership type (1=student,2=Regular,3=fixed deposit)");  
	scanf("%d",&type_of_membership);
	printf("Enter time_slot : (1= morning, 2=Evening)");
	scanf("\n%d",&time_slot);
	switch(type_of_membership)
	{
		case 1:
		base_rate=2000.0;
		break;
		case 2:
		base_rate=3500.0;
		break;	
		case 3:
		base_rate=2500.0;
		break;
		default:
		printf("Invalid membership type");		
		} 
		switch(time_slot)
		{
		case 1:
	    final_fee=base_rate*0.85;
		break;
		case 2:
		final_fee=base_rate;
		break;
		default:
			printf("invalid time slot");
	}
	printf("final monthly fee : %.2f%",final_fee);
		}

