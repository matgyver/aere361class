/*
AerE 361 Module 10
Gaussian Elimination
*/


#include<stdio.h>
#include<math.h>

// Function to perform the Gaussian Elimination
void gaussElimination(int m, int n, double A[m][n], double x[n-1]){
    int i,j,k;
    for(i=0;i<m-1;i++){
        //Partial Pivoting
        for(k=i+1;k<m;k++){
            //If the diagonal element (absolute value) is smaller than any of the terms below it
            if(fabs(A[i][i])<fabs(A[k][i])){
                //Swap the rows in the matrix
                for(j=0;j<n;j++){                
                    double temp;
                    temp=A[i][j];
                    A[i][j]=A[k][j];
                    A[k][j]=temp;
                }
            }
        }
        //Begin the Gauss Elimination
        for(k=i+1;k<m;k++){
            double  term=A[k][i]/ A[i][i];
            for(j=0;j<n;j++){
                A[k][j]=A[k][j]-term*A[i][j];
            }
        }
         
    }
    //Start with the back-substitution
    for(i=m-1;i>=0;i--){
        x[i]=A[i][n-1];
        for(j=i+1;j<n-1;j++){
            x[i]=x[i]-A[i][j]*x[j];
        }
        x[i]=x[i]/A[i][i];
    }
             
}

/*
Function that prints the elements of a matrix row-wise
Parameters: rows(m),columns(n),matrix[m][n] 
*/
void printMatrix(int m, int n, double matrix[m][n]){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%lf\t",matrix[i][j]);
        }
        printf("\n");
    } 
}
 
int main(){
    int m,n,i,j;
    m = 3;
    n = 4;
    //Declare a matrix to store the user given matrix
    double a[3][4] = {
    					{-3,2,-1,-1},
    					{6,-6,7,-7},
    					{3,-4,4,-6}
						};
    //Declare another matrix to store the resultant matrix obtained after Gauss Elimination
    double U[3][4] = {
    					{-3,2,-1,-1},
    					{6,-6,7,-7},
    					{3,-4,4,-6}
						};;
    //Declare an array to store the solution of equations
    double x[3];
    //Perform Gauss Elimination 
    gaussElimination(m,n,U,x);
    printf("\nThe Upper Triangular matrix after Gauss Eliminiation is:\n\n");
    printMatrix(m,n,U);
    printf("\nThe solution of linear equations is:\n\n");
    for(i=0;i<n-1;i++){
        printf("x[%d]=\t%lf\n",i+1,x[i]);
    }
}
