//============================================================================
// Name        : FunctionList.c
// Author      : lancer
// Version     : 2.1
// Copyright   : made by lancer
// Description : Polynomial Function Operator in C, Ansi-style
//============================================================================

void Check(void){
	for(i=1;i<=FN;i++){
		p=rear[i];
		while((p->a==0)&&(p->n!=0)){
			q=p->piror;
			free(p);
			rear[i]=p=q;
			p->next=NULL;
		}
	}
}
void List(int z){
	printf(" ©¦©¦ f%d(x)=                                                               ©¦©¦\n",z);
	Goto(13,LINE+z-1);
	p=rear[z];
	if(p->piror!=NULL){
		if(p->n!=1){
			printf("%.2lfx^%d",p->a,p->n);
		}else{
			printf("%.2lfx",p->a);
		}
		p=p->piror;
		while(p!=head[z]){
			if(p->n!=1){
				if(p->a>0){
					printf("+%.2lfx^%d",p->a,p->n);
				}
				if(p->a<0){
					printf("-%.2lfx^%d",-(p->a),p->n);
				}
			}
			else{
				if(p->a>0){
					printf("+%.2lfx",p->a);
				}
				if(p->a<0){
					printf("-%.2lfx",-(p->a));
				}
			}
			p=p->piror;
		}
		if(p->a>0){
			printf("+%.2lf",p->a);
		}
		if(p->a<0){
			printf("-%.2lf",(-p->a));
		}
	}else{
		printf("%.2lf",p->a);
	}printf("\n");
}

void FunctionList(void){
	Check();
	system("cls");
	printf(" ©°©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©´\n");
	printf(" ©¦©°©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©´©¦\n");
	printf(" ©¦©¦                               º¯ÊýÁÐ±í                               ©¦©¦\n");
	printf(" ©¦©¸©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¼©¦\n");
	printf(" ©¦©°©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©´©¦\n");
	LINE=6;
	for(i=1;i<=FN;i++){
		List(i);
	}
	printf(" ©¦©¸©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¼©¦\n");
	printf(" ©¸©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¼\n");
}

void Cancel(void){
	for(;FN>0;FN--){
		q=p=rear[FN];
		while(q!=head[FN]){
			q=p->piror;
			q->next=NULL;
			free(p);
			p=q;
		}
		free(q);
		rear[FN]=NULL;
		head[FN]=NULL;
	}
}
