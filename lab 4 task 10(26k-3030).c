#include<stdio.h>
int main()
{
	float heart_rate,temperature; 
	
	printf("Enter heart rate :");
	scanf("%f",&heart_rate);
	
	printf("Enter temperature : ");
	scanf("%f",&temperature);
	
	if(heart_rate > 120 && temperature > 39)
	{
		printf("Critical - immediate Attention ");
	}
	else if(( heart_rate>= 100 && heart_rate <=120) || (temperature >= 37.5 && temperature <= 39))
	{
		printf("urgent\n");
	}
	else
	{
		printf(" normal- wait in quene");
	}
}

