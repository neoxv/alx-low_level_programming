/**
 * _isalpha - checks alphabetic character.
 * @c: the tested char
 * Return: returns 0 or 1
 */
int _isalpha(int c)
{
if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return(1);
return(0);
}
