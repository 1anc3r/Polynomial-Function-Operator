//============================================================================
// Name        : FunctionDifferential.c
// Author      : lancer
// Version     : 1.0
// Copyright   : made by lancer
// Description : Polynomial Function Operator in C, Ansi-style
//============================================================================

void FunctionDifferential(void){
	FunctionList();
	printf(" ┌─────────────────────────────────────┐\n");
	printf(" │┌───────────────────────────────────┐│\n");
	printf(" ││                               函数求导                               ││\n");
	printf(" │└───────────────────────────────────┘│\n");
	printf(" │┌───────────────────────────────────┐│\n");
	printf(" ││ 待求导函数编号:                                                      ││\n");
	printf(" │├───────────────────────────────────┤│\n");
	printf(" ││ f(x)=                                                                ││\n");
	printf(" ││ f'(x)=                                                               ││\n");
	printf(" │└───────────────────────────────────┘│\n");
	printf(" └─────────────────────────────────────┘\n");
	Goto(22,FN+13);
	scanf("%d",&d);
	if(d<1||d>FN){
		Goto(1,FN+19);
		printf(" ┌─────────────────────────────────────┐\n");
		printf(" │┌───────────────────────────────────┐│\n");
		printf(" ││                               [!]提示                                ││\n");
		printf(" │└───────────────────────────────────┘│\n");
		printf(" │┌───────────────────────────────────┐│\n");
		printf(" ││                             输入错误，                               ││\n");
		printf(" ││                            请重新选择。                              ││\n");
		printf(" │└───────────────────────────────────┘│\n");
		printf(" └─────────────────────────────────────┘\n");
		getch();
		return;
	}
	LINE=15+FN;
	Goto(1,FN+15);
	LINE=LINE-d+1;
	List(d);
	if(head[d]->next!=NULL){
		p1=head[d]->next;
		FN++;
		while(p=(SF *)malloc(sizeof(SF))){
			p->a=p1->a*p1->n;
			if(head[FN]==NULL){
				head[FN]=q=p;
				p->piror=NULL;
				p->n=0;
			}
			else {
				q->next=p;
				p->piror=q;
				p->n=q->n+1;
				q=p;
			}
			if(p1->next!=NULL){
				p1=p1->next;
			}
			else{
				p->next=NULL;
				rear[FN]=p;
				break;
			}
		}
	}
	else{
		FN++;
		p=(SF *)malloc(sizeof(SF));
		head[FN]=rear[FN]=p;
		p->a=0;
		p->n=0;
		p->piror=p->next=NULL;
	}
	Check();
	Goto(1,FN+15);
	LINE=16;
	List(FN);
	getch();
}
