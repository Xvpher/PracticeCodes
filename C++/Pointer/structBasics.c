#include<stdio.h>

struct Points
{
  int x;
  int y;
};

int main()
{
  int i;
  struct Points p1 = {1,34};
  // printf("---  %d\n", p1.x);

  struct Points p2 = {.y=3, .x=45};
  // printf("(%d,%d)\n", p2.x,p2.y);

  struct Points arr[5];
  for(i=0;i<5;i++)
  {
    // scanf("%d", &arr[i].x);
    // scanf("%d", &arr[i].y);
  }
  for(i=0;i<5;i++)
  {
    // printf("(%d,%d)\n", arr[i].x,arr[i].y);
  }
  struct Points *p3 = &p2;
  printf("(%d,%d))\n", p3->x,p3->y);

  return 0;
}
