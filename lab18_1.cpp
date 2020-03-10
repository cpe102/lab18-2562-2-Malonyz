#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect,Rect);

int main(){
	cout << "Please input Rect 1 (x y w h): ";
	cout << "Please input Rect 2 (x y w h): ";
	Rect R1 ={1.,1.,5.,5.};
	Rect R2 = {2.,2.,5.,5.};
	double r1_x =R1.x+R1.w;
	double r2_x = R2.y+R2.y;
	cout << min(r1_x,r2_x)-max(R1.x,R2.x);
	double r1_y=R1.y-R1.h;
	double r2_y=R2.y-R2.h;
	cout << min(r1_y,r2_y)-max(R1.y,R2.y);
	
	cout << "Overlap area = ";	
	return 0;
}
