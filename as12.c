12.Write a C program to find all primefactors of a number.
#include<stdio.h>
int main(){
        int i,j,Number,isPrime;
        printf("Enter a number:");
        scanf("%d",&Number);
        for(i=2;i<=Number;i++){
                if(Number%i==0){
                        isPrime=1; 
                        for(j=2;j<=i/2;j++){
                                if(i%j==0){
                                        isPrime=0;
                                        break;
                                }
                        }
                        if(isPrime==1){
                                printf("\n%dis a PrimeFactor",i);
                        }
                }
        } 
        return 0;
}

