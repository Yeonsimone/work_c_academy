// 양의 정수 n을 입력 받아서 n*n의 크기의 행렬을 출력하는 프로그램 작성
// 행렬의 값은 1부터 시작하여 왼오
// 위에서부터 아래 순서대로 채워넣기
// input n: 3
// output: 
// 1 2 3
// 4 5 6
// 7 8 9
#include <stdio.h>
int main(){
    int n;
    printf("Write : ");
    scanf("%d", &n);
    for(int i=1; i<=n*n; i++){
        printf("%2d ", i);
        if(i %n == 0) printf("\n");
    }
    printf("\n");
}