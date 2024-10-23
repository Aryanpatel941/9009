#include<stdio.h>
main(){
	int i,j,k;
    char ch='A';
    for(i=0;i<5;i++){
    	for(k=i;k<5;k++){
    		printf(" ");
		}
    	for(j=i;j>=0;j--){
    		printf("%c",ch+j);
		}
		printf("\n");
	}
	
	

}
