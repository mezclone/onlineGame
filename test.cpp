//this is a test

/*
this is another test
this is a second line
 */

/*
char
short
int
unsigned char
unsigned short
unsigned int
void
*/

/*
short monsterMaker( int id, char gender ) {
    
    return 23000;
    }
*/
#include "common.h"
#include <stdio.h>


int badAdd( int a, int b ) {
    a = a + 1;
    
    
    return a + b;
    }


void addOne( int *a ) {
    int t = *a;
    t = t + 1;
    
    *a = t;
    }


int addAll( int count, int *a ) {
    // write code to add all elements of array together
    int sum = 0;
    return sum;
    }



typedef int number;


typedef struct {
        char *name;
        int xPos;
        int yPos;
        int health;
        int ammo;
    } Monster;

    

void processMonster( Monster m ) {
    m.name;
    m.health


    

int main( int numArgs, char *args[] ) {
//int main( ) {
    
    number xx = 1;
    
    Monster jason;

    jason.health = 10;
    jason.ammo = 25;
    

    processMonster( jason )
    char b = 'A';
    
    printf( "My letter is %d\n", (int)b );
    int i = 0;
    
    while(  i < numArgs )  {
        char *arg = args[ i];
        int j = 0;
        
        while( false && arg[j] != '\0'){
            arg[j] = arg[j] + 1;
            j = j + 1;
            }
        
        printf( "the %dth arg is %s, the first char is %c\n", 
                i, arg, arg[0] );
        
        
        i = i + 1;
        }
    
    int a[5];

    int x = 5;
    int y = 10;
    
    x = 8; 


    int *p = &x;
    
    p = &y;
    
    x = *p;
    
    const char *m = "This is a test";
    //const char *n = "This is a test dsfaasd";
    //const char *o = "This is a test asdfdsaf";
    if(numArgs > 1  ) {
        printf( "the first arg is %s\n", args[1] );
        
        }
     
    /*
    const char *myStrings[3];
    
    myStrings[0] = m;
    myStrings[1] = n;
    myStrings[2] = o;
    */

    printf( "My string = %s\n", m );
    


    printf( "x = %d\n", x );
    
    addOne( &x );

    printf( "x = %d\n", x );



    a[0] = add( x, 6 );
    a[1] = add( 4, 2 );
    a[2] = add( 7, 5 );
    a[3] = add( 1,36 );
    a[4] = add( 9, 7 );
    

    int s = addAll( 5, a );

    printf( "s=%d\n", s );
    

    printf( "this will show only a0=%d a1=%d a2=%d a3=%d a4=%d\n",
            a[0], a[1], a[2], a[3], a[4]  );
    
    return 0;
    }
