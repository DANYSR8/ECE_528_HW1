#include <stdio.h>
#include <stdlib.h>


int main()
{
    int user_input_value ;
    int user_abs_value ; 

    printf("Enter Value: ") ;
    scanf("%d", &user_input_value); 

    // printf("Inputed value is : %d \n",user_input_value);

    if (user_input_value < 0 )
    {
        printf("%d is a negative number \n", user_input_value);
    }

    else if (user_input_value > 0)
    {
        printf("%d is a postitive number \n", user_input_value);
    }

    else if (user_input_value == 0)
    {
        printf("Zero was inputted \n");
    }

    user_abs_value = abs(user_input_value); 
    printf("Absolute Value: %d \n ",user_abs_value);

    return 0; 
}