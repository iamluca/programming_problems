#include <stdio.h>

int
main()
{
    unsigned long number = 600851475143;

    for( unsigned long i = 2; i <= number; i++)
    {
        if( number % i == 0 )
        {
            printf("%lu is not prime.\n", number);
            return 0;
        }
    }
    printf("%lu is prime.\n", number);

    return 0;
}
