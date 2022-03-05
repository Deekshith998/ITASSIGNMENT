/*
2.Write a C program to calculate sum of digits of a number
*/
#include<stdio.h>
int main(){
        int n,sum=0,m;
        printf("name:V.DEEKSHITH\n");
        printf("ID:B191696");
        printf("number:");
        scanf("%d",&n);
        while(n>0){
                m=n%10;
                sum=sum+m;
                n=n/10;
        }
        printf("Sum is= %d",sum);
        return 0;
}

