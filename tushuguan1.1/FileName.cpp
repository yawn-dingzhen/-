#include <iostream>
#include <string>
using namespace std;

class book
{
public:
    string b_name;
    string b_type;
    int b_bianhao;
};


class person
{
public:
    person()//���캯�����ڳ�ʼ��
    { };
    void denglu();//��¼
    void denglumenu();//��¼�ɹ���ʾ�˵�
    void mainmenu();//�˵�
    string account;//����or�û��˺�
    string password;//����or�û�����
};


class student:public person
{
public:
    void zhuce();//ѧ��ע��
    void zhuxiao();//ѧ��ע��
    void bring();//ѧ������
    void back();//ѧ������
};


class manager:public person
{
public:
    void allreader();//�鿴���ж�����Ϣ
    void delallreader();//ɾ�����ж�����Ϣ
    void newbook();//�������
    void delbook();//ɾ���鼮
    void changebook();//�޸��鼮
    void managermenu();//����Ա�˵�
    void managerdenglu();//����Ա��¼��������
};

void person::mainmenu()
{
    cout << "---------------------------------" << endl;
    cout << "--------1.��¼-------------------" << endl;
    cout << "--------2.����-------------------" << endl;
    cout << "--------3.ϵͳ˵��---------------" << endl;
    cout << "--------4.�����Ϣ---------------" << endl;
    cout << "--------5.�˳�ϵͳ---------------" << endl;
    cout << "--------6.ע��-------------------" << endl;
    cout << "--------7.����Ա��¼-------------" << endl;
    cout << "---------------------------------" << endl;
}

void person::denglumenu()
{
    cout << "---------------------------------" << endl;
    cout << "--------1.����-------------------" << endl;
    cout << "--------2.����-------------------" << endl;
    cout << "--------3.�޸�����---------------" << endl;
    cout << "--------4.ע��-------------------" << endl;
    cout << "--------5.�˳�-------------------" << endl;
    cout << "---------------------------------" << endl;

}


void manager::managermenu()
{
    cout << "---------------------------------------------------" << endl;
    cout << "--------------1.�鿴���ж�����Ϣ-------------------" << endl;
    cout << "--------------2.���ȫ��������Ϣ-------------------" << endl;
    cout << "--------------3.�������---------------------------" << endl;
    cout << "--------------4.ɾ���鼮---------------------------" << endl;
    cout << "--------------5.�޸��鼮---------------------------" << endl;
    cout << "--------------6.�˳�����Աϵͳ---------------------" << endl;
    cout << "---------------------------------------------------" << endl;
}


void person::denglu()
{
    //��¼�ɹ��жϺ���

    //��¼�ɹ�
    while (1)
    {
        //�����Ŷ�Ӧ�˵����ֱ��
        switch (getchar())
        {
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        case '5':
            exit(0);
            break;
        default:
            cout << "�޷�����" << endl;
            break;
        }
    }
}


void manager::managerdenglu()
{
    //��¼�ɹ��жϺ���

    //����Ա��¼�ɹ�
    while (1)
    {
        //�����Ŷ�Ӧ�˵����ֱ��
        switch (getchar())
        {
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        case '5':
            break;
        case '6':
            exit(0);
            break;
        default:
            cout << "�޷�����" << endl;
            break;
        }
    }
}


int main()
{
    person firstpage;
    manager mang1;
    firstpage.mainmenu();
    switch (getchar())
    {
        //�����Ŷ�Ӧ�˵����ֱ��
    case '1':
        firstpage.denglumenu();
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
        break;
    case '7':
        mang1.managermenu();
        mang1.managerdenglu();
        break;
    default://�û���������ָ��
        cout << "dsfasdfsdakjhfasdhkjfsabhjlfhjg" << endl;
        break;
    }
    return 0;
}
