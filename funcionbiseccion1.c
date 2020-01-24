#include<stdio.h>
#include<conio.h>
#include<math.h>

float x,y,errorusuario;
float e_test=0, f_xu, f_xl, xr, f_xr;
float iteracion1, iteracion2;
float raiz;

float f_x(float x)
{
return (pow(x,3)+4*pow(x,2)-10);
}


float operacion(float x_l,float x_u,float e)
{
e_test=(x_u-x_l)/2;
while(e_test>e)
    {
     f_xl=f_x(x_l);
     f_xu=f_x(x_u);
     xr=((x_l+x_u)/2);
     f_xr=f_x(xr);
     e_test=(x_u-x_l)/2;

     //iteraciones para llegar a error
           iteracion1=f_xl*f_xr;
           iteracion2=f_xu*f_xr;

      if(iteracion1>0&&iteracion2<0)
         {
          x_l=xr;
         }
         if(iteracion1<0&&iteracion2>0)
               {
                x_u=xr;
               }
     e_test=(x_u-x_l)/2;
     printf("\nEL valor del error es:%f",e_test);
    }
raiz=xr;

return raiz;

}


int main()
{
printf("\nPrograma para calcular una funcion cubica (x^3 + 4x^2 -10)");
printf("\n\nIngrese el intervalo de evaluacion de la funcion");
printf("\nPrimer numero: ");
scanf("%f",&x);
printf("\nSegundo numero: ");
scanf("%f",&y);
printf("\nDigita el error permitido: ");
scanf("%f",&errorusuario);

operacion(x,y,errorusuario);
printf("\nLa raiz aproximada es:%f",raiz);

getch();
return 0;
}
