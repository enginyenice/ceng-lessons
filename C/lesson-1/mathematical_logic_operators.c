#include <stdio.h>


/*
Mathematical and Logical Operators
_______Mathematical Operators_____
*   =>  Multiplication
%   =>  Mode receiving
/   =>  Division
++  =>  An increase
--  =>  A reduction
+   =>  Addition
-   =>  Extraction process
_______Logic Operators____________
>   => Greater than
<   => Less than
>=  => Greater than and equal
<=  => Less than and equal
==  => Equal to
&&  => And
||  => Or
!   => Not
*/

int main()
{
    //Printing the entered number on the screen
    int received_from_user;
    scanf("%d", &received_from_user);
    printf("Received number: %d\n", received_from_user);
    // Number + 1;
    received_from_user = received_from_user + 1;
    printf("Received number + 1: %d\n",received_from_user);
    return 0;
}
