#include<stdio.h>
#include<stdlib.h>

void zero(int ***cube, int layers, int rows, int cols){
    for(int i=0; i<layers; i++){
        for(int j=0; j<rows; j++){
            for(int k=0; k<cols; k++){
                cube[i][j][k] = 0;
            }
        }
    }
}

void print(int ***cube, int layers, int rows, int cols){
    for(int i=0; i<layers; i++){
        for(int j=0; j<rows; j++){
            for(int k=0; k<cols; k++){
                printf("%i ", cube[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void clear(int ***cube, int layers, int rows, int cols){
    for(int i=0; i<layers; i++){
        for(int j=0; j<rows; j++){
            free((void*)cube[i][j]);
        }
        free((void*)cube[i]);
    }
    free((void*)cube);
}

int main(void){
    int layers, columns, rows;
    
    printf("Please enter number of layers: ");
    scanf("%i", &layers);
    printf("Please enter number of rows: ");
    scanf("%i", &rows);
    printf("Please enter number of columns: ");
    scanf("%i", &columns);

    int ***cube = malloc(layers * sizeof(int**));
    for(int i=0; i<layers;i++){
        cube[i] = malloc(rows* sizeof(int*) );
        for(int j=0; j<rows; j++){
		    cube[i][j] = malloc(columns * sizeof(int));
        }
    }
    zero(cube, layers, rows, columns);
    print(cube, layers, rows, columns);
    clear(cube, layers, rows, columns);
    return 0;
}