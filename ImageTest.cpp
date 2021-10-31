#include<cassert>
#include "Image.h"
using namespace std;
int main(){
	Image p;
	assert(p.getWidth()==0);
	assert(p.getHeight()==0);
	
	p.width=5;
	assert(p.getWidth()==5);
	p.height=10;
	assert(p.getHeight()==10);
	
	Image p1(7,-7);
	assert(p1.getWidth()==7);
	assert(p1.getHeight()==-7);
	
	Image p2(p1);
	assert(p2.getWidth()==p1.getWidth());
	assert(p2.getHeight()==p1.getHeight());
	p2.width=77; p2.height=12;
	assert(p1.getWidth()==7);
	assert(p1.getHeight()==-7);
	
	cout<<"Tests complete!"<<endl;
}