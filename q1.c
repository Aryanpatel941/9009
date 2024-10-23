#include<stdio.h>

void swap(int x ,int y){
	x=x+y;
	y=x-y;
	x=x-y;
	printf("%d , %d", x,y);
}	
main(){
	swap(5,6);
}

