/*
AerE 361 Module 10
Sparse Matrix Representation using Arrays
*/


#include<stdio.h> 
  
int main() 
{ 
    // Assume 4x5 sparse matrix 
    int sparseMatrix[4][5] = 
    { 
        {0 , 0 , 3 , 0 , 4 }, 
        {0 , 0 , 5 , 7 , 0 }, 
        {0 , 0 , 0 , 0 , 0 }, 
        {0 , 2 , 6 , 0 , 0 } 
    }; 
  
    int size = 0;
	printf("Original sparse matrix: \n"); 
    for (int i = 0; i < 4; i++) {
	
        for (int j = 0; j < 5; j++){
			printf("%d ", sparseMatrix[i][j]); 
            if (sparseMatrix[i][j] != 0) 
                size++; 
            }
        printf("\n"); 
    }
  
    // number of columns in compactMatrix (size) must be 
    // equal to number of non - zero elements in 
    // sparseMatrix 
    int compactMatrix[3][size]; 
  	printf("New compact matrix: \n");
    // Making of new matrix 
    int k = 0; 
    for (int i = 0; i < 4; i++) 
        for (int j = 0; j < 5; j++) 
            if (sparseMatrix[i][j] != 0) 
            { 
                compactMatrix[0][k] = i; 
                compactMatrix[1][k] = j; 
                compactMatrix[2][k] = sparseMatrix[i][j]; 
                k++; 
            } 
  
    for (int i=0; i<3; i++) 
    { 
        for (int j=0; j<size; j++) 
            printf("%d ", compactMatrix[i][j]); 
  
        printf("\n"); 
    }
	//Calculate Rows
	int sparse_rows = sizeof(sparseMatrix)/sizeof(sparseMatrix[0]);
	int compact_rows = sizeof(compactMatrix)/sizeof(compactMatrix[0]);
	//Caclulate Columns
	int sparse_col = sizeof(sparseMatrix[0])/sizeof(sparseMatrix[0][0]);
	int compact_col = sizeof(compactMatrix[0])/sizeof(compactMatrix[0][0]);
    printf("Size of the original Matrix is: %d rows, %d columns and a total of %d elements.\n",sparse_rows,sparse_col,sparse_rows*sparse_col);
    printf("Size of the compact Matrix is: %d rows, %d columns and a total of %d elements.\n",compact_rows,compact_col,compact_rows*compact_col);
    return 0; 
} 
