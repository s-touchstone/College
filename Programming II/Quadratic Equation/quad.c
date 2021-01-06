#include<stdio.h>
#include<math.h>
#include "complex.h"
#include "real.h"
#include "quad.h"

void solve_quad(int a,int b,int c)
{
	if((pow(b,2)-4*a*c)<0)
	{
		solve_complex(a,b,c);
	}
	else
	{
		solve_real(a,b,c);
	}
}
