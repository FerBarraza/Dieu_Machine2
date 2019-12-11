#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>

void reproduccion(int);
void repet(int dni[]);
void fflush_Linux(){
    int z;
    do{
        z = getchar();
    }while (z != '\n' && z != EOF);
}

void main(){
    int cont=0,num_ing,fecha=0,vec_dni[20],aux,z,dia,mes,ano;
    vec_dni[0]=9999;
    vec_dni[1]=9999;
    vec_dni[2]=9999;
    vec_dni[3]=9999;
    vec_dni[4]=9999;
    vec_dni[5]=9999;
    vec_dni[6]=9999;
    vec_dni[7]=9999;
    vec_dni[8]=9999;
    vec_dni[9]=9999;
    vec_dni[10]=9999;
    vec_dni[11]=9999;
    vec_dni[12]=9999;
    vec_dni[13]=9999;
    vec_dni[14]=9999;
    vec_dni[15]=9999;
    vec_dni[16]=9999;
    vec_dni[17]=9999;
    vec_dni[18]=9999;
    vec_dni[19]=9999;
    vec_dni[20]=9999;
    vec_dni[21]=9999;
    char tabla_nom[20][20],nombre_apel[20],pasion[30];
    sleep(1);       system("clear");    sleep(1);

    printf("     ___    ____    ___  __ __      ___ ___   ____    __  __ __  ____  ____     ___\n");
    printf("    |   \\  |    |  /  _]|  |  |    |   |   | /    |  /  ]|  |  ||    ||    \\   /  _]\n");
    printf("    |    \\  |  |  /  [_ |  |  |    | _   _ ||  o  | /  / |  |  | |  | |  _  | /  [_\n");
    printf("    |  D  | |  | |    _]|  |  |    |  \\_/  ||     |/  /  |  _  | |  | |  |  ||    _]\n");
    printf("    |     | |  | |   [_ |  :  |    |   |   ||  _  /   \\_ |  |  | |  | |  |  ||   [_\n");
    printf("    |     | |  | |     ||     |    |   |   ||  |  \\     ||  |  | |  | |  |  ||     |\n");
    printf("    |_____||____||_____| \\__,_|    |___|___||__|__|\\____||__|__||____||__|__||_____|\n");
printf("\n");
printf("\n");
printf("\n  Este programa le permite escuchar una melodía que solo le pertenece a su persona...\n");
printf("\n                 Somos seres unicos e irrepetibles...\n");
printf("\n                   Estos algoritmos lo recuerdan\n");
printf("\n          que mejor forma de demostrarlo mediante la musica \n");
printf("\n  Este programa genera mediante sus datos una melodia que solo le pertenece a usted...\n");
printf("\n");
printf("\n*************************************************************");

printf("\n");

sleep(10);
scanf("%c",&aux);
    system("clear");


while(1){
//
    printf("\n      1. Ingrese algunos datos para identificarlo y escuche su melodía\n");
    printf("\n      2. Volver a escuchar mi canción\n");
    printf("\n      (Elija una opción 1/2)\n\n");
    scanf("%i",&num_ing);
    fflush_Linux();

    if(num_ing==1)
    {
        printf("\n\nIngrese su nombre, apellido y presione enter dos veces: ");
        fgets(nombre_apel, 20, stdin);
        fflush_Linux();
        strcpy(tabla_nom[cont],nombre_apel);
        puts(tabla_nom[cont]);

        printf("\n\nFecha de nacimiento ");
        printf("\n\nAño: ");
        scanf("%i",&ano);
        fflush_Linux();
        printf("\n\nMes (1/12): ");
        scanf("%i",&mes);
        fflush_Linux();
        printf("\n\nDía: (1/31)");
        scanf("%i",&dia);
        fflush_Linux();
        fecha=dia+mes+ano;

        vec_dni[cont]=fecha;
        fflush_Linux();
        printf("\n\nDescribete en dos palabras: ");
        fgets(pasion, 30, stdin);
        fflush_Linux();
        for(int i=0;i<2000;i++){
        printf("\n          Esta es tu canción %s \n",nombre_apel);
        printf("\n***********************************************\n",nombre_apel);}
        system("sleep 2");

        reproduccion(cont);
        cont++;
    }
    else if(num_ing==2)
    {
        repet(vec_dni);
    }
    sleep(2);
    system("clear");

    printf("     ___    ____    ___  __ __      ___ ___   ____    __  __ __  ____  ____     ___\n");
    printf("    |   \\  |    |  /  _]|  |  |    |   |   | /    |  /  ]|  |  ||    ||    \\   /  _]\n");
    printf("    |    \\  |  |  /  [_ |  |  |    | _   _ ||  o  | /  / |  |  | |  | |  _  | /  [_\n");
    printf("    |  D  | |  | |    _]|  |  |    |  \\_/  ||     |/  /  |  _  | |  | |  |  ||    _]\n");
    printf("    |     | |  | |   [_ |  :  |    |   |   ||  _  /   \\_ |  |  | |  | |  |  ||   [_\n");
    printf("    |     | |  | |     ||     |    |   |   ||  |  \\     ||  |  | |  | |  |  ||     |\n");
    printf("    |_____||____||_____| \\__,_|    |___|___||__|__|\\____||__|__||____||__|__||_____|\n");

    printf("\n");
printf("\n  Este programa le permite escuchar una melodía que solo le pertenece a su persona...\n");
printf("\n                 Somos seres unicos e irrepetibles...\n");
printf("\n                   Estos algoritmos lo recuerdan\n");
printf("\n          que mejor forma de demostrarlo mediante la musica \n");
printf("\n  Este programa genera mediante sus datos una melodia que solo le pertenece a usted...\n");
    printf("\n*************************************************************");

    }

}

