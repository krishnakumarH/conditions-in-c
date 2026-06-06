main( )
{
func( ) ;
func( ) ;
}
func( )
{
auto int i = 0 ;      //fun1=1, func2=1
register int j = 0 ;   //fun1=1, fun2=1
static int k = 0 ;      //fun1=1,fun2=2 bcz it remember data value retained)
i++ ; j++ ; k++ ;
printf ( "\n %d % d %d", i, j, k ) ; op will be fun1=111,fun2=112
}

extern->used to access global variables,allows diff file to access
(refer to existing variable),<-this is mem
reg->used to run in cpu ,no mem 
