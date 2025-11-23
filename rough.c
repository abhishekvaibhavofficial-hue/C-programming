#include<stdio.h>
int main(){
    int num, output ;
    printf("give the first number:",num);
    scanf("%d",&num);
    if (num <= 15){                        // after printing if or else statement put {}.    //condition is writen in small bracket before printf statement.
    printf("num is smaller than 15");
    }
    else {
        printf("num is greater than 15");
    }
    return 0;
}