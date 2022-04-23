#include <stdio.h>
#include "practice.h"

int Far2Cel(int c)
{
		c = ((c - 32.0) * 5.0 / 9.0);
		return c;
}