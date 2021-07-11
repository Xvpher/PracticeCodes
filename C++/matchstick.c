#include <stdio.h>
#include <stdlib.h>
int best(int n)
{
  return (rand()%4)+1;
}

int main(int argc, char const *argv[]) {
  int count, again=1, p, c, a;
  while(again)
  {
    count =21;
    while(1)
    {
      if(count<=0){printf("faulty\n");break;}
      printf("Enter your choice : ");
      scanf("%d", &p);
      count-=p;
      printf("Current ----- %d\n", count);
      // printf("here\n");
      if(count == 1) {printf("Comp Lost\n");break;}
      c = best(count);
      printf("I choose : %d\n", c);
      count-=c;
      printf("Current ----- %d\n", count);
      if(count == 1) {printf("Player Lost\n");break;}
      printf("\n");
    }
    printf("Wish to play again? \n");
    scanf("%d", &a);
    again = a;
  }
  printf("Exit\n");
  return 0;
}
