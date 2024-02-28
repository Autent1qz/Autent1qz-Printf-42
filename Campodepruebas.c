
#include "ft_printf.h"

xxx  xxxx(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        if (s[i] == '%')
        {
            funcion_encargada_tipo(parametros, xxx);
            i++;
        }
        ft_putchar(parametros);
        i++;
    }
}
// esta funcion la meto dentro de la funcion printf para que vaya imprimiendo caracteres hasta que
// se encuentre um % y lo manda a otra funcion que se encarga de determinar si es tipo int, char, decimal, etc...



//la funcion que se encargaria seria algo asi:

xxxx funcion_encargada_tipo(parametros, xxx)
{
    if (s == 'c')
        ft_putchar(xxxx);
    else if (s == 'i')
        ft_putnbr(xxx);
    else if 
    etc ...
}
// esta funcion se encargaria de saber que tipo es y delegar a otras funciones imprimir segun el tipo
// porfavor dime si voy por el camino correcto
