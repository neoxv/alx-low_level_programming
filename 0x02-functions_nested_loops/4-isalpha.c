#include <ctype.h>
int _islower(int c)
{
if (isupper(c) || islower(c))
{
return(1);
}
return(0);
}
