#include<iostream>
#include<cassert>
#include "Pixel.h"
using namespace std;
int main(){
	Pixel p1;
	assert(p1.getX()==0);
	assert(p1.getY()==0);
	assert(p1.getR()==0);
	assert(p1.getG()==0);
	assert(p1.getB()==0);
	assert(p1.getA()==0);
	
	p1.setX(5);
	assert(p1.getX()==5);
	p1.setY(10);
	assert(p1.getY()==10);
	p1.setR(1);
	assert(p1.getR()==1);
	p1.c.G=2;
	p1.setG(2);
	assert(p1.getG()==2);
	p1.setB(3);
	assert(p1.getB()==3);
	p1.setA(4);
	assert(p1.getA()==4);
	
	Pixel p2(Color c1( 4 , 3 , 2 , 1 ),Point p3(7,-7));
	assert(p2.getX()==7);
	assert(p2.getY()==-7);
	assert(p2.getR()==4);
	assert(p2.getG()==3);
	assert(p2.getB()==2);
	assert(p2.getA()==1);
	
	Pixel p4(p2);
	assert(p4.getX()==p2.getX());
	assert(p4.getY()==p2.getY());
	assert(p4.getR()==p2.getR());
	assert(p4.getG()==p2.getG());
	assert(p4.getB()==p2.getB());
	assert(p4.getA()==p2.getA());
	
	p1.setX(7);
	p1.setY(-7);
	p1.setR(4);
	p1.setG(3);
	p1.setB(2);
	p1.setA(1);
	assert(p2.getX()==7);
	assert(p2.getY()==-7);
	assert(p2.getR()==4);
	assert(p2.getG()==3);
	assert(p2.getB()==2);
	assert(p2.getA()==1);
	
	cout<<"Tests complete!"<<endl;
}