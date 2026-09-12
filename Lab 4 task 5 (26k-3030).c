#include<stdio.h>
int main()
{
int number_of_people;
float combined_weight;
 printf("enter number of people :");
 scanf("%d",&number_of_people);
 printf("enter combined_weight : ");
 scanf("%f",&combined_weight);
 if ( number_of_people> 10 && combined_weight>1000.0)
 {
 	printf("entry denied: due to overweight and exceeding people limit ");
 }
 else if( number_of_people > 10)
 {
 	printf("entry denied: due to exceeding people limit ");
 }
 else if(combined_weight > 1000.0)
 {
 	printf("entry denied: due to overweight ");
 }
  else
 {
 	printf("elevator operating normally \n");
 }
 return 0;
}
