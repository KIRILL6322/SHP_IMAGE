#include"Point.h"
#include"Color.h"
class Pixel{
private:
	Color c;
	Point p;
public:
	Pixel():c(),p(){}
	Pixel(Color c, Point p):c(c),p(p){}
	Pixel(const Pixel& pix):c(pix.c),p(pix.p){}
	Color getColor(){return c;}
	int getX(){return p.x;}
	int getY(){return p.y;}
	int getR(){return c.R;}
	int getG(){return c.G;}
	int getB(){return c.B;}
	int getA(){return c.A;}
	void setX(int x){p.x=x;}
	void setY(int y){p.y=y;}
	void setR(int R){c.R=R;}
	void setG(int G){c.G=G;}
	void setB(int B){c.B=B;}
	void setA(int A){c.A=A;}
	void setColor(Color c){this->c=c;}
	void setPos(int x,int y){p.x=x; p.y=y;}
};