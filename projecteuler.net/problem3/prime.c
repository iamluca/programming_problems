#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *);

int
main()
{
	/*
	소수(prime number)의 정의:
	양의 약수(나누어 떨어지는 수)가 1과 자기 자신뿐인 수
	*/

	/*
	1은 소수가 아니다.
	2는 소수이다.
	범위는 600851475143까지이다.
	*/

	unsigned long int limit = 600851475143;
	unsigned long int max_prime = 2; // 범위 내의 가장 큰 소수를 찾아 출력하면 된다.
	// 가장 작은 소수는 2이다.
	// 범위가 2보다 크기 때문에 초기값을 2로 했다.
	unsigned long int start = 0, end = 0; 

	getSeconds( &start );
	for (unsigned long int i = 2; i < limit; i++)
	{
		// 모든 자연수는 1로 나눠 떨어진다. 그러니 판단할 필요가 없다.
		// 주어진 i가 2부터 나눠 떨어지는지 확인한다.
		// 모든 약수는 2로 나눠진 수보다 작다.
		int is_prime = 1;
		
		for (unsigned long int j = 2; j < (i/j); j++) // 최대 약수는 무조건 i/j 값보다 작다
		{
			if(!(i % j))
			{
				is_prime = 0;
				break; // 이렇게 하면 루프를 끝내는 것이겠지?!
			}
		}

		if((is_prime) && (i > max_prime)) // 출력을 빼고 판단만 넣었다.
		{
			
			max_prime = i;
		}
	}
	getSeconds( &end );

	printf("Max prime: %lu\n", max_prime);
	printf("It took %lu seconds.\n", (end - start));
	return 0;
}

void
getSeconds(unsigned long *par)
{
	*par = time(NULL);
	return;
}
