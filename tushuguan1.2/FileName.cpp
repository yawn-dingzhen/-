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
        //�����Ŷ�Ӧ�˵����ֱ��
    case '1':
        firstpage.denglu();
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
        exit(0);
        break;
    case '6':
        stud1.zhuce();
        break;
    case '7':
        mang1.managerdenglu();
        break;
    default://�û���������ָ��
        cout << "dsfasdfsdakjhfasdhkjfsabhjlfhjg" << endl;
        break;
    }
    return 0;
}
