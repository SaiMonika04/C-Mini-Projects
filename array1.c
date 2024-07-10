#include<stdio.h>
int main()
{
    int n;
    printf("Enter n value : \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements into array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array is : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum ^= a[i];
    }
    printf("\nThe elements not occurred twice is : %d",sum);
    return 0;
}

