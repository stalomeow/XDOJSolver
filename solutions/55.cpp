#include <stdio.h>
int function( int n );
int main()
{
 int i, n;
 double m=0;
 scanf("%d", &n);
 for( i = 1; i <= n; i++ )
 {
  double A = function( i + 2 );
  double B = function( i + 1 );
  m += A / B;
 }
 printf( "%.2f", m );
 return 0;
}
int function( int n )
{
 int h;
 if( n == 1||n == 2 )
  h = 1;
 else
  h = function( n-2 ) + function( n-1 ) ;
 return ( h );
}

