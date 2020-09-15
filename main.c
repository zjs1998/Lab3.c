// Author: Jingsheng Zhang jxz5511@psu.edu
// Collaborator: George Saakyan gxs5416@psu.edu
// Collaborator: Dylan Meza dmm7036@psu.edu
// Collaborator: Tim Dai tfd5244@psu.edu
// Section: 7
// Breakout: 12
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int sum_n(int n){
  int sum;
    if (n==0)
      sum=0;
    else
      sum=sum_n(n-1)+n;
      return sum;
 }

void print_n(const char *s, int n){
   if (n>=1){
     printf("%s\n",s);
     print_n(s,n-1);
   }
   else 
    return;
 }

int main() {
  char *name = readline("Enter an int: ");
  int n = atof(name);
  printf("sum is %d.\n",sum_n(n));
  char *s = readline("Enter a string: ");
  print_n(s,n);
}


