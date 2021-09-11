#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define pi 3.1416

void suma(struct complejo,struct complejo);
void resta(struct complejo,struct complejo);
void multi(struct complejo,struct complejo);
void divi(struct complejo,struct complejo);
double real(double,double);
double compleja(double,double);
double modul(double,double);
double argument(double,double);

struct complejo
{
int modulo;
int argumento;

};

main (void)
{
int n,m,opcion;
struct complejo x,y;

for(;
{
system("cls");
printf("nMenu:n");
printf("1. Suma de complejosn");
printf("2. Resta de complejosn");
printf("3. Multiplicacion de complejosn");
printf("4. Division de complejosn");
printf("5. Salirn");
printf("seleccione una opcion ");

if(scanf("%d",&opcion)==0)
{
opcion=0;
fflush(stdin);
}
switch(opcion)
{
case 1:

printf("1. Suma de complejosn");
printf("ingrese el primer numero modulo y argumento separado por coma: n");
scanf("%d,%d",&x.modulo,&x.argumento);
printf("ingrese el segundo numero modulo y argumento separado por coma: n");
scanf("%d,%d",&y.modulo,&y.argumento);
suma(x,y);

printf("npresione una tecla para continuarn");
getch();
break;

case 2:

printf("2. Resta de complejosn");
printf("ingrese el primer numero modulo y argumento separado por coma: n");
scanf("%d,%d",&x.modulo,&x.argumento);
printf("ingrese el segundo numero modulo y argumento separado por coma: n");
scanf("%d,%d",&y.modulo,&y.argumento);
resta(x,y);
printf("npresione una tecla para continuarn");
getch();
break;

case 3:

printf("3. Multiplicacion de complejosn");
printf("ingrese el primer numero modulo y argumento separado por coma: n");
scanf("%d,%d",&x.modulo,&x.argumento);
printf("ingrese el segundo numero modulo y argumento separado por coma: n");
scanf("%d,%d",&y.modulo,&y.argumento);
multi(x,y);
printf("npresione una tecla para continuarn");
getch();
break;

case 4:

printf("4. Division de complejosn");
printf("ingrese el primer numero modulo y argumento separado por coma: n");
scanf("%d,%d",&x.modulo,&x.argumento);
printf("ingrese el segundo numero modulo y argumento separado por coma: n");
scanf("%d,%d",&y.modulo,&y.argumento);
divi(x,y);
printf("npresione una tecla para continuarn");
getch();
break;
case 5:

exit(0);
default:
printf("su seleccion fue incorrectan");
printf("seleccione otra opcionn");
printf("presione una tecla para continuarn");
getch();
}
}
return 0;
}


void suma(struct complejo x,struct complejo y)
{
double i,j,m,n;
i= real(x.modulo,x.argumento)+real(y.modulo,y.argumento);
j= compleja(x.modulo,x.argumento)+compleja(y.modulo,y.argumento);
m=modul(i,j);
n=argument(i,j);

printf("%f <%f",m,n);

}

void resta(struct complejo x,struct complejo y)
{
double i,j,m,n;
i= real(x.modulo,x.argumento)-real(y.modulo,y.argumento);
j= compleja(x.modulo,x.argumento)-compleja(y.modulo,y.argumento);
m=modul(i,j);
n=argument(i,j);

printf("%f <%f",m,n);

}

void multi(struct complejo x,struct complejo y)
{
double i,j;
i=(x.modulo)*(y.modulo);
j= (x.argumento)+(y.argumento);
printf("%f <%f",i,j);

}

void divi(struct complejo x,struct complejo y)
{
double i,j;
i=(double)(x.modulo)/(double)(y.modulo);
j= (x.argumento)-(y.argumento);
printf("%f <%f",i,j);

}

double real(double m,double a)
{
return m*cos(a*(pi/180));
}

double compleja(double m,double a)
{
return m*sin(a*(pi/180));
}

double modul(double r,double i)
{
return sqrt((pow(r,2))+(pow(i,2)));
}

double argument(double r,double i)
{
double m;
m=(asin(i/modul(r,i)))*(180/pi);

return m;
}
