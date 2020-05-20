#include"phone.h"

int size=0;
int err=0;

int main()
{	int ch=0;
	
	printf("전화번호 관리\n\n");
	do{ printf("1. 등록\t2. 전체검색\t3. 특정인검색\t4. 종료\n");
		printf("메뉴선택: ");
		scanf("%d",&ch);
		switch(ch){

		case 1:	{input();
		break;}
		case 2: {showall();
		break;}
		case 3: {searchuser();
		break;}
		if(err==3) break;
		}
	}while(ch != 4);
	printf("프로그램을 종료합니다.\n");
	return 0;
}
	
