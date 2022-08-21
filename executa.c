#include<stdio.h>
#include<time.h>

//código funcionou com sucesso no borland C++ 3.1

int main(){

    time_t ligar = time(NULL);
    time_t horario = time(NULL);
    int ligar1 = 0;

    struct tm tm = *localtime(&horario);
    
    //printf("now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    //printf("horário do sistema: %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
    
    
    
    //printf("%02d\n",tm.tm_hour);
    ligar1 = tm.tm_hour;

   /* if (ligar1 == 13){
        printf("já deu o horário");
    }
    */

   int li = 10;
    
    delay(1000);

    if (ligar1 != li){
        printf(" nao já deu o horário");
    }
    

    printf("%d",ligar1);
    
}