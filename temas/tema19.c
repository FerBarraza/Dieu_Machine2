#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>



void main(){

    int pid,aux;
    pid=fork();
    if(pid==0)
    {


        system("mpg123 temas/tema19.mp3");
        system("clear");



    }
    else
    {



        system("cmatrix -b -C red -s");

                aux=system("pidof mpg123");


        system("killall mpg123");


        system("clear");


    }


}
