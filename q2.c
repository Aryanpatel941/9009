#include<stdio.h>
main(){
	float celsius;
	printf(" enter temperature in celsius :");
	scanf("%f",&celsius);
	
	float fahrenheit;
	fahrenheit= 9.0/5*celsius+32;
	
	printf(" temperature in fahrenheit is :%f",fahrenheit);
}
