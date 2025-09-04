#include<stdio.h>


void swap(int *p,int *q)
{

    int tmp;
    tmp = *p;
    *p=*q;
    *q=tmp;
}
int main()
{
    int n,m;
    //int n1=3;
    //int n2=4;
    printf("\n\n Function : swap two numbers using function :\n");
    printf("------------------------------------------------\n");
    printf("Input 1st number : ");
    scanf("%d",&n);
    printf("Input 2nd number : ");
    scanf("%d",&m);

    printf("Before swapping: n = %d, m = %d ",n,m);
    //pass the address of both variables to the function.
    swap(&n,&m);

    printf("\nAfter swapping: n = %d, m = %d \n\n",n,m);
    return 0;
}

