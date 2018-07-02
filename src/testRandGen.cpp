#include<iostream>
#include "randgen.h"

using namespace std;

int main() {
	RandGen rd;
	rd.Seed(123);
	cout<<"\nRandom Ints:";
	for(int i=0; i<10; i++) {
		cout<<"\n"<<rd.RandInt(1,100);
	}
	cout<<"\nRandom Floats:";
        for(int i=0; i<10; i++) {
		cout<<"\n"<<rd.RandFloat();
        }
	return 0;
}
