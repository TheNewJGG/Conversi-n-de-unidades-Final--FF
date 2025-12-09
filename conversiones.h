#ifndef CONVERSIONES_H
#define CONVERSIONES_H
#include "Funciones.h"
#include "definiciones.h"
//Procesos para la conversión de funciones
//longitud
float i, j; //será para mostrar los valores de las unidades
int opt,ret;
void conv_long(){
    i = 0;
    system("cls");
    printf("¿Qué conversión desea ejecutar?\n");
    printf("1.- Metros [m] a Pulgada [in]\n2.- Metros [m] a Pie [ft]\n3.- Metros [m] a Yarda [yd]\n4.- Metros [m] a Milla [mi]");
    printf("\nEscriba el valor de la opción: ");
    scanf("%i", &opt);
    switch (opt){
    case 1:
        printf("favor de escribir la cantidad en metros a convertir: ");
        scanf("%f", &i);
        j = i*(39.37);
        printf("%.4f [m] equivale a %.4f [in]", i, j);
        printf("\n¿Quieres convertir [m] otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_long();
            } else {conv_uni();}
        break;
    case 2:
        printf("favor de escribir la cantidad en metros a convertir: ");
        scanf("%f", &i);
        j = i*(3.2808);
        printf("%.4f [m] equivale a %.4f [ft]", i, j);
        printf("\n¿Quieres convertir [m] otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_long();
            } else {conv_uni();}
        break;
    case 3:
        printf("favor de escribir la cantidad en metros a convertir: ");
        scanf("%f", &i);
        j = i*(1.0936);
        printf("%.4f [m] equivale a %.4f [yd]", i, j);
        printf("\n¿Quieres convertir [m] otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_long();
            } else {conv_uni();}
        break;
    case 4:
        printf("favor de escribir la cantidad en metros a convertir: ");
        scanf("%f", &i);
        j = i*(0.62);
        printf("%.4f [m] equivale a %.4f x10^-3[mi]", i, j);
        printf("\n¿Quieres convertir [m] otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_long();
            } else {conv_uni();}
        break;
    default:
        printf("No es una opción válida.\n");
        conv_long();
        break;
    }
}
//masa
void conv_masa(){
    i = 0;
    system("cls");
    printf("¿Qué unidad desea tratar?\n");
    printf("1.- Kilogramos [kg] a Libra [lb]\n2.- Kilogramos [kg] a Onza [oz]\n3.- Kilogramos [kg] a Tonelada [ton]");
    printf("\nEscriba el valor de la opción: ");
    scanf("%i", &opt);
    switch (opt){
    case 1:
        printf("favor de escribir la cantidad de kilos a convertir: ");
        scanf("%f", &i);
        j = i*(2.205);
        printf("%.4f [Kg] equivale a %.4f [lb]", i, j);
        printf("\n¿Quieres convertir [Kg] otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_masa();
            } else {conv_uni();}
        break;
    case 2:
        printf("favor de escribir la cantidad de kilos a convertir: ");
        scanf("%f", &i);
        j = i*(35.274);
        printf("%.4f [Kg] equivale a %.4f [oz]", i, j);
        printf("\n¿Quieres convertir [Kg] otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_masa();
            } else {conv_uni();}
        break;
    case 3:
        printf("favor de escribir la cantidad de kilos a convertir: ");
        scanf("%f", &i);
        j = i;
        printf("%.4f [Kg] equivale a %.4f x10^-3 [ton]", i, j);
        printf("\n¿Quieres convertir [Kg] otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_masa();
            } else {conv_uni();}
        break;
    default:
        printf("No es una opción válida\n");
        conv_masa();
        break;
    }
}

//Temperatura
void conv_temp(){
    i = 0;
    system("cls");
    printf("¿Qué unidad desea tratar?\n");
    printf("1.- Kelvin [K] a Celcius [°C]\n2.- Kelvin [K] a Fahrenheit\n3.- Kelvin [K] a Rankine");
    printf("\nEscriba el valor de la opción: ");
    scanf("%i", &opt);
    switch (opt){
    case 1:
        printf("favor de escribir la cantidad de Kelvin a convertir: ");
        scanf("%f", &i);
        j = i - 273.15;
        printf("%.4f [K] equivale a %.4f [°C]", i, j);
        printf("\n¿Quieres convertir [K] otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_temp();
            } else {conv_uni();}
        break;
    case 2:
        printf("favor de escribir la cantidad de Kelvin a convertir: ");
        scanf("%f", &i);
        j = 1.8*(i - 273.15) +32;
        printf("%.4f [K] equivale a %.4f [°F]", i, j);
        printf("\n¿Quieres convertir [K] otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_temp();
            } else {conv_uni();}
        break;
    case 3:
        printf("favor de escribir la cantidad de Kelvin a convertir: ");
        scanf("%f", &i);
        j = i*(1.8);
        printf("%.4f [K] equivale a %.4f [R]", i, j);
        printf("\n¿Quieres convertir [K] otro tipo de unidades?\n 1.- Si \n 2.- No\n  :");
        scanf("%i",&ret);
            if (ret == 1){
                conv_temp();
            } else {conv_uni();}
        break;
    default:
        printf("No es una opción válida\n");
        conv_temp();
        break;
    }
}
#endif