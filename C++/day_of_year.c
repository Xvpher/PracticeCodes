#include<stdio.h>
int check_leap(int n)
{
  if(n%400 == 0) return 1;
  else if(n%100 == 0) return 0;
  else if(n%4 == 0) return 1;
  else return 0;
}

int main()
{
  int i,n;
  char days[7][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  printf("Enter \n");
  scanf("%d", &n);
  int leaps = 0, non_leaps = 0, count;
  for(i=1;i<n;i++)
  {
    if(check_leap(i)) leaps+=1;
    else non_leaps+=1;
  }
  count = (leaps*2 + non_leaps*1)%7;
  printf("%s\n", days[count]);
  return 0;
}
