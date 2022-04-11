#include <stdio.h>
#include "practice.h"

double Far2Cel(double c)
{
		double tempFC;
		tempFC = ((c - 32.0) * 5.0 / 9.0);
		return tempFC;
}