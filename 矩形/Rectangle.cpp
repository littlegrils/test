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
				cout << "�������" << i + 1 << "�����εĿ�Ⱥ͸߶� ";
				cin >> width >> hight;
				pRectangle[i] = new Rectangle(width, hight);
				pRectangle[i]->display();
			}
			for (i = 0; i < n; i++){
				delete pRectangle[i];
			}
			/*double width, hight;
			Rectangle R1;
			cout << "��һ��ȱʡ�ľ��ζ�����Ϣ:" << endl;
			R1.display();

			cout << "������ζ���Ŀ�Ⱥ͸߶�:(width,hight)" << endl;
			cin >> width >> hight;
			Rectangle R2(width, hight);
			cout << "�ڶ������ζ�����Ϣ:" << endl;
			R2.display();*/
		}
	system("pause");
	return 0;

}