void repet(int dni[20]){

    int doc_analizar=0,i,z,an,me,di;


        printf("\n\nFecha de nacimiento ");
        printf("\n\nAño: ");
        scanf("%i",&an);
        fflush_Linux();
        printf("\n\nMes (1/12): ");
        scanf("%i",&me);
        fflush_Linux();
        printf("\n\nDía: (1/31)");
        scanf("%i",&di);
        fflush_Linux();
        doc_analizar=di+me+an;


    for(i=0;i<20;i++){
        if(doc_analizar==dni[i])
        {
            reproduccion(i);
            break;
        }

    }

}

void reproduccion(int con){


    if(con==0)
    {
        system("./temas/tema1");
	system("clear");
    }
    if(con==1)
    {
        system("./temas/tema2");
    }
    if(con==2)
    {
        system("./temas/tema3");
    }
    if(con==3)
    {
        system("./temas/tema4");
    }
    if(con==4)
    {
        system("./temas/tema5");
    }
    if(con==5)
    {
        system("./temas/tema6");
    }
    if(con==6)
    {
        system("./temas/tema7");
    }
    if(con==7)
    {
        system("./temas/tema8");
    }
    if(con==8)
    {
        system("./temas/tema9");
    }
    if(con==9)
    {
        system("./temas/tema10");
    }
    if(con==10)
    {
        system("./temas/tema11");
    }
    if(con==11)
    {
        system("./temas/tema12");
    }
    if(con==12)
    {
        system("./temas/tema13");
    }
    if(con==13)
    {
        system("./temas/tema14");
    }
    if(con==14)
    {
        system("./temas/tema15");
    }
    if(con==15)
    {
        system("./temas/tema16");
    }
    if(con==16)
    {
        system("./temas/tema17");
    }
    if(con==17)
    {
        system("./temas/tema18");
    }
    if(con==18)
    {
        system("./temas/tema19");
    }
    if(con==19)
    {
        system("./temas/tema20");
    }
    if(con==20)
    {
        system("./temas/tema21");
    }


}







/***
 *     ___    ____    ___  __ __      ___ ___   ____     __  __ __  ____  ____     ___
 *    |   \  |    |  /  _]|  |  |    |   |   | /    |   /  ]|  |  ||    ||    \   /  _]
 *    |    \  |  |  /  [_ |  |  |    | _   _ ||  o  |  /  / |  |  | |  | |  _  | /  [_
 *    |  D  | |  | |    _]|  |  |    |  \_/  ||     | /  /  |  _  | |  | |  |  ||    _]
 *    |     | |  | |   [_ |  :  |    |   |   ||  _  |/   \_ |  |  | |  | |  |  ||   [_
 *    |     | |  | |     ||     |    |   |   ||  |  |\     ||  |  | |  | |  |  ||     |
 *    |_____||____||_____| \__,_|    |___|___||__|__| \____||__|__||____||__|__||_____|
 *          Autor: Barraza, Fernando
 */

