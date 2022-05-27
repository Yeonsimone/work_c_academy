//함수 내에서 자기 자신을 다시 호출하는 함수, 자칫 잘못하면 무한루프가  될 수 있음. 
// 재귀 함수는 반드시 호출 함수가 필요

#include <stdio.h>
int func_sum(int);
int gaus_sum(int);
int recu_sum(int);

int main(){
    int n;
    printf("정수 입력 : ");
    scanf("%d", &n);
    printf("%d\n", gaus_sum(n));
}
int func_sum(int n){
    int sum = 0;
    for(int i = 0; i <=n; i++){
        sum+=1;
    }
    return sum;
}
 int gaus_sum(int n){
     return n*(n+1)/2;
 }
 int recu_sum(int n){
     if(n==0) return 0;
     return n + recu_sum(n-1);
 }