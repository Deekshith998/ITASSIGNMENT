//5.write a c program to find first and last digit of a number
#include<stdio.h>
int main() {
        int n,sum=0,first,last;
        printf("name:V.DEEKSHITH\n");
        printf("ID:B191696\n");
        printf("Enter number= ");
        scanf("%d",&n);
        last=n%10;
        while(n>=10) { 
                n=n/10;
        }
        first=n;
        printf("first digit=n%d and last digit= %d\n",first,last);
        return 0;
}
