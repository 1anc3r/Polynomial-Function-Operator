#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>
#include <process.h>
#include <windows.h>
#include <math.h>

#define FN FunctionNumber
#define SF struct function

struct function{
	struct function *piror;
	double a;
	int n;
	struct function *next;
};

struct function *head[100];
struct function *rear[100];
struct function *p;
struct function *q;
struct function *p1;
struct function *p2;
struct function p0={NULL,0,0,NULL};
struct function *pa=&p0;
int True,i,j,d,d1,d2;
int FN=0;
int LINE;
double x,s;

#include "view/goto.h"
#include "view/optition.h"
#include "func/FunctionList.h"
#include "func/FunctionCreate.h"
#include "func/FunctionDelete.h"
#include "func/FunctionQuantity.h"
#include "func/FunctionAddition.h"
#include "func/FunctionSubtraction.h"
#include "func/FunctionMultiplication.h"
#include "func/FunctionDifferential.h"
#include "func/FunctionIntegral.h"
