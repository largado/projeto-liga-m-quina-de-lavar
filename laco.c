#include<stdio.h>
#include<time.h>
//#include<dos.h>

int main(){

    time_t ligar = time(NULL);
    time_t horario = time(NULL);
    int ligar1 = 23;

    struct tm horaagora = *localtime(&horario);    
    
    
    ligar = horaagora.tm_hour;


    while (ligar != ligar1) {
        printf("%02d\n",horaagora.tm_hour);
        printf("ainda nao deu o horário, continuo aguardando\n");
        //delay(1000); temporizador funciona com o header dos.h
        horaagora = *localtime(&horario);    

    }
    
    //aqui vai bloco que executa a ativacao do led
    printf("deu o horário encerro o programa\n");

}