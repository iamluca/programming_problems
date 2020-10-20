#include <stdio.h>

int
main()
{
    int num = 9009;
    int reverse_num = 0;

    while(num)
    {
        reverse_num = reverse_num * 10 + (num %= 10);
        num /= 10;
    }

    printf("reverse_num is %d\n", reverse_num);
    printf("num is %d\n", num);

    return 0;
}
