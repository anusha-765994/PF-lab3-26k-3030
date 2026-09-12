#include<stdio.h>
int main ()
{
	int zone_type;
	float drivers_speed,speed_limit=0;
	float fine=0;
	int base_fine = 1000;
	printf("Enter zone_type : (1=School zone,2=highway , 3=residential area)");
	scanf("%d",&zone_type);
	printf("Enter driver speed (km/h) : ");
	scanf("%f",&drivers_speed);
	switch(zone_type)
{
	case 1:
		speed_limit= 30;
		break;
		case 2:
			speed_limit=100;
		break;
		case 3:
			speed_limit=50;
		break;
		default:
			printf("invalid zone type entered\n");
		}
		if(drivers_speed > speed_limit)
		{
			fine = base_fine;
		
			if ((drivers_speed-speed_limit)> 20)
			{
				fine =base_fine*2;
			}
			printf("speed limit exceeded : %.2f",fine);
		}
			else {
				printf("Driver is within speed limit. no fine applied \n");
			}
			return 0;
			
}
