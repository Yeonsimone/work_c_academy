#include <stdio.h>
int main(){
    char city[20] = "seoul";
    char country[20] ={'a', 'm', 'e', 'r', 'i', 'c', 'a' };
    char jobs[][10] = {"", "student", "designer", "no job"};

    printf("%c\n", city[1]);
    printf("%c\n", country[1]);
    printf("%c\n", jobs[1][1]);