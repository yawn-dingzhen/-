#include <iostream>
#include "person.h"
using namespace std;


int main()
{
    student firstpage;
    manager mang1;
    student stud1;
    firstpage.mainmenu();
    bool bExit = false;
    while (!bExit)
    {
        switch (getchar())
        {
            //�����Ŷ�Ӧ�˵����ֱ��
        case '1':
            stud1.studentcase();
            break;
        case '2':
            cout << "�ް���" << endl;
            break;
        case '3':
            cout << "��ϵͳ��ͼ�����ϵͳ" << endl;
            break;
        case '4':
            cout << "��������������Ӳ���ͼ��" << endl;
            break;
        case '5':
            bExit = true;
            break;
        case '6':
            mang1.managerdenglu();
            break;
        default://�û���������ָ��
            cout << "dsfasdfsdakjhfasdhkjfsabhjlfhjg" << endl;
            break;
        }
    }
    return 0;
}
