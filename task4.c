#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Head or Tail game

int main(){
  srand(time(NULL));
  int i,hc=0,tc=0,r;
  char H[] = "Heads", T[] = "Tails";
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
  if(hc > tc) printf("You won\n");
  else ("You lost\n");
  return 0;
}
