#include <iostream>
#include "person.h"
using namespace std;


int main()
{
    person firstpage;
    manager mang1;
    student stud1;
    firstpage.mainmenu();
    switch (getchar())
    {
        //下面编号对应菜单数字编号
    case '1':
        firstpage.denglu();
        break;
    case '2':
        cout << "无帮助" << endl;
        break;
    case '3':
        cout << "该系统是图书管理系统" << endl;
        break;
    case '4':
        cout << "该书库可以自行添加查找图书" << endl;
        break;
    case '5':
        exit(0);
        break;
    case '6':
        stud1.zhuce();
        break;
    case '7':
        mang1.managerdenglu();
        break;
    default://用户输入其他指令
        cout << "dsfasdfsdakjhfasdhkjfsabhjlfhjg" << endl;
        break;
    }
    return 0;
}
