#include	"main.h"

char	*_strcat(char	*dest,	const	char	*src)	{
	char	*ptr	=	dest;

	while	(*dest	!=	'\0')	{
	dest++;
	}

	while	(*src	!=	'\0')	{
	*dest++	=	*src++;
	}

	*dest	=	'\0';

	return	ptr;
}
