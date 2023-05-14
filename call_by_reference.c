#include<stdio.h>
void fun(int* p){
    printf("p er value - %p\n",p);
}


int main(){


     int x=100;
     printf("x er eddres -%p\n",&x);
     fun(&x);


    return 0;
}