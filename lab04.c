#include <stdio.h>

// Standard control structures
void ex_if_else(int x)
{
  if (x > 0)
    goto positive;
  else
    goto notpositive;
  //Placing the labels for positive and not positive values
  
  positive:
     printf("x is positive\n");
     return;
    //This is where the positive label is and it will print "x is positive" and then return
     
  notpositive:
    printf("x is not positive\n");
    return;
  //This is where the positive label is and it will print "x is not positive" and then return
}

void ex_conditional(int x)
{
  
  if(x>0) goto positive;

  notpositive:
    printf("x is not positive\n");
    return;
  //This is where the positive label is and it will print "x is not positive" and then return
  positive:
     printf("x is positive\n");
     return;
    //This is where the positive label is and it will print "x is positive" and then return
}

void ex_switch(int x)
{
  switch (x)
  {
  case 1:
    goto x1;
  case 2:
    goto x2;
  default:
    goto x;
  }
  //Placing goto inside of each case
  
  x1:
    printf("x is 1\n");
    return;
  // this is the label x1 where it tells the user x is 1
  
  x2:
    printf("x is 2\n");
    return;
    // this is the label x2 where it tells the user x is 2
    
  x:
    printf("x is something else\n");
    return;
  // this is the label x where it tells the user x is something else
  
}

void ex_do_while(int x)
{
  int i = 0;
  printout:
    printf("i = %d\n", i);
    goto back;
  // Print out will print out the value of i and go back to the do while
  do
  {
    goto printout;
    back:
      i++;
  } while (i < x);
  //incrimenting i until it is x
  
}

void ex_while(int x)
{
  int i = 0;
  printout:
    printf("i = %d\n", i);
    i++;
 // Print out will print out the value of i and inciment i
  while (i < x)
  {
    goto printout;
  }
  
  
  
}

void ex_for(int x)
{
  int i = 0; 
  prints:
    printf("i = %d\n", i);
    i++;
  // prints label that prints the value of i 
  if(i < x){
    goto prints;
  }
  // if that goes to prints label if i < x

}



int main()
{
  printf("=== C/C++ control structures ===\n");
  printf("--- 1. if...else ---\n");
  ex_if_else(1);

  printf("\n--- 2. conditional ---\n");
  ex_conditional(-1);

  printf("\n--- 3. switch ---\n");
  ex_switch(2);

  printf("\n--- 4. do...while  ---\n");
  ex_do_while(3);

  printf("\n--- 5. while ---\n");
  ex_while(3);

  printf("\n--- 6. for ---\n");
  ex_for(3);

  return 0;
}
