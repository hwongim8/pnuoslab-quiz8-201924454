#include"phone.h"

extern int size;


void searchuser(){
	char sn[20];
	printf("검색할 이름: ");
	scanf("%s", sn);
	
	int i=0;
	for(i=0; i<size; i++){
		if(strcmp(sn, book[i].name)==0){
			printf("%s	%s\n\n", book[i].name, book[i].number);
			break;
		}
	}
	printf("\n");
}
