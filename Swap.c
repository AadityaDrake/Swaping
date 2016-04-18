#include<stdio.h>
void swap(int *x,int *y);
void main()
{
        int a=2,b=3,c;
	printf("Actual Values Of a & b were\na=%d b=%d\n", a,b);
	swap(&a,&b);
	printf("Swapped Values Of a & b are\na=%d b=%d\n", a,b);
}
void swap(int *x,int *y)
{
	int temp;
        temp=*x;
	*x=*y;
        *y=temp;
}
