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
            //�����Ŷ�Ӧ�˵����ֱ��
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
        default://�û���������ָ��
            break;
        }
    }
    return 0;
}
