#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
	//업다운겜

	int s;
	int ran;
	while(1){
		printf("up down 게임의 숫자를 설정했습니다.\n");
		srand(time(NULL)); // 시간을 가져와서 랜덤 값 생성.
		ran = rand() % 100 + 1;
		for (int i = 6; i > 0; --i)
		{
			int j;
			scanf_s("%d", &s);
			if (s > ran) {
				printf("입력한 값이 더 큽니다.\n");
				printf("목숨 :");
				for (j = 0; j < i; j++);
				{
					printf("■");
				}
				printf("\n");
			}
			else if (s < ran) {
				printf("입력한 값이 더 작습니다.\n");
				printf("목숨 :");
				for (j = 0; j < i; j++);
				{
					printf("■");
				}
				printf("\n");
			}
			else {
				printf(" '%d' , 정답입니다!\n",s);
			}
			
		}
		printf("재시작합니다.\n");
	}
	return 0;
}