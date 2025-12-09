#ifndef CONVBRIT_H
#define CONVBRIT_H
#include "Funciones.h"
#include "definiciones.h"
//Procesos para la conversión de funciones
//longitud
float i, j; //será para mostrar los valores de las unidades
int opt,ret;
void conv_britlong(){
    i = 0;
    system("cls");
    printf("¿Qué conversión desea ejecutar?\n");
    printf("1.- Pulgada [in] a Metros [m] \n2.- Pie [ft] a Metros [m] \n3.- Yarda [yd] a Metros [m] \n4.- Milla [mi] a Metros [m]");
    printf("\nEscriba el valor de la opción: ");
    scanf("%i", &opt);
    switch (opt){
    case 1:
        printf("favor de escribir la cantidad en pulgadas a convertir: ");
        scanf("%f", &i);
        j= i/(39.37);
        printf("%.4f [in] equivale a %.4f [m]", i, j);
        printf("\n¿Quieres convertir otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_britlong();
            } else {conv_brituni();}
        break;
    case 2:
        printf("favor de escribir la cantidad en pies a convertir: ");
        scanf("%f", &i);
        j = i/(3.281);
        printf("%.4f [ft] equivale a %.4f [m]", i, j);
        printf("\n¿Quieres convertir otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_britlong();
            } else {conv_brituni();}
        break;
    case 3:
        printf("favor de escribir la cantidad en yardas a convertir: ");
        scanf("%f", &i);
        j = i/(1.094);
        printf("%.4f [yd] equivale a %.4f [m]", i, j);
        printf("\n¿Quieres convertir otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_britlong();
            } else {conv_brituni();}
        break;
    case 4:
        printf("favor de escribir la cantidad en millas a convertir: ");
        scanf("%f", &i);
        j = i*(1609);
        printf("%.4f [mi] equivale a %.4f [m]", i, j);
        printf("\n¿Quieres convertir otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_britlong();
            } else {conv_brituni();}
        break;
    default:
        printf("No es una opción válida.\n");
        conv_britlong();
        break;
    }
}
//masa
void conv_britmasa(){
    i = 0;
    system("cls");
    printf("¿Qué unidad desea tratar?\n");
    printf("1.- Libra [lb] a Kilogramos [kg]\n2.- Onza [oz] a Kilogramos [kg]\n3.- Tonelada [ton] a Kilogramos [kg]");
    printf("\nEscriba el valor de la opción: ");
    scanf("%i", &opt);
    switch (opt){
    case 1:
        printf("favor de escribir la cantidad de libras a convertir: ");
        scanf("%f", &i);
        j = i/(2.205);
        printf("%.4f [lb] equivale a %.4f [Kg]", i, j);
        printf("\n¿Quieres convertir otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_britmasa();
            } else {conv_brituni();}
        break;
    case 2:
        printf("favor de escribir la cantidad de onzas a convertir: ");
        scanf("%f", &i);
        j = i/(35.274);
        printf("%.4f [oz] equivale a %.4f [Kg]", i, j);
        printf("\n¿Quieres convertir otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_britmasa();
            } else {conv_brituni();}
        break;
    case 3:
        printf("favor de escribir la cantidad de toneladas a convertir: ");
        scanf("%f", &i);
        j = i * (1000);
        printf("%.4f [ton] equivale a %.4f [Kg]", i, j);
        printf("\n¿Quieres convertir otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_britmasa();
            } else {conv_brituni();}
        break;
    default:
        printf("No es una opción válida\n");
        conv_britmasa();
        break;
    }
}

//Temperatura
void conv_brittemp(){
    i = 0;
    system("cls");
    printf("¿Qué unidad desea tratar?\n");
    printf("1.- Fahrenheit [°F] a Kelvin [K]\n2.-Fahrenheit [°F] a Celcius [°C]");
    printf("\nEscriba el valor de la opción: ");
    scanf("%i", &opt);
    switch (opt){
    case 1:
        printf("favor de escribir la cantidad de Kelvin a convertir: ");
        scanf("%f", &i);
        j = ((i-32)*0.5556 + 273.15);
        printf("%.4f [°F] equivale a %.4f [K]", i, j);
        printf("\n¿Quieres convertir otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_brittemp();
            } else {conv_brituni();}
        break;
    case 2:
        printf("favor de escribir la cantidad de Kelvin a convertir: ");
        scanf("%f", &i);
        j = (i-32)*0.5556;
        printf("%.4f [°F] equivale a %.4f [°C]", i, j);
        printf("\n¿Quieres convertir otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_brittemp();
            } else {conv_brituni();}
        break;
    default:
        printf("No es una opción válida\n");
        conv_brittemp();
        break;
    }
}
#endif