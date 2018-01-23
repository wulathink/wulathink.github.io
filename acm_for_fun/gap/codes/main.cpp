#include<iostream>
#include<random>
#include "util.h"
using namespace std;



int main(){
	const int MAX = 7;
	const int LEN = 8;
	int gap = 0;
	ushort line[LEN];
	line[0] = 0;
	cout<<"input 7 numbers randomly"<<endl;
	for(int i= 1; i < LEN; i++){
		cin>>line[i];
	}
	cout<<"begin exchange"<<endl;

	int p = find_pos(line, LEN, 1);
	exchange(line, &gap, p);
	print_line(line, LEN);


	for(int i=0;i<10;i++){
		int befroreGap = *(line + gap -1);
		if (MAX == befroreGap) break;

		int p = find_pos(line, LEN, befroreGap+1);
		exchange(line, &gap, p);
		print_line(line, LEN);
	}
	return 0;
}