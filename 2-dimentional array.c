#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the order of matrix m,n values : \n");
    scanf("%d %d", &m,&n);
    int a[m][n];
    printf("Enter elements into array : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements in the matrix are : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

