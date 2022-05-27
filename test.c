#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//은행업무 출입금


void open_account(char*); // 주소를 가지고 접근후 값이 바뀜, 포인터로 넘겨주면 리턴 필요없는 경우가 많음
int deposit(int, int);//이름은 달라도 됨, 형은 맞아야 함. 변수 이름은 달라도 ok 
int withdraw(int, int); //출금
void menu_list();

int main(){
    menu_list();
}

void open_account(char*name){ //char*name=8byte
    printf("%s님의 계좌가 개설되었습니다. \n", name);
}
int deposit(int balance, int income){
    printf(" %d 이 입금되었습니다. 잔액은 %d입니다. \n", income, balance+income);
    return balance+income;
}
int withdraw(int balance, int outcome){
    if (balance >= outcome){
        printf("%d가 출금되었습니다. 잔액은 %d 입니다. \n", outcome, balance - outcome);
        return balance - outcome;
    } else{
        printf("출금에 실패했습니다. 잔액은 %d 입니다.\n", balance);
				return balance;
    }
}
void menu_list(){
    char name[20];//연속된 데이타가 20개의 방을 만듬
    int balance = 0;
    int input = 0;
    int select_menu = 0;

    while(true){
        printf("메뉴를 선택하세요: [1]계좌계설, [2] 입금, [3] 출금, [4] 조회, [5]종료 : ");
        scanf("%d", &select_menu);
        switch (select_menu){
        case 1:
            printf("이름을 입력하세요 : ");
            scanf("%s", name);
            open_account(name);
            break;
        case 2:
            printf("입금할 금액을 입력하세요 : ");
            scanf("%d", &input);
            balance = deposit(balance, input);
            break;
        case 3:
            printf("출금할 금액을 입력하세요 : ");
            scanf("%d", &input);
            balance = withdraw(balance, input);

        case 4:
            printf("현재 잔액은 %d 입니다 : \n", balance);
            return;
        default:
            printf("메뉴를 다시 선택하세요");
        
        }
    }
}