#include<iostream>
#include<cassert>
#include "Pixel.h"
#include "Color.h"
using namespace std;
int main(){
	Pixel p1; Color c;
	assert(p1.getX()==0);
	assert(p1.getY()==0);
	assert(p1.getColor()==Color c);
	
	p1.p.x=5;setPos(5,10)
	assert(p1.getX()==5);
	assert(p1.getY()==10);
	setColor
	assert(p1.c.R==1);
	p1.c.G=2;
	assert(p1.c.G==2);
	p1.c.B=3;
	assert(p1.c.B==3);
	p1.c.A=4;
	assert(p1.c.A==4);
	
	Pixel p2(Color c1( 4 , 3 , 2 , 1 ),Point p3(7,-7));
	assert(p2.p.x==7);
	assert(p2.p.y==-7);
	assert(p2.c.R==4);
	assert(p2.c.G==3);
	assert(p2.c.B==2);
	assert(p2.c.A==1);
	
	Pixel p4(p2);
	assert(p4.p.x==p2.p.x);
	assert(p4.p.y==p2.p.y);
	assert(p4.c.R==p2.c.R);
	assert(p4.c.G==p2.c.R);
	assert(p4.c.B==p2.c.R);
	assert(p4.c.A==p2.c.R);
	
	p4.x=77; p4.y=12; c4.R=1; c4.G=2; c4.B=3; c4.A=4;
	assert(p2.p.x==7);
	assert(p2.p.y==-7);
	assert(p2.c.R==4);
	assert(p2.c.G==3);
	assert(p2.c.B==2);
	assert(p2.c.A==1);
	
	cout<<"Tests complete!"<<endl;
}