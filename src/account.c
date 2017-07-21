#include "../include/support.h"
#include "../include/game.h"
#include "../include/include.h"
#include <stdio.h>
#include <string.h>

void login(char * name , char * passwd)
{
	char newName[NAME_LEN] = {'\0'};
	char newPasswd[NAME_LEN] = {'\0'};
	printf("请输入用户名:");
	myGets(newName,NAME_LEN);
	printf("请输入密码:");
	myGets(newPasswd,NAME_LEN);
	
	if(strcmp(name,newName) != 0 || strcmp(passwd , newPasswd) != 0){
		printf("登录失败,请重新登录\n");
		printf("按下回车键继续");
		while(getchar() != '\n');
	}else{
		//进入游戏
		gameMenu();
	}
}

void registe(char * name , char * passwd)
{
	char tmp1[NAME_LEN] = {'\0'};
	char tmp2[NAME_LEN] = {'\0'};
	printf("请输入用户名:");
	myGets(name,NAME_LEN);
	while(1)
	{
		printf("请输入密码:");
		myGets(tmp1,NAME_LEN);
		printf("请重新输入密码:");
		myGets(tmp2,NAME_LEN);
		if(strcmp(tmp1,tmp2) == 0)
		{
			strncpy(passwd,tmp1,strlen(tmp1));
			break;
		}else{
			printf("两次密码不一致，请重新输入\n");
		}
	}
}
