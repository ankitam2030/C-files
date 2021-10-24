#include<stdio.h>
int main(){
    int row,col,i,j,mat[10][10];
    printf("Enter the no. of rows & columns:\n");
    scanf("%d",&row);
    scanf("%d",&col);
    printf("Enter the elements of matrix:\n");
    for( i=0;i<row;i++){
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }
    printf("The Lower Triangular Matrix is:\n");
    for( i=0;i<row;i++){
        printf("\n");
        for ( j = 0; j < col; j++)
        {
            if(i>=j){
                printf("%d\t",mat[i][j]);
            }
            else{
                printf("0");
                printf("\t");
            }
        }
        
    }

    printf("\n\n The Upper Triangular Matrix is:\n");
    for( i=0;i<row;i++){
        printf("\n");
        for ( j = 0; j < col; j++)
        {
            if(i>j){
                printf("0");
                printf("\t");
            }
            else{
                printf("%d\t",mat[i][j]);
            }
        }
        
    }
    return 0;
}
