#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a, b, x1, y1;
	cin >> a >> b >> x1 >> y1;
	a=fabs(a);
	b=fabs(b);
	x1=fabs(x1);
	y1=fabs(y1);
	printf("%.3lf %.3lf %.3lf %.3lf\n", fabs(a*b), fabs(a*(y1-b)), fabs((x1-a)*(y1-b)), fabs((x1-a)*b));
	return 0;
} 