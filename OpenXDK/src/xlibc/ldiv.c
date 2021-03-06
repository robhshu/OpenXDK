// ******************************************************************
// * 
// * proj : openLIBC
// *
// * desc : Totally Free LIC replacement
// *
// * file : _memccpy.c
// *
// * note : This LIBC is TOTALLY free - do what you like with it!!
// *
// ******************************************************************

#include	<stdlib.h>

ldiv_t	ldiv( long int number, long int divisor )
{
	ldiv_t answer;

	if( divisor == 0 ) abort();

	answer.quot	= number/divisor;
	answer.rem	= number%divisor;
	if( (number >= 0) && (answer.rem < 0) ){
		++answer.quot;
		answer.rem -= divisor;
	}

	return answer;
}
