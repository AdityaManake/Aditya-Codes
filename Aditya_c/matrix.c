//By using iterative method
/*
#include <stdio.h>
int main()
{
    int i, j, k;
    int matrix1[3][3], matrix2[3][3], result[3][3];
    printf("Enter the elements of 1st matrxi:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix:\n");
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("The required matrix is:\n");
   
    
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
        
    

    return 0;
}


// By using functions
 
#include<stdio.h>
void takingInput(int arr[3][3]);
void multiplicationOfMatrices(int matrix1[3][3], int matrix2[3][3]);
void printingResult(int arr2[3][3]);

    int main()
    {
       int matrix1[3][3],matrix2[3][3];
       takingInput(matrix1);
       takingInput(matrix2);
       multiplicationOfMatrices(matrix1, matrix2);
        return 0;
    }

    void takingInput(int arr[3][3])
    {
      printf("Enter the elements of the matrix:\n");  
      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }      
      }      
    }

    void multiplicationOfMatrices(int matrix1[3][3],int matrix2[3][3])
    {
        int result[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j]=0;
            for (int k = 0; k < 3; k++)
            {
                result[i][j]+=matrix1[i][k]*matrix2[k][j];
            }            
        }        
    }
    printingResult(result);
    }

    void printingResult(int arr2[3][3])
    {
        printf("The resulting matrix is:\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
               printf("%d ",arr2[i][j]);
            }
            printf("\n");
        }        
    }/**/ 
    #include<stdio.h>
    int main()
    {
      int rows,columns,i,j;
      printf("Enter the number of rows:");
scanf("%d",&rows);
      printf("Enter the number of columns:");
      scanf("%d",&columns);
      int matrix[100][100],transpose[100][100];
      printf("Enter the array elements:\n");
      for ( i = 0; i < rows; i++)
      {
        for ( j = 0; j < columns; j++)
        {
            printf("[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
        
      }
      for ( i = 0; i < rows; i++)
      {
        for ( j = 0; j < columns; j++)
        {
            transpose[j][i]=matrix[i][j];
        }
        
      }
      printf("The orignal matrix is:\n");
      for ( i = 0; i < rows; i++)
      {
        for ( j = 0; j < columns; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
      }
      printf("The transposed matrix is:\n");
      for ( i = 0; i < rows; i++)
      {
        for ( j = 0; j < columns; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
      }
      
        return 0;
    }
