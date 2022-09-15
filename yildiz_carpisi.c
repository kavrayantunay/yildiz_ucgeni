#include<stdio.h>
int main(){
    int i=1;
    int j=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if((i==j)||(i+j==6))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    

}