#include <stdio.h>

#define TRUE 1
#define FALSE 0

int is_palindrome( int );

int
main()
{
    int num = 0;
    int max_pal = 0;
    int max_a = 0, max_b = 0;

    for( int a = 999; a >= 100; a--)
    {
        for( int b = 999; b >= 100; b--)
        {
            if(is_palindrome( a * b ))
            {
                if( (a * b) > max_pal ) // 이 부분이 빠지면 다른 값이 나온다. 가장 처음 나오는 palindromic number가 나온다.
                {
                    max_pal = a * b;
                    max_a = a;
                    max_b = b;
                }
            }
       }
    }

    printf("%d is lagest palindromic number made from the product of %d and %d.\n", max_pal, max_a, max_b);

    return 0;
}

int
is_palindrome( int num )
{
    int reverse_num = 0;
    int original_num = num;
    int digit = 0;

    while( num )
    {
        digit = num % 10;
        reverse_num = reverse_num * 10 + digit;

        /*
            reverse_num = reverse_num * 10 + (num %= 10);
            이렇게 하니까 reverse_num이 항상 0이 되었다. 이유는 뭘까? 항상 0이 되는 것은 아니다.
            예를 들어 num = 9009일 때, num %= 10은 num = 9가 된다.
            reverse_num = 9가 되고 다음 루프일 때,
            밑의 행이 다시 실행되면 num = 0이다.
            그래서 항상 reverse_num은 9이 되는 것이다.
            그러니 정상적으로 돌지 않는다.
            우선순위 문제라고 생각했지만 아니다!!!
        */

        num /= 10;
    }

//    printf("original number is %d\n", original_num);
//    printf("reverse number is %d\n", reverse_num);

    if( original_num == reverse_num )
    {
//        printf("Equal\n");
        return TRUE;
    }
    else
    {
 //       printf("Not equal\n");
        return FALSE;
    }
}
