//============================================================================
// Name        : FunctionAddition.c
// Author      : lancer
// Version     : 2.1
// Copyright   : made by lancer
// Description : Polynomial Function Operator in C, Ansi-style
//============================================================================

void FunctionAddition(void){
	FunctionList();
	printf(" ┌─────────────────────────────────────┐\n");
	printf(" │┌───────────────────────────────────┐│\n");
	printf(" ││                               函数加法                               ││\n");
	printf(" │└───────────────────────────────────┘│\n");
	printf(" │┌───────────────────────────────────┐│\n");
	printf(" ││ 待相加函数a编号:                                                     ││\n");
	printf(" │├───────────────────────────────────┤│\n");
	printf(" ││ 待相加函数b编号:                                                     ││\n");
	printf(" │├───────────────────────────────────┤│\n");
	printf(" ││ fa(x)=                                                               ││\n");
	printf(" ││ fb(x)=                                                               ││\n");
	printf(" ││ fa(x)+fb(x)=                                                         ││\n");
	printf(" │└───────────────────────────────────┘│\n");
	printf(" └─────────────────────────────────────┘\n");
	Goto(23,FN+13);
	scanf("%d",&d1);
	Goto(23,FN+15);
	scanf("%d",&d2);
	if(d1<1||d1>FN||d2<1||d2>FN){
		Goto(1,FN+22);
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
	LINE=17+FN;
	Goto(1,17+FN);
	LINE=LINE-d1+1;
	List(d1);
	LINE=18+FN;
	Goto(1,18+FN);
	LINE=LINE-d2+1;
	List(d2);
	FN++;
	head[FN]=NULL;
	p1=head[d1];
	p2=head[d2];
	while(1){
		p=(SF *)malloc(sizeof(SF));
		p->a=p1->a+p2->a;
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
		if(p1->next!=NULL&&p2->next!=NULL){
			p1=p1->next;
			p2=p2->next;
		}
		else{
			if(p1->next==NULL&&p2->next==NULL){
				p->next=NULL;
				rear[FN]=p;
				break;
			}
			else{
				if(p1->next==NULL){
					p1=&p0;
					p2=p2->next;
				}
				else{
					p2=&p0;
					p1=p1->next;
				}
			}
		}
	}
	Check();
	Goto(1,18+FN);
	LINE=19;
	List(FN);
	getch();
}
