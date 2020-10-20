#include <stdio.h>


int
main()
{
    int smallest_num = 0;
    int j = 0;

    for( int i = 1; i <= 10; i++ )
    {
        smallest_num *= i;
    }

    j = smallest_num;
    
    return 0;
}
