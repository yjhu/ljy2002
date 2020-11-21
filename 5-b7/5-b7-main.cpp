/* 2053862 刘竞元 信18班*/
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include "5-b7.h"
using namespace std;


int A1[10] = { };
int B1[10] = { };
int C1[10] = { };
int i = 1;
int top1, top2, top3;
int move_speed()
{
    int speed;
    cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)" << endl;
    cin >> speed;
    while (cin.fail())
    {


        cin.clear();
        cin.ignore(1024, '\n');
        cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)" << endl;
        cin >> speed;


    }
    while (speed > 5 || speed < 0)
    {
        cin.clear();
        cin.ignore(1024, '\n');
        cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)" << endl;
        cin >> speed;
        while (cin.fail())
        {


            cin.clear();
            cin.ignore(1024, '\n');
            cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)" << endl;
            cin >> speed;


        }


    }
    cin.clear();
    cin.ignore(1024, '\n');

    return speed;

}

int move_whether()
{
    int whether;
    cout << "请输入是否显示内部数组值(0-不显示 1-显示)" << endl;
    cin >> whether;
    while (cin.fail())
    {


        cin.clear();
        cin.ignore(1024, '\n');
        cout << "请输入是否显示内部数组值(0-不显示 1-显示)" << endl;
        cin >> whether;


    }
    while (whether > 1 || whether < 0)
    {
        cin.clear();
        cin.ignore(1024, '\n');
        cout << "请输入是否显示内部数组值(0-不显示 1-显示)" << endl;
        cin >> whether;
        while (cin.fail())
        {


            cin.clear();
            cin.ignore(1024, '\n');
            cout << "请输入是否显示内部数组值(0-不显示 1-显示)" << endl;
            cin >> whether;


        }


    }
    cin.clear();
    cin.ignore(1024, '\n');

    return whether;

}
void shuchu(int speed)
{

    cct_gotoxy(21, 17);
    cout << "A: ";
    for (top1 = 0; top1 <= 9; top1++)
    {

        if (A1[top1] > 0)
            cout << A1[top1] << ' ';
        else
            break;
    }
    cout << setfill(' ') << setw(23 - 2 * top1);
    cout << "B: ";
    for (top2 = 0; top2 <= 9; top2++)
    {

        if (B1[top2] > 0)
            cout << B1[top2] << ' ';
        else
            break;
    }
    cout << setfill(' ') << setw(23 - 2 * top2);
    cout << "C: ";
    for (top3 = 0; top3 <= 9; top3++)
    {

        if (C1[top3] > 0)
            cout << C1[top3] << ' ';
        else
            break;
    }

    cout << endl;
    if (speed == 0)
        getchar();
    for (top1 = 0; top1 <= 9; top1++)
    {

        if (A1[top1] > 0)
        {
            cct_gotoxy(10, 11 - top1);

            cout << setw(2) << A1[top1];
        }
        else
        {

            cct_gotoxy(10, 10 - top1);
            putchar(' ');
            break;
        }
    }
    for (top2 = 0; top2 <= 9; top2++)
    {

        if (B1[top2] > 0)
        {
            cct_gotoxy(20, 11 - top2);

            cout << setw(2) << B1[top2];
        }
        else
        {

            cct_gotoxy(20, 11 - top2);
            putchar(' ');
            break;
        }
    }

    for (top3 = 0; top3 <= 9; top3++)
    {

        if (C1[top3] > 0)
        {
            cct_gotoxy(30, 11 - top3);

            cout << setw(2) << C1[top3];
        }
        else
        {

            cct_gotoxy(30, 11 - top3);
            putchar(' ');
            break;
        }
    }



}


