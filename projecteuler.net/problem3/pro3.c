#include <stdio.h>
#include <math.h>

int is_prime( unsigned long );

int
main()
{
    unsigned long number = 600851475143;
    
    for( unsigned long i = (int) sqrt( (float) number); i >= 2; i-- )
    {
        if( is_prime(i) && (number % i == 0) ) 
        {
            printf("%lu is lagest prime factor of %lu\n", i, number);
            return 0;
        }
    }

    return 0;
}

int
is_prime( unsigned long num )
{
    for( unsigned long i = 2; i <= ((int) sqrt( (float) num )); i++ )
    {
        if( num % i == 0 )
        {
            return 0;
        }
    }

    printf("%lu is prime.\n", num);
    
    return 1;
}
