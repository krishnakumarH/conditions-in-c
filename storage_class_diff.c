main( )
{
func( ) ;
func( ) ;
}
func( )
{
auto int i = 0 ;      //fun1=1, func2=1
register int j = 0 ;   //fun1=1, fun2=1
static int k = 0 ;      //fun1=1,fun2=2 bcz it remember data
i++ ; j++ ; k++ ;
printf ( "\n %d % d %d", i, j, k ) ; op will be fun1=111,fun2=112
}
