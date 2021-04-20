#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to)
{
	if (num == 1)    // �̵��� ������ ���� 1�����
	{
		printf("3\n");
		printf("����1�� %c���� %c�� �̵� \n", from, to);
	}
	else
	{
		printf("1\n");
		HanoiTowerMove(num - 1, from, to, by);    // 3�ܰ� �� 1�ܰ�
		printf("����%d��(��) %c���� %c�� �̵� \n", num, from, to);  // 3�ܰ� �� 2�ܰ�
		printf("2\n");
		HanoiTowerMove(num - 1, by, from, to);    // 3�ܰ� �� 3�ܰ�
	}
}


int main(void)
{
	// ����A�� ���� 3���� ����B�� �����Ͽ� ����C�� �ű��
	HanoiTowerMove(4, 'A', 'B', 'C');
	//HanoiTowerMove(5, 'A', 'B', 'C');
	return 0;
}