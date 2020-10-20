/*
 * Problem 1. Multiples of 3 and 5
 * Date: 2017.3.25
 * Author: Luca Rhee <lucarhee@gmail.com>
 */

#include <stdio.h>

int
main()
{
    unsigned int limit = 1000; // 1000 미만의 자연수 범위를 가진다.
    unsigned int sum = 0; // 합을 구하기 위한 변수

    // 3 또는 5의 배수를 찾아보자.
    for( unsigned int i = 1; i < limit; i++)
    {
        if(( i % 3 == 0 ) || ( i % 5 == 0 ))
        {
            sum += i;
        }
    }

    printf("The sum of all the multiples of 3 or 5 below 1000: %d\n", sum);

    return 0;
}
