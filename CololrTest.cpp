#include<iostream>
#include<cassert>
#include "Color.h"
using namespace std;
int main(){
	Color c;
	assert(c.R==0);
	assert(c.G==0);
	assert(c.B==0);
	assert(c.A==0);
	
	c.R=1;
	assert(c.R==1);
	c.G=2;
	assert(c.G==2);
	c.B=3;
	assert(c.B==3);
	c.A=4;
	assert(c.A==4);
	
	Color c1( 4 , 3 , 2 , 1 );
	assert(c1.R==4);
	assert(c1.G==3);
	assert(c1.B==2);
	assert(c1.A==1);
	
	Color c2(c1);
	assert(c2.R==c1.R);
	assert(c2.G==c1.R);
	assert(c2.B==c1.R);
	assert(c2.A==c1.R);
	
	c2.R=1; c2.G=2; c2.B=3; c2.A=4;
	assert(c1.R==4);
	assert(c1.G==3);
	assert(c1.B==2);
	assert(c1.A==1);
	
	cout<<"Tests complete!"<<endl;
}