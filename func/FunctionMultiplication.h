//============================================================================
// Name        : FunctionMultiplication.c
// Author      : lancer
// Version     : 1.0
// Copyright   : made by lancer
// Description : Polynomial Function Operator in C, Ansi-style
//============================================================================

void FunctionMultiplication(void){
	FunctionList();
	printf(" ┌─────────────────────────────────────┐\n");
	printf(" │┌───────────────────────────────────┐│\n");
	printf(" ││                               函数乘法                               ││\n");
	printf(" │└───────────────────────────────────┘│\n");
	printf(" │┌───────────────────────────────────┐│\n");
	printf(" ││ 待相乘函数a编号:                                                     ││\n");
	printf(" │├───────────────────────────────────┤│\n");
	printf(" ││ 待相乘函数b编号:                                                     ││\n");
	printf(" │├───────────────────────────────────┤│\n");
	printf(" ││ fa(x)=                                                               ││\n");
	printf(" ││ fb(x)=                                                               ││\n");
	printf(" ││ fa(x)xfb(x)=                                                         ││\n");
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
	double D1[100];
	double D2[100];
	double D[200];
	while(p1!=NULL){
		D1[p1->n]=p1->a;
		p1=p1->next;
	}
	while(p2!=NULL){
		D2[p2->n]=p2->a;
		p2=p2->next;
	}
	for(i=0;i<=(rear[d1]->n+1+rear[d2]->n);i++){
		D[i]=0;
		for(j=0;j<=i;j++){
			if(i-j<=rear[d2]->n){
				if(j<=rear[d1]->n){
					D[i]+=D1[j]*D2[i-j];
				}
			}

		}
	}
	i=0;
	while(i<rear[d1]->n+rear[d2]->n+1){
		p=(SF *)malloc(sizeof(SF));
		if(head[FN]==NULL){
			head[FN]=q=p;
			p->piror=NULL;
			p->n=0;
			p->a=D[0];
		}
		else {
			p->n=q->n+1;
			p->a=D[p->n];
			q->next=p;
			p->piror=q;
			q=p;
		}
		i++;
	}
	p->next=NULL;
	rear[FN]=p;
	p->a=D[p->n];
	Check();
	Goto(1,18+FN);
	LINE=19;
	List(FN);
	getch();
}
