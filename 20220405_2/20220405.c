#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
	//���ٿ��

	int s;
	int ran;
	while(1){
		printf("up down ������ ���ڸ� �����߽��ϴ�.\n");
		srand(time(NULL)); // �ð��� �����ͼ� ���� �� ����.
		ran = rand() % 100 + 1;
		for (int i = 6; i > 0; --i)
		{
			int j;
			scanf_s("%d", &s);
			if (s > ran) {
				printf("�Է��� ���� �� Ů�ϴ�.\n");
				printf("��� :");
				for (j = 0; j < i; j++);
				{
					printf("��");
				}
				printf("\n");
			}
			else if (s < ran) {
				printf("�Է��� ���� �� �۽��ϴ�.\n");
				printf("��� :");
				for (j = 0; j < i; j++);
				{
					printf("��");
				}
				printf("\n");
			}
			else {
				printf(" '%d' , �����Դϴ�!\n",s);
			}
			
		}
		printf("������մϴ�.\n");
	}
	return 0;
}