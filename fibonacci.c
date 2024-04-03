#include <stdio.h>

int main(){
    int i = 0, j = 1,temp=0, n, flag_pertence=0;

    scanf("%d",&n);
    //printf("%d ",i);
    while(1){
        //printf("%d ",j);
        temp = j + i;//0 + 1 = 1
        i=j;
        j=temp;
        if(n == j || n ==i){
            flag_pertence = 1;
        }
        if (j >= n){
            break;
        }

    }
    if(flag_pertence==1){
        printf("Pertence a sequencia de Fibonacci");
    }else{
        printf("Nao pertence a sequecia de Fibonacci");
    }

    

}