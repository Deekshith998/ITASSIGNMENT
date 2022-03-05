10.C program to check whether a number is Prime number or not.
#include<stdio.h>
int main(){
        int n,i,flag=0;
        printf("Enter a positive integer:");
        scanf("%d",&n);
        for(i=2;i<=n/2;++i){
                 if(n%i==0){
                         flag=1;
                         break;
                 }
        }
        if(n==0||n==1){
                printf("%d is neither prime nor composite.",n);
        }
        else{
                if(flag==0)
                        printf("%d is a primenumber.",n);
                else
                        printf("%d is not a primenumber.",n);
        }
        return 0;
}
