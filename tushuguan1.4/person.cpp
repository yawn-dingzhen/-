#include "person.h"
#include "book.h"

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
    cout << "--------4.�˳�-------------------" << endl;
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
person::person()//���캯��
{}

void student::denglu()
{
    int zhanghao, mima;
    //�����˺�
    cout << "��������˺�" << endl;
    cin >> zhanghao;
    //��������
    cout << "�����������" << endl;
    cin >> mima;
    m2.insert(pair<int, int>(zhanghao, mima));
        if (m1!=m2)
        {
            cout << "�û��˺��������" << endl;
        }
        else
        {
            this->denglumenu();
            switch (getchar())
            {
            case '1':
                break;
            case '2':
                break;
            case '3':
                this->change();
                break;
            case '4':
                exit(0);
                break;
            default:
                cout << "�޷�����" << endl;
                break;
            }
        }
}


void student::zhuce()
{
    //ע���˺�
    cout << "��������ע����˺�" << endl;
     cin >> id;
    //ע������
     cout << "��������ע�������" << endl;
     cin >> key1;
     cout << "�ٴ�ȷ����ע�������" << endl;
     cin >> key2;
     if (key1 != key2)
     {
         cout << "�������벻һ���޷�ע��" << endl;
         return;
     }
     else
     {
         m1.insert(pair<int, int>(id, key1));
     }
}    


void manager::managerdenglu()
{
    //��¼�ɹ��жϺ���
    int zhanghao1, mima1, win;
    int zhanghao2 = 147258;
    int mima2 = 123456;
    cout << "�������˺�" << endl;
    cin >> zhanghao1;
    cout << "����������" << endl;
    cin >> mima1;
    if (zhanghao1 == zhanghao2 && mima1 == mima2)
    {
        win = 1;
    }
    else
    {
        cout << "����Ա�˺��������" << endl;
        return;
    }
    //����Ա��¼�ɹ�
    while (win == 1)
    {
        this->managermenu();
        //�����Ŷ�Ӧ�˵����ֱ��
        switch (getchar())
        {
        case '1':
            break;
        case '2':
            break;
        case '3'://�������
            this->newbook();
            break;
        case '4'://ɾ���鼮
            this->delbook();
            break;
        case '5'://�޸��鼮
            this->changebook();
            break;
        case '6'://�˳�����Աϵͳ
            exit(0);
            break;
        default:
            cout << "�޷�����" << endl;
            break;
        }
    }
}

void person::newbook()//����Ա����鼮
{
    
    cout << "������ͼ������" << endl;
    cin >> bookname;
    cout << "������ͼ������" << endl;
    cin >> neirong;
    book.insert(make_pair(bookname, neirong));
}


void manager::delbook()//����Աɾ���鼮
{
    string name;
    cout << "����������ɾ���鼮������" << endl;
    cin >> name;
    map<string, string>::iterator qwe = book.find(name);
        if (qwe != book.end())
        {
            book.erase(name);
        }
        else
        {
            cout << "û�и��鼮�޷�ɾ��" << endl;
        }
}


void manager::changebook()//����Ա�޸�ͼ������
{
    string changebookname,changebookneirong;
    cout << "�����������޸��鼮������" << endl;
    cin >> changebookname;
    map<string, string>::iterator pos = book.find(changebookname);
    if (pos != book.end())
    {
        cout << "�������޸ĺ������" << endl;
        cin >> changebookneirong;
        book.insert(make_pair(changebookname, changebookneirong));
    }
    else
    {
        cout << "û�и��鼮" << endl;
    }

}


void student::change()//ѧ���޸�����
{
    int zhanghao, mima;
    cout << "����������˺�" << endl;
    cin >> zhanghao;
    map<int, int>::iterator it = m1.find(zhanghao);
    if (it != m1.end())
    {
        cout << "����������Ҫ�޸ĵ�����" << endl;
        cin >> mima;
        m1.insert(make_pair(zhanghao, mima));
    }
    else
    {
        cout << "����ѯ���˺���Ϣ��ע���ע�������˺��Ƿ���ȷ" << endl;
    }
 }

