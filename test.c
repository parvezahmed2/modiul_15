#include<stdio.h>
void fun(int x){
    printf("fun x er addres -%p\n",&x);
}
int main(){


        int x=10;
        printf("main x er addres -%p\n",&x);
        fun(x);

    return 0;
}