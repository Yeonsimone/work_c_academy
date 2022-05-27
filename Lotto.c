#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int lotto[6];
    bool is_exist = false;
    int index = 0;
    int val;
    srand(time(NULL)); // 시드값으로 초기화
    while(true){
        val = (rand() %45)+1;
        for(int i =0; i<6; i++){
            if (lotto[i] == val) is_exist = true;
        }
        if(!is_exist) lotto[index++] = val;
        if (index ==6) break;
        is_exist = false;
    }
    for(int i=0; i<6; i++){
        printf(" %d ", lotto[i]);
    }
    printf("\n");

}