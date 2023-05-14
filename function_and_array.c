#include<stdio.h>
        //double 
void fun(int *ar,int n){ // reseve array and array size 
    for(int i=0; i<n; i++){   // total array print 
        printf("%d ",ar[i]);  //%dlf 
    }
}
int main(){

    //double 
    int ar[5]={10,20,30,40,50};
    fun(ar,5); // pase array and array size 

    return 0;
}