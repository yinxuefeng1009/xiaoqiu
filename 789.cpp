#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i,j;
	int x = 5;
	int y = 10;
	
	int hight = 20;
	int velocity = 1;
	
	while (1)
	{
		x=x+velocity;
		system("cls");   // ��������
		
		// ���С��ǰ�Ŀ���
		for(i=0;i<x;i++)
			printf("\n");
		for (j=0;j<y;j++)
			printf(" ");
		printf("o");  // ���С��o
		printf("\n"); 
		
		if (x==hight)
			velocity = -velocity;
		if (x==0)
		{
			velocity = -velocity;
		}		
	}	
}