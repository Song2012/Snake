#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)     //������ƶ���x,y���괦,��������ֱ�Ӵ�ӡ�Ͳ�������
{
        HANDLE hOutput;  //����һ�����
        COORD loc;  //����һ���ṹ�壬��������X, Y
        loc.X = x;
        loc.Y = y;
        hOutput = GetStdHandle(STD_OUTPUT_HANDLE);  //�õ���׼����豸�ľ��
        SetConsoleCursorPosition(hOutput, loc);  //���ÿ���̨�Ĺ������Ϊloc
}

int main(void) {
	gotoxy(2,2);
	cout<<"a"<<endl;
}
