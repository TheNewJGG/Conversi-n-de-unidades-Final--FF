#ifndef DEFINICIONES_H
#define DEFINICIONES_H
//Menu para las unidades de medida que utilizaremos

//Metro
void def_long(){
    printf("Metro (m)\n");
    printf("Origen histórico (1791 - 1799)\n");
    printf("Se definió originalmente como la diezmillonesima parte de la distancia entre el ecuador y el Polo Norte, medida a lo largo del meridiano que pasa por París.\n");
    printf("Este intengo buscaba una unidad basada en la Tierra, no en objetos humanos.\n");
    printf("Definición moderna\nEl metro es la distancia que recorre la luz en el vacío en 1/299 792 458 segundos.");
}
//Kilogramo
void def_masa(){
    printf("Kilogramo (kg)\n");
    printf("Origen histórico (1795)\n");
    printf("Se definió como la masa de un litro (1 dm^3) de agua pura a 4°C, la temperatura donde el agua tiene su máxima densidad.");
    printf("Definición moderna (2019)\nEl kilograma se define fijando el valor de la constante de Planck (h)");
}
//Kelvin
void def_temp(){
    printf("Kelvin (K)");
    printf("Origen histórico\n");
    printf("Basado en la escala termodinámica de Lord Kelvin 0 K = cero absoluto");
    printf("Definición moderna (2019)\nEl kelvin se define fijando el valor de la constante de Boltzmann (k)");
}

//Descripciones para el SI como para el Sistema Británico en caso de existir
#endif