void zhuanhua(char src, char dst)
{
    if (src == 'A' && dst == 'B')
    {
        B1[top2++] = A1[top1 - 1];
        A1[--top1] = 0;
        cct_gotoxy(11, 11 - top1);
        putchar(' ');
        
    }
    else if (src == 'A' && dst == 'C')
    {
        C1[top3++] = A1[top1 - 1];
        A1[--top1] = 0;
        cct_gotoxy(11, 11 - top1);
        putchar(' ');
      
    }
    else if (src == 'C' && dst == 'A')
    {
        A1[top1++] = C1[top3 - 1];
        C1[--top3] = 0;
        cct_gotoxy(31, 11 - top1);
        putchar(' ');
      
    }
    else if (src == 'B' && dst == 'A')
    {
        A1[top1++] = B1[top2 - 1];
        B1[--top2] = 0;
        cct_gotoxy(21, 11 - top1);
        putchar(' ');
       
    }
    else if (src == 'B' && dst == 'C')
    {
        C1[top3++] = B1[top2 - 1];
        B1[--top2] = 0;
        cct_gotoxy(21, 11 - top1);
        putchar(' ');
        
    }

    else
    {
        B1[top2++] = C1[top3 - 1];
        C1[--top3] = 0;
        cct_gotoxy(31, 11 - top1);
        putchar(' ');
       
    }

}
int shurucengshu()
{
    int ceng;
    cout << "请输入汉诺塔的层数(1-10):" << endl;
    cin >> ceng;
    while (cin.fail())
    {


        cin.clear();
        cin.ignore(1024, '\n');
        cout << "请输入汉诺塔的层数(1-10):" << endl;
        cin >> ceng;


    }
    while (ceng > 16 || ceng < 1)
    {
        cin.clear();
        cin.ignore(1024, '\n');
        cout << "请输入汉诺塔的层数(1-10):" << endl;
        cin >> ceng;
        while (cin.fail())
        {


            cin.clear();
            cin.ignore(1024, '\n');
            cout << "请输入汉诺塔的层数(1-10):" << endl;
            cin >> ceng;


        }


    }
    cin.clear();
    cin.ignore(1024, '\n');

    return ceng;

}
char zhu1()
{
    char qi;
    cout << "请输入起始柱(A-C):" << endl;
    cin >> qi;
    while (qi != 'a' && qi != 'b' && qi != 'c' && qi != 'A' && qi != 'B' && qi != 'C')
    {
        cin.clear();
        cin.ignore(1024, '\n');
        cout << "请输入起始柱(A-C)：" << endl;
        cin >> qi;
    }
    cin.clear();
    cin.ignore(1024, '\n');



    return qi;

}

char zhu2(char qi)
{
    char mu;
    cout << "请输入目标柱(A-C):" << endl;
    cin >> mu;
    while (1)
    {
        while (mu != 'a' && mu != 'b' && mu != 'c' && mu != 'A' && mu != 'B' && mu != 'C')
        {
            cin.clear();
            cin.ignore(1024, '\n');
            cout << "请输入目标柱(A-C):" << endl;
            cin >> mu;
        }
        if ((qi == 'a' || qi == 'A') && (mu == 'a' || mu == 'A'))
        {
            cin.clear();
            cin.ignore(1024, '\n');
            cout << "目标柱(A)不能与起始柱(A)相同" << endl;
            cin >> mu;
        }
        if ((qi == 'b' || qi == 'B') && (mu == 'b' || mu == 'B'))
        {
            cin.clear();
            cin.ignore(1024, '\n');
            cout << "目标柱(B)不能与起始柱(B)相同" << endl;
            cin >> mu;
        }
        if ((qi == 'c' || qi == 'C') && (mu == 'c' || mu == 'C'))
        {
            cin.clear();
            cin.ignore(1024, '\n');
            cout << "目标柱(C)不能与起始柱(C)相同" << endl;
            cin >> mu;
        }
        if ((qi == 'a' || qi == 'A') && (mu == 'b' || mu == 'B' || mu == 'C' || mu == 'c'))
            break;
        if ((qi == 'b' || qi == 'B') && (mu == 'a' || mu == 'A' || mu == 'C' || mu == 'c'))
            break;
        if ((qi == 'c' || qi == 'C') && (mu == 'b' || mu == 'B' || mu == 'a' || mu == 'A'))
            break;
    }

    cin.clear();
    cin.ignore(1024, '\n');

    return mu;
}

