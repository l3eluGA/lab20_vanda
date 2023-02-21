#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2)
{	
	double w0=min((R2->x+R2->w),(R1->x+R1->w))-max(R1->x,R2->x);
	double h0=min(R1->y,R2->y)-max((R1->y-R1->h),(R2->y-R2->h));
	if(w0<0 or h0<0) return 0;
	else return w0*h0;
}
