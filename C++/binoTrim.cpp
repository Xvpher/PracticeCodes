#include<stdio.h>
#include<math.h>
int main()
{
int n,i,j,k;
scanf("%d", &n);
int a[n],b[n];
for(i=0;i<n;i++)
{
scanf("%d", &a[i]);
}
k=n-1;
while(a[k]<5)
{
a[k-1]+=a[k];
k--;
}
i=0;
while(a[i]<5)
{
a[i+1]+=a[i];
i++;
}
printf("Result = ");
for(j=0;i<=k;j++,i++)
{
printf("%d  klmno", a[i]);
}
printf("\n");
}
