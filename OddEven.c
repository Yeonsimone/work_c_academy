// 7개의 정수를 입력 받아서 홀수와 짝수 를 각 배열에 나누어 저장하세요
// 입력: 1234567
//홀수: 1357
//짝수: 246
#include <stdio.h>
void input_int(int*);
void odd_or_even(int*, int*, int*);
void dis_output(int*, int*);
int even_idx =0;
int odd_idx=0;

int main(){
int array[7];
int odd[7]={0,0,0,0,0,0,0};
int even[7]={0,0,0,0,0,0,0};

input_int(array);
odd_or_even(array, odd, even);
dis_output(odd, even);
}
void input_int(int*arr){
    printf("Write : ");
    for(int i=0; i<7; i++){
        scanf("%d", &arr[i]); // 각방에 대한 주소가 필요함으로 &를 써야 함
    }

}
void odd_or_even(int*arr, int *odd, int*even){
    for(int i=0; i<7; i++){
        if(arr[i % 2 == 0]) even[even_idx++]=arr[i];// 한줄짜리 코드는 중괄호 생략 가능!
        else odd[odd_idx++] = arr[i];
    }
}
void dis_output(int*odd, int*even){
    printf("odd :");
    for(int i=0; i<odd_idx; i++){
        printf("%d", odd[i]);
    }
    printf("\n");
    printf("Even : ");
    for(int i=0; i< even_idx; i++){
        printf("%d", even[i]);
    }
    printf("\n");
}