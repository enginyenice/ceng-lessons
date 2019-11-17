#include <stdio.h>
#include <stdlib.h>


// Single - Comment line


/* Comment Start
Multiline Comment
-----
-------
----------
----
--
Comment Finish*/


/*
int      = Integer (complete number) (2,4,-6-1-4,...)
char     = Character (a,c,x,s,...)
float    = Fractional number (0.4,2.44,-4.77,5.00,...)
*/

//Main function
int main()
{
    //variable creation
    int complete_number = 1;
    char character = 'a';
    float fractional_number = 0.33;
    //Write on the screen
    /*
    %d => Integer
    %f => Float
    %s => String
    %c => Character
    %x => HEX
    */

    /*
    /n => Skip to bottom line
    /t => Leave TAB space
    /a => Overwrite
    */
    printf("%d\n", complete_number);
    printf("%c\t",character);
    printf("%f\a", fractional_number);

    return 0;
}
