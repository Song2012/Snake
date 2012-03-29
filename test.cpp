#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)     //将光标移动到x,y坐标处,不清屏，直接打印就不会闪屏
{
        HANDLE hOutput;  //定义一个句柄
        COORD loc;  //定义一个结构体，包含坐标X, Y
        loc.X = x;
        loc.Y = y;
        hOutput = GetStdHandle(STD_OUTPUT_HANDLE);  //得到标准输出设备的句柄
        SetConsoleCursorPosition(hOutput, loc);  //设置控制台的光标坐标为loc
}

int main(void) {
	gotoxy(2,2);
	cout<<"a"<<endl;
}
