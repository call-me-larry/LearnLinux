#ifndef SQSTACK_H__
#define SASTACK_H__

#define MAXSIZE 5

typedef int datatype; 

typedef struct node_st
{
	datatype data[MAXSIZE];
	int top;
}sqstack;


//creat 
sqstack *st_creat(void );

int st_isempty(sqstack *);

int st_push(sqstack *, datatype *);

int st_pop(sqstack *, datatype *);

int st_top(sqstack *, datatype *);

void st_travel(sqstack *);

void st_destroy(sqstack *);

#endif
