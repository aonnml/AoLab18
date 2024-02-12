#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R,Rect S){
    double x = max(0.0, min(R.x + R.w, S.x + S.w) - max(R.x,S.x));
    double y = max(0.0, min(R.y,S.y) - max(R.y - R.h, S.y - S.h));
    return x * y;
}