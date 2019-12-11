#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>



void main(){

    int pid,aux;
    pid=fork();
    if(pid==0)
    {


        system ("aplay temas/tema4.wav");
        system("clear");


    }
    else
    {



        system("cmatrix -b -C red -s");

                aux=system("pidof aplay");


        system("killall aplay");


        system("clear");


    }

}
