#include <stdio.h>
#include <math.h>
int main(){
	float time, distance, speed;
	printf("Enter Distance in kms:\t");
	scanf("%f",&distance);
	printf("Enter Approximate Speed in kph:\t");
	scanf("%f",&speed);
	time=distance/speed;
	printf("Required Time: %.1f hours",time);
	return 0;
}
