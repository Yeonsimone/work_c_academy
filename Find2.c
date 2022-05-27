// 10개의 중복된 값이 있는 배열 생성
// 1,2,3,4,5,1,2,3,4,5
//n의 값을 입력받아 2번째 값의 위치 출력
//없으면 -1


#include <stdio.h>
int main(){
    int arr[10]={ 1,2,3,4,5,1,2,3,4,5};
    int n, cnt=0;
    scanf("%d", &n);
    for(int i=0; i<10; i++){
        if (arr[i]==n){
            cnt++;
            if(cnt =2){
                printf("%d\n", i+1);
                break;
            }
        }
    }
    if(cnt <2) printf("-1\n");

}