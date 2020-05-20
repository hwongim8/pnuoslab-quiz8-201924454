#include"phone.h"

extern int size;


void showall(){
	printf("<<<<  전화번호 목록  >>>>\n");
	int i=0;
	for(i=0; i<size; i++){
		printf("%s	%s\n", book[i].name, book[i].number);
	}
	printf("\n");
}
