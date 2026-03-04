#include <stdio.h>
float main()
{
	float n;
	scanf("%.3f",&n);
	for(float i=1;i<4;i++)
	{
		for(float j=1;j<=i;j++)
		{
			prfloatf("%6.2f",n);
		}
		prfloatf("\n");
	}
}