/***************************************************************************
  函数名称：
  功    能：打印n层汉诺塔的移动顺序
  输入参数：int n：层数
            char src：起始柱
            char tmp：中间柱
            char dst：目标柱
  返 回 值：
  说    明：1、函数名、形参、返回类型均不准动
            2、本函数不允许出现任何形式的循环
***************************************************************************/
void hanoi(int n, char src, char tmp, char dst,int speed)
{
    if ((src == 'a' || src == 'A') && (dst == 'b' || dst == 'B'))
        tmp = 'c';
    if ((src == 'a' || src == 'A') && (dst == 'c' || dst == 'C'))
        tmp = 'b';
    if ((src == 'b' || src == 'B') && (dst == 'a' || dst == 'A'))
        tmp = 'c';
    if ((src == 'b' || src == 'B') && (dst == 'c' || dst == 'C'))
        tmp = 'a';
    if ((src == 'c' || src == 'C') && (dst == 'a' || dst == 'A'))
        tmp = 'b';
    if ((src == 'c' || src == 'C') && (dst == 'b' || dst == 'B'))
        tmp = 'a';

    if (src == 'a')
        src = 'A';
    if (src == 'b')
        src = 'B';
    if (src == 'c')
        src = 'C';
    if (tmp == 'a')
        tmp = 'A';
    if (tmp == 'b')
        tmp = 'B';
    if (tmp == 'c')
        tmp = 'C';
    if (dst == 'a')
        dst = 'A';
    if (dst == 'b')
        dst = 'B';
    if (dst == 'c')
        dst = 'C';







    if (n == 0)
    {
        cout << "初始:                ";
       
        shuchu(speed);


    }
    else if (n == 1)
    {
         
        Sleep(10000 - 1000 * speed);
      
        cct_gotoxy(0, 17);
        cout << "第" << setw(4) << i << "步" << '(' << setw(2) << 1 << "#: " << src << "-->" << dst << ") ";
        
        zhuanhua(src, dst);
        shuchu(speed);
        i++;
    }
    else
    {
        
        hanoi(n - 1, src, tmp, tmp,speed);
        
        Sleep(10000 - 1000 * speed);
        
        cct_gotoxy(0, 17);
        cout << "第" << setw(4) << i << "步" << '(' << setw(2) << n << "#: " << src << "-->" << dst << ") ";
       
        zhuanhua(src, dst);
        shuchu(speed);
        i++;
        hanoi(n - 1, tmp, tmp, dst,speed);

    }







}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：完成输入(或调用输入函数)、调用递归函数
***************************************************************************/
int main()
{

    int n;
    char src;
    char dst;
    char tmp;
    int yy;
    n = shurucengshu();
    src = zhu1();
    dst = zhu2(src);
    yy = n;
    int whether = move_whether();
    int speed = move_speed();
    if ((src == 'a' || src == 'A') && (dst == 'b' || dst == 'B'))
        tmp = 'c';
    if ((src == 'a' || src == 'A') && (dst == 'c' || dst == 'C'))
        tmp = 'b';
    if ((src == 'b' || src == 'B') && (dst == 'a' || dst == 'A'))
        tmp = 'c';
    if ((src == 'b' || src == 'B') && (dst == 'c' || dst == 'C'))
        tmp = 'a';
    if ((src == 'c' || src == 'C') && (dst == 'a' || dst == 'A'))
        tmp = 'b';
    if ((src == 'c' || src == 'C') && (dst == 'b' || dst == 'B'))
        tmp = 'a';
    if (src == 'A' || src == 'a')
    {
        for (top1 = 0; top1 <= n - 1;)
        {
            A1[top1++] = yy--;
        }
    }
    if (src == 'B' || src == 'b')
    {
        for (top2 = 0; top2 <= n - 1;)
        {
            B1[top2++] = yy--;
        }
    }
    if (src == 'C' || src == 'c')
    {
        for (top3 = 0; top3 <= n - 1;)
        {
            C1[top3++] = yy--;
        }
    }
    cct_cls();
    cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层，延时设置为 " << speed << "，";
    if (whether == 0)//0 - 不显示 1 - 显示
        cout << "显示内部数组值";
    else
        cout << "不显示内部数组值";

    if (speed != 0)
    {
        cct_gotoxy(0, 12);
        cout << "         =========================" << endl;
        cout << "           A         B         C" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
    
    hanoi(0, src, tmp, dst, speed);
    hanoi(n, src, tmp, dst, speed);









    return 0;

}
