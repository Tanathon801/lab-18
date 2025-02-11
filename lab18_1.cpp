#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1,Rect r2){
    
    r1.w = r1.x + r1.w;
	r1.h = r1.y - r1.h;

	r2.w = r2.x + r2.w;
	r2.h = r2.y - r2.h;

	double width = min(r1.w, r2.w) - max(r1.x, r2.x);
	double heigth = min(r1.y, r2.y) - max(r1.h, r2.h);
	return max(0.0, width) * max(0.0, heigth);
}
