#include<stdio.h>
#include<stdlib.h>

char *decToBin(int n)
{
  int c,d,count;
  char *pointer;
  count = 0;
  pointer = (char*)malloc(32+1);
  if(pointer==NULL) exit(EXIT_FAILURE);
  for(c=31;c>=0;c--)
  {
    d=n>>c;
    if(d&1) *(pointer+count)=1+'0';
    else *(pointer+count)=0+'0';
    count++;
  }
  *(pointer+count)='\0';
  return pointer;
}

char *powerOfTwo(char *pointer)
{
  int c,count =0;
  for(c=31;c>=0;c--)
  {
    printf("%d\t", *(pointer+count));
    count ++;
  }
  return pointer;
}

int main()
{
int n,c,k;
char str[32];
printf("Enter a number\n");
scanf("%s",&str);
// pointer = decToBin(n);
// printf("%s\n", pointer);
// free(pointer);
printf("%d\n", l);

return 0;
}
