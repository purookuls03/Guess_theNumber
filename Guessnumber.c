#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       

int main ()
{
    int computer, my_num,i=0;

    srand (time(NULL));
    computer = rand() % 10 + 1;

    while(i<=4)
   {
  	if (i==4) {
            printf("\nYou Loose!\n");
            break;
        }
        printf ("\nGuess the number (1 to 10): ");
        scanf ("%d",&my_num);
        if (computer<my_num && i<3) {
           printf("The secret number is lower");
           i++;
	}
	else if (computer>my_num && i<3){
            printf("The secret number is higher");
	    i++;
	}
	else
	{
            printf("Congratulations : you guessed the number in %d attempts!\n", ++i);
    	    break;
	}
   }

  return 0;
}