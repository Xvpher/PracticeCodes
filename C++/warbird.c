#include<stdio.h>
int main()
{
int i=0,n,k;
printf("Enter the value of n\n");
scanf("%d", &n);
int a[n];
printf("enter\n");
for(i=0;i<n;i++)
{
scanf("%d", &a[i]);
}
int b[2*n];
for(i=0;i<2*n;i++)
{
b[i]=0;
}
for(i=0;i<n;i++)
{
b[a[i]]++;
}
for(i=1;i<2*n;i++)
{
printf("%d ", b[i]);
}
printf("\n");
i=1;int j=1,c=0;
while(i<2*n && j<2*n)
{
if(i==n && b[i]==1) break;
while(b[i]<=1 && i<n)
{
i++;
}
j=i+1;
while(b[j]!=0)
{
j++;
}
if(b[i]>1)
{
c=c+(j-i);
for(k=1;k<2*n;k++)
{
printf("%d ",b[k]);
}
printf("  c = %d\n",c);
b[i]--;
b[j]++;
}
}
printf("\n");
for(i=1;i<2*n;i++)
{
printf("%d ", b[i]);
}
printf("\n%d\n", c);
} 
