#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Head or Tail game

int main(){
 
  srand(time(NULL));
  int i,hc=0,tc=0,r;
  char name[10];
  char H[] = "Heads", T[] = "Tails";

  printf("Who are you?\n> ");
  scanf("%s",name);
  printf("Hello, %s!",name);
  printf("Tossing a coin. . .\n");

  for(i = 1; i <= 3; i++){
    r = rand();
    printf("Round %d: ",i);
    if(r==0){
      printf("%s\n",H);
      hc++;
    }
    else if(r%2 == 0){
      printf("%s\n",H);
      hc++;
    }
    else{
      printf("%s\n",T);
      tc++;
    }
  }
  printf("Heads: %d, Tails: %d\n",hc,tc);
  if(hc > tc) printf("%s won\n",name);
  else ("%s lost\n",name);
  return 0;
}
