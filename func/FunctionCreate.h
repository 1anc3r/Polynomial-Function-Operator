//============================================================================
// Name        : FunctionCreate.c
// Author      : lancer
// Version     : 2.1
// Copyright   : made by lancer
// Description : Polynomial Function Operator in C, Ansi-style
//============================================================================

void FunctionCreate(void){
	system("cls");
	printf(" ┌─────────────────────────────────────┐\n");
	printf(" │┌───────────────────────────────────┐│\n");
	printf(" ││                               创建函数                               ││\n");
	printf(" │└───────────────────────────────────┘│\n");
	printf(" │┌───────────────────────────────────┐│\n");
	i=0;
	FN++;
	head[FN]=NULL;
	LINE=6;
	while(1){
		p=(SF *)malloc(sizeof(SF));
		Goto(1,LINE);
		printf(" ││ x^%2d项的系数值=                                                      ││\n",i);
		printf(" │└───────────────────────────────────┘│\n");
		printf(" └─────────────────────────────────────┘\n");
		Goto(22,LINE);
		i++;
		LINE=6+i;
		scanf("%lf",&p->a);
		if(head[FN]==NULL){
			head[FN]=p;
			p->piror=NULL;
			p->n=0;
			q=p;
		}
		else {
			q->next=p;
			p->piror=q;
			p->n=(q->n)+1;
			q=p;
		}
		Goto(1,LINE+2);
		printf(" ┌─────────────────────────────────────┐\n");
		printf(" │┌───────────────────────────────────┐│\n");
		printf(" ││                               [!]提示                                ││\n");
		printf(" │└───────────────────────────────────┘│\n");
		printf(" │┌───────────────────────────────────┐│\n");
		printf(" ││                            [1]---继续创建                            ││\n");
		printf(" ││                            [0]---结束创建                            ││\n");
		printf(" │└───────────────────────────────────┘│\n");
		printf(" └─────────────────────────────────────┘\n");
		True=Optition(LINE+7,LINE+8,32,48,12,1)-LINE-6;
		if(True==2){
			p->next=NULL;
			rear[FN]=p;
			break;
		}
		Goto(1,LINE);
		printf(" │└───────────────────────────────────┘│\n");
		printf(" └─────────────────────────────────────┘\n");
		printf("                                                                               \n");
		printf("                                                                               \n");
		printf("                                                                               \n");
		printf("                                                                               \n");
		printf("                                                                               \n");
		printf("                                                                               \n");
		printf("                                                                               \n");
		printf("                                                                               \n");
		printf("                                                                               \n");
		printf("                                                                               \n");
		Goto(1,1);

	}
	FunctionList();
}
