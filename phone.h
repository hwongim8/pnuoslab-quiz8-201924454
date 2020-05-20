#include<stdio.h>
#include<string.h>
#define MAX 50



struct phone{
	char name[20];
	char number[30];
};

struct phone book[MAX];


void input(void);
void showall(void);
void searchuser(void);



