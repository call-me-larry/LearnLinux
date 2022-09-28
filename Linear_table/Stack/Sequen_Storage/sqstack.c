#include<stdio.h>
#include<stdlib.h>
#include"sqstack.h"

sqstack *st_creat(void )
{
	sqstack *st;

	st = malloc(sizeof(*st));
	if(st == NULL)
		return NULL;
	st->top = -1;//-1表示栈为空
	return st;
}

int st_isempty(sqstack *st)
{
	return (st->top == -1);//空为-1，相等为1，返回1
}

/*
 * 1、判断满员
 * 2、push数据
 *
*/
int st_push(sqstack *st, datatype *data)
{
	if(st->top == (MAXSIZE - 1))
		return -1;
	st->data[++st->top] = *data;
}

/*
 * 1、判断非空
 * 2、保存栈顶数据到*data，人员-1
 *
*/
int st_pop(sqstack *st, datatype *data)
{
	if(st_isempty(st))
		return -1;
	*data = st->data[st->top--];
	return 0;
}
/*
 * 1、判断非空
 * 2、保存栈顶数据到*data
 *
*/
int st_top(sqstack *st, datatype *data)
{
	if(st_isempty(st))
		return -1;
	*data = st->data[st->top];
	return 0;
}

void st_travel(sqstack *st)
{
	if(st_isempty(st))
		return ;
	for(int i = 0; i <= st->top; i++)
	{
		printf("%d   ", st->data[i]);
	}
	printf("\n");
}

void st_destroy(sqstack *st)
{
	free(st);
}

