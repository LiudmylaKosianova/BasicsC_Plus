#include<stdio.h>
//assigns grades to students based on their average scores
double getAverageScore(double array[5]);
char computeGrade(double a);
int main(){

    double scores[5] = {55, 64, 75, 80, 65};
 
    double averageScore = getAverageScore(scores);
    printf("%.2lf", averageScore);

    return 0;
}

double getAverageScore(double array[5]){
    double sum = 0;
    for (int i = 0; i < 5; i++){
        sum += array[i];
    }
    return sum/5;
}
char computeGrade(double a){
    
}