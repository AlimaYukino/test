#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#include<math.h>

int Num[6] = { 0,0,0,0,0,0 };    //����6Ԫ��һά��������
int num_size;       //ȫ�ֱ���
num_size = sizeof(Num)/4;   //��ȡ����ġ����ȡ�

void _go()       //���庯�������������λ
{
    int i;
    for (i=0;i<(num_size-1);i++)
    {
        Num[i] = Num[i + 1];
    }
}

void _back()  //���庯����������λ
{
    int i;
    for (i=num_size;i>0;i--)
    {
        Num[i] = Num[i - 1];
    }
    Num[0] = 0;
}
void _cls()     //������������
{
    system("cls");
}

void _print()       //�����ӡ����
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

void main()      //������
{
    int key, time, _count;
    int pass = num_size - 1;
    int i = 0;
    int shu = 0;
        while (1)
        {
        back:       //��ʱ����
            _cls();
            _print();
            key = _getch();     //��ȡ�����¼�
            if (key != 0 && key != 224)     //������δ֪ԭ���¹��ܼ��¼��ḽ��0��224�Ķ���ֵ
            {
                switch (key)
                {
                case 48: { _go();Num[pass] = 0; }break;     //�����48��Ӧ����0�����Դ�����
                case 49: { _go();Num[pass] = 1; }break;
                case 50: { _go();Num[pass] = 2; }break;
                case 51: { _go();Num[pass] = 3; }break;
                case 52: { _go();Num[pass] = 4; }break;
                case 53: { _go();Num[pass] = 5; }break;
                case 54: { _go();Num[pass] = 6; }break;
                case 55: { _go();Num[pass] = 7; }break;
                case 56: { _go();Num[pass] = 8; }break;
                case 57: { _go();Num[pass] = 9; }break;
                case 8: {_back(); }break;       //�˸�
                case 13:goto end; break;        //�س�
                default:goto back; break;
                    break;
                }
            }
        }
    end:        //��ʱ����
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
        Sleep(1000);        //������ͣ1��
    }

    printf("\n");
    system("pause");        //��ͣ����
}