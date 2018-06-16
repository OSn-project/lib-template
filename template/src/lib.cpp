#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <{{IncludeDir}}/lib.h>

namespace {{Namespace}}
{
	char *hello()
	{
		return strdup("Hello!");
	}
};
