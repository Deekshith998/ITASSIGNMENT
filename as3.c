
/*name:V.DEEKSHITH
ID:B191696
3.Write a C program to enter a number and print its
reverse.
*/
#include<stdio.h>
int main(){
        int n,rev=0,remainder;
        printf("name:v.DEEKSHITH\n");
        printf("ID:B191696");
        printf("Enter an integer:");
        scanf("%d",&n);
        while(n!=0){
                remainder=n%10;
                rev=rev*10+remainder;
                n/=10;
        }
        printf("Reversednumber=%d",rev);
        return 0;
}

