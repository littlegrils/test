#include<iostream>
#include"Rectangle.h"
using namespace std;
int main(){
		{
			const int n = 3;
			Rectangle* pRectangle[n];
			double width, hight;
			int i;
			for (i = 0; i < n; i++){
				cout << "请输入第" << i + 1 << "个矩形的宽度和高度 ";
				cin >> width >> hight;
				pRectangle[i] = new Rectangle(width, hight);
				pRectangle[i]->display();
			}
			for (i = 0; i < n; i++){
				delete pRectangle[i];
			}
			/*double width, hight;
			Rectangle R1;
			cout << "第一个缺省的矩形对象信息:" << endl;
			R1.display();

			cout << "输入矩形对象的宽度和高度:(width,hight)" << endl;
			cin >> width >> hight;
			Rectangle R2(width, hight);
			cout << "第二个矩形对象信息:" << endl;
			R2.display();*/
		}
	system("pause");
	return 0;

}