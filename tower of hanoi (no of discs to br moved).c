#include <stdio.h>
void TOH(int n,char fr,char tr,char ar)
//fr=from rod,tr=to rod,ar=aux rod
{
    if (n == 1)
    {
        printf("%c to %c",fr,tr);
        return;
    }
    TOH(n-1,fr,ar,tr);
    printf("\n%c to %c\n",fr,tr);
    TOH(n-1,ar,tr,fr);
}
int main()
{
    int n;
    printf("Enter Number of discs to be moved : ");
    scanf("%d",&n);
    TOH(n,'A','C','B');
    return 0;
}
