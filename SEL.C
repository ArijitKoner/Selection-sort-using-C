#include<stdio.h>
#include<conio.h>
void s_sort(int a[],int n)
{
int i,j,t;
  for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
     { if(a[j]<a[i])
       { t=a[i];
	a[i]=a[j];
	 a[j]=t;
	     }
	     }}}


void main()
{
    int a[100],i,n;
   clrscr();
   printf("\nEnter The number of Element:\n");
    scanf("%d",&n);
    printf("\nEnter Elements:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    s_sort(a,n);
    printf("\nAfter Sorting\n");
    for(i=0;i<n;i++)
    {
		    printf("%d\t",a[i]);
    }
    getch();

}
