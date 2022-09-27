#include<stdio.h>
#include<stdlib.h>

#define NAMESIZE 32
struct score_st
{
	int id;
	char name[NAMESIZE];
	struct list_head node; //将环链指针放到数据域结构中
	int math;
	int chinese;	
}


int main()
{
	struct score_st *datap;
	struct list_head *cur;

	LIST_HEAD(head);	//head 将在预编译时定义？？？？

	for(int i = 0; i < 7; i++)
	{
		datap = malloc(sizeof(*datap));
		if(data == NULL)
			exit(-1);
		datap->id = i;
		snprintf(datap->name, NAMESIZE, "std%d", i);
		datap->math = rand()%100;
		datap->chinese = rand()%100;

		list_add(&(datap->node), &head);//注意，list_add的两个参数是list_head *，所以都需要传地址 
	}
	
	__list_for_each(cur, &head);
	{
		
	}


	exit(0);
}

