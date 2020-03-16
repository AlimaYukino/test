#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#include<math.h>

int Num[6] = { 0,0,0,0,0,0 };    //含有6元素一维整型数组
int num_size;       //全局变量
num_size = sizeof(Num)/4;   //读取数组的“长度”

void _go()       //定义函数，用于输入进位
{
    int i;
    for (i=0;i<(num_size-1);i++)
    {
        Num[i] = Num[i + 1];
    }
}

void _back()  //定义函数，用于退位
{
    int i;
    for (i=num_size;i>0;i--)
    {
        Num[i] = Num[i - 1];
    }
    Num[0] = 0;
}
void _cls()     //定义清屏函数
{
    system("cls");
}

void _print()       //定义打印函数
{
    int i;
    for (i = 0; i < num_size; i++)
    {
        printf("%d",Num[i]);
    }
}

void pas()
{
    system("pause");
}

void main()      //主函数
{
    int key, time, _count;
    int pass = num_size - 1;
    int i = 0;
    int shu = 0;
        while (1)
        {
        back:       //临时变量
            _cls();
            _print();
            key = _getch();     //获取键盘事件
            if (key != 0 && key != 224)     //过滤因未知原因导致功能键事件会附带0和224的多余值
            {
                switch (key)
                {
                case 48: { _go();Num[pass] = 0; }break;     //这里的48对应键盘0键，以此类推
                case 49: { _go();Num[pass] = 1; }break;
                case 50: { _go();Num[pass] = 2; }break;
                case 51: { _go();Num[pass] = 3; }break;
                case 52: { _go();Num[pass] = 4; }break;
                case 53: { _go();Num[pass] = 5; }break;
                case 54: { _go();Num[pass] = 6; }break;
                case 55: { _go();Num[pass] = 7; }break;
                case 56: { _go();Num[pass] = 8; }break;
                case 57: { _go();Num[pass] = 9; }break;
                case 8: {_back(); }break;       //退格
                case 13:goto end; break;        //回车
                default:goto back; break;
                    break;
                }
            }
        }
    end:        //临时变量
    printf("\n");

    while (i<num_size)
    {
        shu = shu + Num[i]*pow(10,((double)num_size-1-(double)i));
        i++;
    }

    for (_count = shu; _count >= 0; _count--)
    {
        _cls();
        printf("%06d",_count);
        Sleep(1000);        //程序暂停1秒
    }

    printf("\n");
    system("pause");        //暂停程序
}