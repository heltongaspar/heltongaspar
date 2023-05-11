#include <stdio.h>

int     main( int argc, char *argv[] ){
    int         i;
    char        aux[20];
    
    
    
    for (i=1; i<argc; i++){
        sprintf( aux, "argv[%d]:", i );
        printf( "%-10s %s\n", aux, argv[i] );
    }
    
    if ( argc > 1 )
        return 0;
    else
        return 1;
}
