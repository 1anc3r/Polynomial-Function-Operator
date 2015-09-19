#include "func.h"

int main(void){
	head[1]=NULL;
	int choose;
	HWND hwnd = FindWindow("ConsoleWindowClass", NULL);
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	system("title 一元多项式函数运算器");
	for(;;){
		system("cls");
		FunctionList();
		printf(" ┌─────────────────────────────────────┐\n");
		printf(" │┌───────────────────────────────────┐│\n");
		printf(" ││                                主菜单                                ││\n");
		printf(" │└───────────────────────────────────┘│\n");
		printf(" │┌───────────────────────────────────┐│\n");
		printf(" ││                            [1]---创建函数                            ││\n");
		printf(" ││                            [2]---删除函数                            ││\n");
		printf(" ││                            [3]---函数求值                            ││\n");
		printf(" ││                            [4]---函数加法                            ││\n");
		printf(" ││                            [5]---函数减法                            ││\n");
		printf(" ││                            [6]---函数乘法                            ││\n");
		printf(" ││                            [7]---函数求导                            ││\n");
		printf(" ││                            [8]---函数积分                            ││\n");
		printf(" ││                            [9]---函数列表                            ││\n");
		printf(" ││                            [0]---退出程序                            ││\n");
		printf(" │└───────────────────────────────────┘│\n");
		printf(" └─────────────────────────────────────┘\n");
		Goto(1,1);
		LINE=FN+13;
		choose=Optition(LINE,LINE+9,32,48,12,1)-LINE+1;
		if(head[1]==NULL&&choose>1&&choose<10){
			system("cls");
			printf(" ┌─────────────────────────────────────┐\n");
			printf(" │┌───────────────────────────────────┐│\n");
			printf(" ││                               [!]提示                                ││\n");
			printf(" │└───────────────────────────────────┘│\n");
			printf(" │┌───────────────────────────────────┐│\n");
			printf(" ││                            函数列表为空，                            ││\n");
			printf(" ││                            请先创建函数，                            ││\n");
			printf(" ││                            或者退出程序。                            ││\n");
			printf(" │└───────────────────────────────────┘│\n");
			printf(" └─────────────────────────────────────┘\n");
			getch();
			continue;
		}
		switch(choose){
			case 1:
			FunctionCreate();
			break;
			case 2:
			FunctionDelete();
			break;
			case 3:
			FunctionQuantity();
			break;
			case 4:
			FunctionAddition();
			break;
			case 5:
			FunctionSubtraction();
			break;
			case 6:
			FunctionMultiplication();
			break;
			case 7:
			FunctionDifferential();
			break;
			case 8:
			FunctionIntegral();
			break;
			case 9:
			FunctionList();
			getch();
			break;
			case 10:
			system("cls");
			printf(" ┌─────────────────────────────────────┐\n");
			printf(" │┌───────────────────────────────────┐│\n");
			printf(" ││                                感谢使用!                             ││\n");
			printf(" │└───────────────────────────────────┘│\n");
			printf(" └─────────────────────────────────────┘\n");
			Cancel();
			getch();
			return 0;
		}
	}
}
