#include "../tinySockets/tinySockets.h"
#include <stdio.h>
int port = 8000;

int main() {
    printf( "server starting up on port %d \n", port );
    int serverSock = startServer( port, 10 );
    if( serverSock == -1 ) {
        printf( "server failed to start\n" );
        return 1;
        }
    printf( "server started up\n" );

    int keepGoing = true;
    
    while( keepGoing ) {    
        int readySock = 0;
        while( readySock == 0 ){
            readySock = waitForSocketEvent( 2000 );
            }
        if( readySock == -1 ) {
            printf("wait for socket failed\n");
            keepGoing = false;
            }
        else {
            if(readySock == serverSock) {
                int newSock = acceptConnection( serverSock );
                if(newSock == -1 ) {          
                    printf("accepting connection failed\n");
                    keepGoing = false;
                    }
                if(newSock > 0) {
                    printf( "got new connection\n" );   
                    closeSocket( newSock );   
                    }
                }            
            }
        
        
        }
    
    

    printf( "server shutting down\n" );
    closeSocket( serverSock );
    return 0;
    }
