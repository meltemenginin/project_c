#include <stdio.h>
#include <stdlib.h>
int diamond(int);

int main()
{
    int k;
   printf("0. Exit \n 1. Solving the mathematical equation \n 2. Drawing the diamond shape \n 3. Printing keybord inputs in reverse \n 4. Finding the second smallest element \n 5. Distinct random number generation \n 6. About Enter your selection : ");

   scanf("%d", &cansu);

    switch(cansu)

    {
    case 0:

    diomand(k);

        break;
    }


    return 0;
}
int diamond(int x)
{
    printf("Please enter a odd number");
    scanf("%d",&x);
    if(x%2==0 || x<0)
    printf("Please enter a odd number");

return x;
}

/*#define SÝZE 20
int random(int i)

{
    int my_array[SÝZE];

    int i=rand()%20;

}
*/
