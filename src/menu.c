#include "../include/include.h"
#include "../include/account.h"
#include <stdio.h>
#include <stdlib.h>
void menu()
{
	char name[NAME_LEN] = {'\0'};
	char passwd[NAME_LEN] = {'\0'};
	while(1)
	{
		system("clear");
		printf("1-->注册\n"
				"2-->登录\n"
				"q-->退出\n"
				"请输入你的选择:");
		char ch = '\0';
		scanf("%c",&ch);
		while(getchar() != '\n');
		switch(ch)
		{
			case '1':
				registe(name,passwd);
				break;
			case '2':
				login(name,passwd);
				break;
			case 'q':
				exit(1);
				break;
			default:
				printf("输入错误，请重新输入\n");
	
		}
	}
}














