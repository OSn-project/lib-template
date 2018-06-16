#include <stdlib.h>

#define  NO_HIPPOMOCKS_NAMESPACE
#include <HippoMocks/hippomocks.h>
#include "UnitTest++/UnitTest++.h"

#include "../include/{{IncludeDir}}/lib.h"

using namespace {{Namespace}};

SUITE (ClassName)
{
	TEST (hello_ReturnValueCorrect)
	{
		char *str = hello();
		CHECK_EQUAL(str, "Hello!");
		free(str);
	}
}
