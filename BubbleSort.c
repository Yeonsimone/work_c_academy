#include <stdio.h>
int main(){
    double average[6]; //평균을 저장하기 위해서 만든 배열
    int score[][5] = {
        {1, 45, 90, 23, 0}, //학번, 국어, 영어, 수학, 총점
        {2, 99, 67, 88, 0},
        {3, 100, 99, 88, 0},
        {4, 99, 77, 23, 0},
        {5, 23, 56, 78, 0}, 
        {6, 56, 77, 99, 0}
    };
    for(int i=0; i<6; i++){
        for(int j=1; j<4; j++){
            score[i][4] += score[i][j];
            average[i] = (double)score[i][4]/3;
        }
        printf("학번: %d, totalscore: %d, average: %.2f\n", score[i][0], score[i][4],average[i]);
    }

    /// bubble sort

    int tmp_num=0;
    int tmp_total=0;
    double tmp_avr =0;
    printf(" 학번     총점     평균\n");
    printf("===========================\n");
    for(int i = 0; i< 6; i++){
        for(int j = i; j<6; j++){
            if(score[i][4]< score[j][4]){
                tmp_total = score [i][4];
                score[i][4]= score[j][4];
                score[j][4] = tmp_total;
                tmp_num = score[i][0];
                score[i][0] = score[j][0];
                score[j][0] = tmp_num;
                tmp_avr = average[i];
                average[i]=average[j];
                average[j]= tmp_avr;
            }
        }
        printf("학번 : %d, totalscore: %d, average: %.2f\n", score[i][0], score[i][4],average[i]);
    }


}