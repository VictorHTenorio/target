#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strlen(char *str1);
char* my_inverter(char *str3, int len);


int main(){
    char ch;
    char *str = (char*)malloc(2*sizeof(char));
    int i =0;
    printf("Digite a palavra ");

    ch = getchar();

    while(ch!='\n'){
        str = (char*)realloc(str, (i + 2)*sizeof(char));
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';

    //printf("%s\n",str);
    //printf("%d",my_strlen(str));
    int len=my_strlen(str);
    char* resp=my_inverter(str,len);
    printf("%s",resp);
    free(str);
    free(resp);
  
    return 0;
}

int my_strlen(char *str1){
    int cont =0;
    for(int i=0;str1[i]!='\0';i++){
        cont++;
    }
    return cont;
}

char* my_inverter(char *str3,int len){
    char *str4 = (char*)malloc((len+1)*sizeof(char));
    int j =len -1;
    for(int i=0;i<(len);i++){
        str4[i]=str3[j];
        j--;
    }
    str4[len]='\0';

    return str4;
} 