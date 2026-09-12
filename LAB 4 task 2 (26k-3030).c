#include<stdio.h>
int main ()
{
	int entry_test_score;
	float fsc_percentage;
	float combined_score;
	printf("Enter entry_test_score : ");
	scanf("%d",&entry_test_score);
	printf("Enter fsc_percentage : ");
	scanf("%f",&fsc_percentage);
	combined_score= (0.50*entry_test_score)+(fsc_percentage*0.50);
	printf("\n combined_score: %.2f",combined_score);
	if(combined_score>=80)
	{
		printf("\ncongratulations you got admission in Computer Science");
	}
	else if(combined_score >=65 && combined_score<=79)
	{
		printf("\ncongratulations you got admission in Software Engineering");
	}
	else if(combined_score >=50 && combined_score<=64)
	{
		printf("\ncongratulations you got admission in Information Technology");
	}
	else
	{
		printf("\nrejected");
	}
	return 0;
}
