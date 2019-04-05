#include<stdio.h>
#include<math.h>

struct Height
{
  int Feet;
  int Inches;
};
int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    int n,i;
    scanf("%d", &n);
    struct Height h1[n];
    for(i=0;i<n;i++)
    {
      scanf("%d", &h1[i].Feet);
      scanf("%d", &h1[i].Inches);
    }
    int k=0,c;
    i=0;
    while(i<n)
    {
      c = h1[i].Feet*12 + h1[i].Inches;
      if(c>k) k=c;
      i++;
    }
    printf("%d\n", k);
  }
}
