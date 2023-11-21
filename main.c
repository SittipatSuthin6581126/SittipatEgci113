
#define MaxRow 10 // array - maximum no of rows
#define MinRow 1  // array - minimum no of rows
#define MaxCol 6  // array - maximum no of columns
#define MinCol 1  // array - minimum no of columns

#include <stdio.h>

// Functions declaration
int ReadArraySize(int, int);
void ReadArray(int[][MaxCol], int, int);
void AddArray(int[][MaxCol], int[][MaxCol], int[][MaxCol], int, int);
void DispArray(int[][MaxCol], int, int);
void DispArrayT(int[][MaxCol], int, int);

int main()
{
    int RowSize, ColSize;
    int a[MaxRow][MaxCol], // 1st input array
        b[MaxRow][MaxCol], // 2nd input array
        c[MaxRow][MaxCol]; // resulting array

    printf("Please specify the number of rows of arrays: ");
    RowSize = ReadArraySize(MinRow, MaxRow);

    printf("Please specify the number of columns of arrays: ");
    ColSize = ReadArraySize(MinCol, MaxCol);
    printf("Array size is set to: [%d] [%d]\n", RowSize, ColSize);
    printf("\n");
        printf("*********************************************************\n");
    ReadArray(a, RowSize, ColSize); // get all values for array a (scanf)
    DispArray(a, RowSize, ColSize); // display a

    /*-----------------------------------------------------------------------*/
    ReadArray(b, RowSize, ColSize); // get all values for array b (scanf)
    DispArray(b, RowSize, ColSize); // display b
    /*-----------------------------------------------------------------------*/
    // find array c[][] = array a[][] + b[][]

    printf("The summation of Array A + Array B :\n");
    AddArray(a, b, c, RowSize, ColSize);



    DispArray(c, RowSize, ColSize); // display c

    printf("Please type any key to show the transpose: \n");
    printf("\n");
    getchar();
    DispArrayT(a, RowSize, ColSize); // display a^T
    DispArrayT(b, RowSize, ColSize); // display b^T
    DispArrayT(c, RowSize, ColSize); // display c^T

    return 0;
}

int ReadArraySize(int MinSize, int MaxSize)
{
    int size;
    do
    {
        printf("Range [%d..%d] : ", MinSize, MaxSize);
        scanf("%d", &size);
    } while (size > MaxSize || size < MinSize);

    return size;
}

void ReadArray(int arr[][MaxCol], int rows, int cols)
{   printf("\n");
    printf("Enter array values:\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("Enter value for array[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

void AddArray(int arr1[][MaxCol], int arr2[][MaxCol], int result[][MaxCol], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void DispArray(int arr[][MaxCol], int rows, int cols)
{
int i;
    printf("Array :\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("*********************************************************\n");
}

void DispArrayT(int arr[][MaxCol], int rows, int cols)
{   printf("\n");
    printf("Transpose of the array:\n");
    for (int i = 0; i < cols; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    printf("*********************************************************\n");
}
