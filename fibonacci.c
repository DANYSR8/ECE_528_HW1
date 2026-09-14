#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main()
{

    int num_terms_to_compute;
    int current_num =  0; 
    int previous_num = 0;
    int next_num = 0; 
    

    printf("Enter how many terms of the sequence to compute ( N > 2) : ") ; 

    if (scanf("%d", &num_terms_to_compute) != 1 || num_terms_to_compute <= 2)
   {
     printf("INVAID VALUE ENTERED \n") ;   
   }

   else
   {

        previous_num = 0;
        current_num = 1; 

        printf("%d ",previous_num);
        printf("%d ",current_num);

        for (int i = 2 ; i <= num_terms_to_compute ; i++)
        {
        
            next_num = previous_num + current_num;
            printf("%d ",next_num);

            previous_num = current_num;
            current_num = next_num ; 

        }

    printf("\n ~Daniel Silva Rios ");
    


   }





    return 0; 
}