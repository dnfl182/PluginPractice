/*************************************
 **    볼링 점수 계산 프고그램      **
 **     작성자 : 전병모            **
 **     작성일 : 2016년 4월 30일    **
 *************************************/

#include <stdio.h>

int main(void){
	int strike1 = 0,strike2 = 0;		//두번연속으로 스트라이크 나올경우 고려 
	int spare = 0;
	int score = 0;
	int order1 = 1,order2 = 1;
	int now;
	int remain = 10;
	int bonus = 0;
	while(order1 != 10 || order2 != bonus + 3){	//10번째 판은 예 외 
		printf("%d번쨰 프레임 %d 번째 처리 핀수 : ",order1,order2);
		scanf("%d",&now);
		
		score += now;
		remain -= now;0
		
		if(strike1)
		{		//추가점수 
			score += now;
			strike1--;
		}
		if(strike2)
		{
			score += now;
			strike2--;
		}
		if(spare)
		{
			score += now;
			spare --;
		}
		if(remain == 0 && order2 == 2)
		{	//스페어 
			if(order1 != 10)
				spare = 1;
			else
				bonus = 1;
		}
		
		
		if(now == 10) //스트라이크
		{
			if(order1 != 10)
			{
				if(strike1 == 0)
					strike1 = 2;
				else
					strike2 = 2;
				order2++;		//order2 = 2 or 3; 
			}
			else
				bonus = 1;
		}
		if(order2 >= 2 && order1 != 10){
			order1 ++;
			order2 =0;
			remain = 10;
		}
		order2 ++;
		if(order1 != 10 || order2 != bonus + 3)
			printf("**** 현재까지 점수 : %d\n",score);
	}
	printf("**** 최종 점수 : %d",score);
	return 0;
	
}
