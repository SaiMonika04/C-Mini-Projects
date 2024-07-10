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
    int flag;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(a[i]==a[j])
          {
              flag=1;
              break;
          }
          if(flag==0)
          {
              printf("\nThe elements not occurred twice is : \n%d",a[i]);
          }
        }
    }
}
