/*************************************
 **    ���� ���� ��� ����׷�      **
 **     �ۼ��� : ������            **
 **     �ۼ��� : 2016�� 4�� 30��    **
 *************************************/

#include <stdio.h>

int main(void){
	int strike1 = 0,strike2 = 0;		//�ι��������� ��Ʈ����ũ ���ð�� ��� 
	int spare = 0;
	int score = 0;
	int order1 = 1,order2 = 1;
	int now;
	int remain = 10;
	int bonus = 0;
	while(order1 != 10 || order2 != bonus + 3){	//10��° ���� �� �� 
		printf("%d���� ������ %d ��° ó�� �ɼ� : ",order1,order2);
		scanf("%d",&now);
		
		score += now;
		remain -= now;0
		
		if(strike1)
		{		//�߰����� 
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
		{	//����� 
			if(order1 != 10)
				spare = 1;
			else
				bonus = 1;
		}
		
		
		if(now == 10) //��Ʈ����ũ
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
			printf("**** ������� ���� : %d\n",score);
	}
	printf("**** ���� ���� : %d",score);
	return 0;
	
}
