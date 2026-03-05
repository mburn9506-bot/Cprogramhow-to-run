# include <stdio.h>
int main(){
        int score1 = 72;
        int score2 = 73;
        int score3 = 33;
        printf("average :%i\n",(score1 + score2 +score3)/3);//output:59
        printf("average :%f\n",(score1 + score2 +score3)/3.0);// if i put one float number in formula and chage to %f we get float result average :59.333333
        // printf("average :%f\n",(score1 + score2 +score3)/float(3));change int to float
}