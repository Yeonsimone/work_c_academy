// 함수 호출 시 값이 아닌 주소를 호출함
#include <stdio.h>
// int ref_func(int );


// int main(){
//     int x = 100;
//     x= ref_func(x);
//     printf(" x=%d\n", x);


// }
// int ref_func(int ptr){
//     return ptr + 100;
// }

void ref_func(int *);

// *&는 주소를 나타냄
int main(){
    int x = 100;
    ref_func(&x);
    printf(" x=%d\n", x);


}
void ref_func(int *ptr){
    *ptr += 100;
}




    // int x = 100;
    // int*ptr; //*ptr 값은 저장 불가능, 누군가의 주소 
    // ptr = &x;
    // printf("x의 값 : %d \n", x);
    // printf("x의 주소: %p\n", &x);

    // printf("ptr의 값: %p\n", ptr);
    // printf("ptr이 가리키는 값: %d\n", *ptr);