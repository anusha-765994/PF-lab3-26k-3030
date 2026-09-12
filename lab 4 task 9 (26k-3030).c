#include<stdio.h>
int main ()
{
	int hour_of_visit,membership_status;
	float bill_amount,total_bill;
	float discount_percentage;
	
	printf("Enter hour of visit :");
	scanf("%d",&hour_of_visit);
	
	printf("membership_status : (1 for member , 0 for not a member)");
	scanf("%d",&membership_status);
	
	printf("Enter total bill amount  :");
	scanf("%f",&bill_amount);
	
	if(hour_of_visit>=15 && hour_of_visit<=17)
	{
	{
		discount_percentage += 20.0;   
	}
	 if(membership_status == 1)
	{
		discount_percentage += 10.0;
	}
     if(discount_percentage> 25.0)
	{
		discount_percentage = 25.0;
	}
}
	total_bill= bill_amount - (bill_amount*(discount_percentage/100));

		printf("\n -----Total bill------\n");
		printf("\n bill amount is :%f ", bill_amount);
		printf("\n discount applied : %f", discount_percentage);
		printf("\n final payment will be : %f ",total_bill);

	return 0;	
}
