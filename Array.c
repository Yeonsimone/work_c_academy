#include <stdio.h>
int main(){
    int score[3]; //크기가 3인 정수형 배열
    int total =0; // 총점 구하기
    score[0]= 99;
    score[1]=100;
    score[2]=30;
    for (int i =0; i<3; i++){
        total += score[i];
    }
    printf("score : %d\n", total);

}