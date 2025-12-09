#include <stdio.h>
#include <stdlib.h>
#include "conversiones.h"
#include "convbrit.h"
#include "funciones.h"
#include "definiciones.h"
///Ejecutar todos los comandos
//Menu principal
int opt = 0; //será para escoger la opción que se necesite
int ret; //Por si se necesita retornar
//Créditos: DELGADO FLORES JESÚS GIOVANI y LUNA GUTIERRES SAYURI

//Programa principal
int main(){
    system("cls");
    printf("¿Que desea consular?\n");
    printf("1.- Conversión de unidades\n");
    printf("2.- Definiciones de las unidades del Sistema Internacional\n");
    printf("3.- Salir. \n");
    printf ("Favor de escribir el número de la opción: ");
    scanf ("%i", &opt);
    switch (opt){
        case 1:
            system("cls");
            tipo_uni();
            break;
        case 2:
            system("cls");
            def_uni();
            break;
        case 3:
            return 0;
            break;
        default: 
            system("cls");
            printf("No es una opción válida\n");
            
        break;
    }
}
//Menu de conversiones de unidades
void conv_uni(){
    system("cls");
    printf("Favor de seleccionar el tipo de unidades de medida a tratar:\n");
    printf("1.- Longitud [m]\n2.- Masa [Kg]\n3.- Temperatura [K]\n4.- Regresar a seleccionar el sistema de unidades\n");
    printf("Escriba el número del tipo de medida:");
    scanf("%i", &opt);
    switch (opt){
        case 1:
            conv_long();
            break;
        case 2:
            conv_masa();
            break;
        case 3:
            conv_temp();
            break;
        case 4:
            tipo_uni();
            break;
        default: 
            printf("No es una opción válida\n");
        break;
     }
}
//menú del BMS
void conv_brituni(){
    system("cls");
    printf("Favor de seleccionar el tipo de unidades de medida a tratar:\n");
    printf("1.- Longitud\n2.- Masa\n3.- Temperatura\n4.- Regresar a seleccionar el sistema de unidades\n");
    printf("Escriba el número del tipo de medida:");
    scanf("%i", &opt);
    switch (opt){
        case 1:
            conv_britlong();
            break;
        case 2:
            conv_britmasa();
            break;
        case 3:
            conv_brittemp();
            break;
        case 4:
            tipo_uni();
            break;
        default: 
            printf("No es una opción válida\n");
        break;
     }
}
//Menu de definiciones
void def_uni(){
    system("cls");
    printf("Favor de seleccionar el tipo de unidades de medida a tratar:\n");
    printf("1.- Longitud \n2.- Masa \n3.- Temperatura \n4.- Salir al menú principal \n");
    printf("Escriba el número del tipo de medida:");
    scanf("%i", &opt);
    switch (opt){
        case 1:
        system("cls");
            def_long();
            printf("\n¿Quieres ver la definición de otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                def_uni();
            } else {main();}
            
            break;
        case 2:
        system("cls");
            def_masa();
           printf("\n¿Quieres ver la definición de otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                def_uni();
            } else {main();}
            break;
        case 3:
        system("cls");
            def_temp();
            printf("\n¿Quieres ver la definición de otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                def_uni();
            } else {main();}
            break;
        case 4:
        system("cls");
            main();
            break;
        default: 
            printf("No es una opción válida\n");
            printf("\n¿Quieres leer otras definiciones?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                def_uni();
            } else {main();}
        break;
     }
}

//Menú para los tipos de sistemas de medida.
void tipo_uni(){
     system("cls");
    printf("¿Que desea consular?\n");
    printf("1.- Conversión del Sistema Internacional de Unidades (SIU) al IMS\n");
    printf("2.- Conversión del Imperial Metric System (IMS) al SIU\n");
    printf("3.- Salir al menú principal. \n");
    printf ("Favor de escribir el número de la opción: ");
    scanf ("%i", &opt);
    switch (opt){
        case 1:
            system("cls");
            conv_uni();
            break;
        case 2:
            system("cls");
            conv_brituni();
            break;
        case 3:
            system("cls");
            main();
            break;
        default: 
            system("cls");
            printf("No es una opción válida\n");
            tipo_uni();
        break;
    }
}