#include<stdio.h>
int main()
{
	int policy_status;
	float vehicle_age,claim_amount,approved_amount;
	
	printf("enter policy status : (1=active , 0=not active)");
	scanf("%d",&policy_status);
	
	printf(" enter vehicle age in years :");
	scanf("%f",&vehicle_age);
	
	printf("enter claim amount :");
	scanf("%f",&claim_amount);
	
	if(policy_status ==1 && claim_amount<=500000.0)
	{
		if(vehicle_age<10)
		{
			approved_amount=claim_amount;
			printf("claim approved : %.2f\n",approved_amount);
		}

		else if(vehicle_age>= 10 && vehicle_age<=15)
		{
			approved_amount = claim_amount*0.50;
			printf("50 percent claim is approved : %.2f\n",approved_amount);
		}
	}
		else
		{
			if(policy_status != 1)
		printf("claim is rejected");
		else if(claim_amount>50000.0)
		printf(" claim rejected : claim amount exceeds 500000.0");
	}
	}
