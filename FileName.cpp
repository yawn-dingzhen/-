#include <iostream>
#include "person.h"
using namespace std;

int main()
{
   
    bool bExit = false;
    while (!bExit)
    {
        cout << "---------------------------------" << endl;
        cout << "-----��ӭʹ��ͼ�����ϵͳ-------" << endl;
        cout << "---------------------------------" << endl;
        cout << "---------------------------------" << endl;
        cout << "*******��ѡ������Ҫ�Ĳ���********" << endl;
        cout << "---------------------------------" << endl;
        cout << "---------------------------------" << endl;
        cout << "-----1.ѧ������------------------" << endl;
        cout << "-----2.����Ա����----------------" << endl;
        cout << "-----3.�˳�����ϵͳ--------------" << endl;
        cout << "---------------------------------" << endl;
        studentmanage* a =new studentmanage();
        manager* b = new manager();
        switch (getchar())
        {
            //�����Ŷ�Ӧ�˵����ֱ��
        case '1':           
           a->studentcase();
            break;
        case '2':
            b->managerdenglu();
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
