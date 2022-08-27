/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
int x, y, resultado;
resultado = 0;
char vezes_calculado;

printf("Digite um numero de 1 a 20 \n");
scanf("%d",&x);

printf("Digite um numero maior que o numero anterior, menor que 100mil \n");
scanf("%d",&y);
//loop
while(resultado <= (y-1))
{
    if(resultado ==0)
    {
        resultado = 1;
        printf("%d ",resultado);
        vezes_calculado = 1;
        
    } //end if
    else
    {
        resultado = resultado +1;
        printf("%d ",resultado);
        vezes_calculado =vezes_calculado + 1;
    } //end else
    if(vezes_calculado == x)
    {
    printf("\n");
    vezes_calculado = 0;
    }
    
} //end if

return 0;

} //end while
