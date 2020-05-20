#include"phone.h"
#include"stdlib.h"
extern int size;
extern int err;

void input(){
	char pw[]="qwer1234";
	printf("비밀번호를 입력하세요: ");

	do{
		char ipw[50];
		scanf("%s", ipw);
		if(strcmp(ipw, pw)==0){
			err=0;
			printf("등록할 이름: ");
			scanf("%s", book[size].name);
			printf("전화번호: ");
			scanf("%s", book[size].number);
			printf("%s 정보 등록 완료!\n\n", book[size].name);
			size++;
			break;
		}
		else{
			err++;
			printf("비밀번호(%d회 실패): ", err);
			if(err==3){
				printf("등록할 수 없음!!\n");
				exit(0);
			}
		}
	}while(err != 3);
}
