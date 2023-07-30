#include<stdio.h>
//takes input integers and finds LCM
//LCM (Lowest Common Multiple) of two numbers, x and y is the smallest positive integer 
//that is perfectly divisible by both x and y.

int findLCM(int, int);
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("The LCM is: %d", findLCM(a, b));
    return 0;
}
int findLCM(int a, int b){
    int lcm = 1;
    
}