
#include<stdio.h>
int main(){
        int n,count=0;
        printf("number");
        scanf("%d",&n);
        do{
          n/=10;
          ++count;
        }while(n!=0);

        printf("Numberofdigits:%d",count);
        return 0;
}
