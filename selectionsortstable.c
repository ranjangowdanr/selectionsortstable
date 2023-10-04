#include<stdio.h>
void display(int a[], int n)
{
for(int i=0;i<n;i++)
printf("%d ", a[i]);
printf("\n");
}
void selectionsort(int a[], int n)
{
int min_index;
for(int i=0;i<=n-2;i++)
{
min_index=i;
for(int j=i+1;j<=n-1;j++)
{
if(a[j]<a[min_index])
 min_index=j;
}
int key=a[min_index];
for(int k=min_index;k>i;k--)
{
  a[k]=a[k-1];
 }
 
  
  a[i]=key;
}

}
int main()
{
int a[]={9,8,7,6,5,4,3};
int n=sizeof(a)/sizeof(a[0]);
printf("befoere sorting\n");
display(a,n);
printf("after sorting\n");
selectionsort(a,n);
display(a,n);
return 0;
}
