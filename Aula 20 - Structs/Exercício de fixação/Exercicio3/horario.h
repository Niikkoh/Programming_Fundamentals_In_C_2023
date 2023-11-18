
#ifndef _HORARIO_
#define _HORARIO_

/*================*/

#define CASA_SEXADECIMAL 60
#define SEGUNDOS_DE_UM_DIA 86400

#define HORA_A 22
#define MINUTO_A 59
#define SEGUNDO_A 59

#define HORA_B 23
#define MINUTO_B 00
#define SEGUNDO_B 01

/*================*/

typedef struct
{
    int hora;
    int minuto;
    int segundo;

}Horario;

/*================*/

int segundosEntre (Horario h1, Horario h2);
int converteTempoSegundos (Horario h);

/*================*/

#endif // _HORARIO_

