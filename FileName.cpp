#include <iostream>
#include "person.h"
using namespace std;

int main()
{

    bool bExit = false;
    while (!bExit)
    {
        cout << "---------------------------------" << endl;
        cout << "-----欢迎使用图书管理系统-------" << endl;
        cout << "---------------------------------" << endl;
        cout << "---------------------------------" << endl;
        cout << "*******请选择你需要的操作********" << endl;
        cout << "---------------------------------" << endl;
        cout << "---------------------------------" << endl;
        cout << "-----1.学生操作------------------" << endl;
        cout << "-----2.管理员操作----------------" << endl;
        cout << "-----3.退出管理系统--------------" << endl;
        cout << "---------------------------------" << endl;
        student operate1;
        manager operate2;
        switch (getchar())
        {
            //下面编号对应菜单数字编号
        case '1':
            operate1.studentcase();
            break;
        case '2':
            operate2.managerdenglu();
            break;
        case '3':
            exit(0);
            break;
        case '4':
            bExit = true;
            break;
        default://用户输入其他指令
            break;
        }
    }
    return 0;
}
