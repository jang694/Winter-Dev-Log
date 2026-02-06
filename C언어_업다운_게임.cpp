#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//up and down
void main() {
	srand(time(NULL));
	int num = rand() % 100 +1;
	//숫자를 본 상태로 하고싶으면 printf("숫자 : %d\n", num);를 추가

	int answer = 0; //정답
	int chance = 6; //기회
	while (chance > 0) {
		printf("남은 기회 : %d\n", chance);
		chance--;
		printf("숫자를 맞혀보세요\n");
		printf("경고! 숫자만 입력해주세요!!\n");
		scanf("%d", &answer);

		if (answer > num) 
		{
			printf("DOWN\n");
		}
		else if (answer < num) 
		{
			printf("UP\n");
		}
		else if (answer == num)
		{
			printf("정답입니다\n");
			break;
		}
		else
		{
			printf("오류입니다\n");ㄴ
		}

		if (chance == 0)
		{
			printf("기회를 모두 사용하셨습니다.");
			break;
		}
	}

}
