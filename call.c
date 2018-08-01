#include<stdio.h>
void main()
{
 int a[100],n,i;
 printf("Enter the no:of elements");
 scanf("%d",&n);
 printf("Enter the elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 sort(a,n);
 large(a,n);
 sum(a,n);
}
