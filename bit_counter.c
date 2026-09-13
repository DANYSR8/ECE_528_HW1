#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main()
{

    uint32_t user_input; 
    int count = 0 ; 
    long long  user_input_check; 

 
    printf("Please Enter an Non-Negative Integer Value: ") ;
   
   if (scanf("%lld", &user_input_check) != 1 || user_input_check < 0)
   {
     printf("INVAID VALUE ENTERED \n") ;   
   }

   else 
   {

    user_input = (uint32_t)user_input_check; 
    while (user_input != 0 )
    {
        user_input &= user_input-1 ; 
        count++; 
    }

    printf("Number of bits set: %d \n ~Daniel Silva Rios" , count); 
   }
    

   return 0 ; 
}