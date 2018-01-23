#include "util.h"
using namespace std;
void print_line(ushort*pLine, int len){
	cout<<"-------------------"<<endl;
	for(int i=0;i<len;i++){
		cout<<*(pLine+i)<<" ";
	}
	cout<<endl<<endl;
}

void exchange(ushort* line, int* pGap, int to)
{
	ushort tmp = *(line + (*pGap));
	*(line + (*pGap)) = *(line + to);
	*(line + to) = tmp;
	*pGap = to;
}

int find_pos(ushort* line, int len, ushort key)
{
	int ret = -1;
	for(int i=0;i<len;i++){
		if (key == *(line+i)){
			ret = i;
			break;
		}
	}
	return ret;
}
