#include<stdio.h>
//checks if an input number is a palindrom

int findReverse(int);
int main(){
    int number;
    scanf("%d", &number);

    return 0;
}

int findReverse(int a){
    int reversed = 0;
    int digit;

    while (a != 0){
        digit = a%10;
        reversed = reversed*10 + digit;
        a = a/10;
    }
    return reversed;

}