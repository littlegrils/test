#include<iostream>
#include"RoundRectangle.h"
using namespace std;
int main(){
		{
			RoundRectangle R1;
			R1.print();
			cout << endl;

			RoundRectangle R2("bule", 3, 4, 5);
			R2.print();

		}
	system("pause");
	return 0;
}