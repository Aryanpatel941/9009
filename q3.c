#include<stdio.h>
main(){
	int rows,column,i,j;
	printf(" entert no of rows :");
scanf("%d",&rows);
printf(" entert no of column :");
scanf("%d",&column);

int x[rows][column],y[rows][column],z[rows][column];
printf(" enter array of x :\n");
for(i=0;i<rows;i++){
	for(j=0;j<column;j++){
		printf("array elements x[%d][%d]",i,j);
		scanf("%d",&x[i][j]);
	}
	printf("\n");
}
printf(" enter array of y :\n");
	for(i=0;i<rows;i++){
	for(j=0;j<column;j++){
		printf("array elements y[%d][%d]",i,j);
		scanf("%d",&y[i][j]);
	}
}
	for(i=0;i<column;i++){
		for(j=0;j<column;j++){
			z[i][j]=x[i][j]+y[i][j];
}
	}
	printf(" sum is :\n");
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			printf("%d",z[i][j]);
}
printf("\n");
	}



}


