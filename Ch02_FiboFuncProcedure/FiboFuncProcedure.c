#include <stdio.h>

int Fibo(int n)
{
	printf("func call param %d  \n", n);

	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);   //  `+` 연산자의 왼편에 있는 Fibo 함수의 호출이 완료 되어야 비로소 `+` 연산자의 함수의 호출이 진행된다.
}

int main(void)
{
	Fibo(7);
	return 0;
}