#include <stdio.h>
int main()
{
    /*
        1) soma -> +=
        2) subtra��o -> -=
        3) multiplica��o -> *=
        4) divis�o -> /=
        5) resto (m�dulo) -> %=

    */

    int i = 1;
    printf( "%i\n", i );
    printf( "%i\n", ++i );
    i++;
    printf( "%i\n", i );

    system("cls");

    int i2 = 5;
    printf("%i", i2);
    printf("%i", --i2);
    i2--;
    printf("%i", i2 );

    /*
        1) Incremento\
        >Pr� ou Pos
        2) Decremento/

        Pre -> o valor ser� incrementado/decrementado na instru��o
                que a vari�vel estiver contida

        Pos -> o valor ser� incrementado/decrementado na pr�xima
                instru��o


    */

    int x = 0;
    x = x + 10;//incrementar qntas unidades desejarmos
    x += 10;//incrementar qntas unidades desejarmos
    ++x;// op. incremento, s� podemos incrementar
        // uma unica unidade
    system( "cls ");

    printf("%i", x);


    return 0;
}
