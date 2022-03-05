9.Write a C program to find LCM of two numbers.
#include<stdio.h>
intmain(){
        int n1,n2,max;
        printf("Enter two positive integers:");
        scanf("%d%d",&n1,&n2);
        max=(n1>n2)?n1:n2;
        while(1){
                if(max%n1==0&&max%n2==0){
                        printf("LCM of %d,%d=%d.",n1,n2,max);
                        break;
                } ++max;
        }
        return 0;
}
