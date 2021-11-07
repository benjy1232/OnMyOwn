#include<stdio.h>
#include<stdlib.h>

void identity(int ** matrix, int n){
	for(int i = 0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i == j){
				matrix[i][j] = 1;
			}else{
				matrix[i][j] = 0;
			}
		}
	}
}

void print(int ** matrix, int rows, int cols){
	for(int i = 0 ; i<rows; i++){
		for(int j=0; j<cols; j++){
			printf("%i ", matrix[i][j]);
		}
		printf("\n");
	}
}

int main(void){
	int n;
	printf("Please enter number of rows/columns for matrix: ");
	scanf("%i", &n);
	int **matrix = malloc(n*sizeof(int*));
	for(int i=0; i<n; i++){
		matrix[i] = malloc(n * sizeof(int));
	}
	identity(matrix, n);
	print(matrix, n,n);
}
