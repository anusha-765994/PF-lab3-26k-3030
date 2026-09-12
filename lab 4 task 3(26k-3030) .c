#include<stdio.h>
int main()
{
	int account_type;
	float balance;
	float interest_rate = 0.0;
	float interest_earned=0.0;
	float annually_interest_earned;
	printf("Enter account_type (1=savings,2=current,3=fixed deposit):");
	scanf("%d",&account_type);
	printf("Enter balance(rs.) : ");
	scanf("%f",&balance);
	switch (account_type) 
	{
	case 1:
	if(balance>100000)
	{
    interest_rate=0.04;
	}
	else
	{
	interest_rate=0.02;
	}
	break;
	case 2:
	interest_rate=0.00;
	break;
	case 3:
	interest_rate=0.08;
	break;
	default:
	printf("invalid account type entered\n");
	}
	interest_earned= balance*interest_rate;
	printf("interest_rate %.1f%\n",interest_rate*100);
	printf("\n annually_interest_earned:%.2f%\n ",interest_earned);
	}
	
	
		
		
		
		
		
