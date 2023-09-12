#include <iostream>
#include "person.h"
using namespace std;

int main()
{
    person person1;
    student student1;
    manager manager1;
    bool bExit = false;
    person1.mainmenu();
    while (!bExit)
    {
        switch (getchar())
        {
            //下面编号对应菜单数字编号
        case '1':
            student1.studentcase();
            break;
        case '2':
            manager1.managerdenglu();
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
