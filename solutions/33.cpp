double function(int n)
{
 double m;
 if(n==1)
  m=1;
 else 
  m=1 / ( 1 + function(n-1) );
 return (m);
}
