#include "person.h"
#include "masage.h"
bookmanager manager1;
personmanager personmanagr1;
manager manager2;
student student1;
book b;


void person::mainmenu()
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
}


void student::studentmenu()
{
    cout << "-------------------------" << endl;
    cout << "--------1.��¼-----------" << endl;
    cout << "--------2.ע��-----------" << endl;
    cout << "--------3.�޸�����-------" << endl;
    cout << "-------------------------" << endl;
}


void manager::managermenu()
{
    cout << "---------------------------------------------------" << endl;
    cout << "--------------1.�鿴���ж�����Ϣ-------------------" << endl;
    cout << "--------------2.��ն�����Ϣ-----------------------" << endl;
    cout << "--------------3.�������---------------------------" << endl;
    cout << "--------------4.ɾ���鼮---------------------------" << endl;
    cout << "--------------5.�޸��鼮---------------------------" << endl;
    cout << "--------------6.�鿴���ͼ������-------------------" << endl;
    cout << "--------------7.�˳�����Աϵͳ---------------------" << endl;
    cout << "---------------------------------------------------" << endl;
}


void student::studentcz()
{
    cout << "---------------------------------------" << endl;
    cout << "--------------1.����-------------------" << endl;
    cout << "--------------2.����-------------------" << endl;
    cout << "--------------3.�鿴����鼮-----------" << endl;
    cout << "--------------4.����鼮---------------" << endl;
    cout << "--------------5.�˳�ȫ��ϵͳ-----------" << endl;
    cout << "---------------------------------------" << endl;
}


person::person()//���캯��
{

}
void student::studentcase()
{
    this->studentmenu();
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        this->denglu();
        break;
    case 2:
        this->zhuce();
        break;
    case 3:
        this->change();
        break;
    default:
        break;
    }


}


void student::zhuce()
{
    string id;//ѧ��ע���˺�
    string key1;//ѧ��ע����������һ
    string key2;//ѧ��ע�����������
    //ע���˺�
    string name1;
    string xuehao1;
    cout << "���ȵ�¼���ĸ�����Ϣ" << endl;
    cout << "��������������" << endl;
    cin >> name1;
    cout << "���������ѧ��" << endl;
    cin >> xuehao1;
    student1.xuehao = xuehao1;
    cout << "��������ע����˺�" << endl;
    cin >> id;
    student1.zhanghao = id;
    //ע������
    cout << "��������ע�������" << endl;
    cin >> key1;
    student1.password = key1;
    cout << "�ٴ�ȷ����ע�������" << endl;
    cin >> key2;
    if (key1 != key2)
    {
        cout << "�������벻һ���޷�ע��" << endl;
        return;
    }
    else
    {
        personmanagr1.studentsmasage.insert(make_pair(name1, student1));
    }
}


void student::denglu()
{
    string zhanghao, mima;
    //�����˺�
    cout << "��������˺�" << endl;
    cin >> zhanghao;
    map<string, student>::iterator asd = personmanagr1.studentsmasage.find(zhanghao);
    //��������
    cout << "�����������" << endl;
    cin >> mima;
    if (asd != personmanagr1.studentsmasage.end() && mima == asd->second.password)
    {
        this->studentcz();
        cout << "ѡ������Ҫ�Ĳ���" << endl;
        int a;
        cin >> a;
        switch (a)
        {
        case 1://����
            break;
        case 2://����
            break;
        case 3://�鿴�鼮
            this->slookbook();
            break;
        case 4://����鼮
            this->newbook();
            break;
        case 5://�˳�ϵͳ
            return;
            break;
        default:
            cout << "�޷�����" << endl;
            break;
        }


    }
    else
    {
        cout << "�˺Ż��������" << endl;
    }
}


void manager::managerdenglu()
{
    //��¼�ɹ��жϺ���
    person lkb;
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
        int a;
        cin >> a;
        switch (a)
        {
        case 1:
            this->lookallreader();
            break;
        case 2:
            this->delreader();
            break;
        case 3://�������
            this->newbook();
            break;
        case 4://ɾ���鼮
            this->delbook();
            break;
        case 5://�޸��鼮
            this->changebook();
            break;
        case 6://��ѯ�鼮
            this->mlookbook();
            break;
        case 7:
            break;
        default:
            cout << "�޷�����" << endl;
            break;
        }
    }
}


void person::newbook()//����鼮
{
    string bookname, neirong, leixing;
    cout << "������ͼ������" << endl;
    cin >> bookname;
    cout << "������ͼ������" << endl;
    cin >> leixing;
    cout << "������ͼ������" << endl;
    cin >> neirong;

    b.b_neirong = neirong;
    b.b_type = leixing;
    manager1.allbook.insert(make_pair(bookname, b));
}


void manager::delbook()//����Աɾ���鼮
{
    string name;
    cout << "����������ɾ���鼮������" << endl;
    cin >> name;
    map<string, book>::iterator qwe = manager1.allbook.find(name);
        if (qwe != manager1.allbook.end())
        {
            manager1.allbook.erase(name);
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
    map<string, book>::iterator pos = manager1.allbook.find(changebookname);
    if (pos != manager1.allbook.end())
    {
        cout << "�������޸ĺ������" << endl ;
        cin >> changebookneirong;
        pos->second.b_neirong = changebookneirong;
        cout << "����:" << (*pos).first <<"����:" << (*pos).second.b_neirong << endl;
    }
    else
    {
        cout << "û�и��鼮" << endl;
    }

}


void student::change()//ѧ���޸�����
{
    string zhanghao2, mima2;
    cout << "����������˺�" << endl;
    cin >> zhanghao2;
    map<string, student>::iterator it = personmanagr1.studentsmasage.find(zhanghao2);
    if (it != personmanagr1.studentsmasage.end())
    {
        cout << "����������Ҫ�޸ĵ�����" << endl;
        cin >> mima2;
        it->second.password = mima2;
    }
    else
    {
        cout << "����ѯ���˺���Ϣ��ע���ע�������˺��Ƿ���ȷ" << endl;
    }
 }


void manager::mlookbook()//����鿴�鼮
{
    string bookname;
    cout << "�����������ѯ�鼮������" << endl;
    cin >> bookname;
    map<string, book>::iterator look = manager1.allbook.find(bookname);
    if (look != manager1.allbook.end())
    {
        cout << "�鼮���ƣ�" << endl;
        cout << look->first << endl;
        cout << "�鼮����" << endl;
        cout << look->second.b_type << endl;
        cout << "�鼮���ݣ�" << endl;
        cout << look->second.b_neirong << endl;
    }
    else
    {
        cout << "û�и��鼮�޷��鿴" << endl;
    }
}


void student::slookbook()//ѧ���鿴�鼮
{
    string bookname;
    cout << "�����������ѯ�鼮������" << endl;
    cin >> bookname;
    map<string,book>::iterator look = manager1.allbook.find(bookname);
    if (look != manager1.allbook.end())
    {
        cout << "�鼮���ƣ�" << endl;
        cout << look->first << endl;
        cout << "�鼮����" << endl;
        cout << look->second.b_type << endl;
        cout << "�鼮���ݣ�" << endl;
        cout << look->second.b_neirong << endl;
    }
    else
    {
        cout << "û�и��鼮�޷��鿴" << endl;
    }
}


void manager::lookallreader()
{
    for (map<string, student>::iterator it = personmanagr1.studentsmasage.begin(); it != personmanagr1.studentsmasage.end(); it++)
    {
        string n = it->first;
        string x = it->second.xuehao;
        string y = it->second.password;
        string z = it->second.zhanghao;
        cout << "ѧ��������Ϊ��" << n << " " << "ѧ����ѧ��Ϊ��" << x << " " << "ѧ�����˺��ǣ�" << z << " " << "ѧ���������ǣ�" << y;
    }
    cout << endl;
}


void manager::delreader()
{
    cout << "��������Ҫɾ��ѧ����Ϣ������" << endl;
    string name;
    cin>>name;
    map<string, student>::iterator pos = personmanagr1.studentsmasage.find(name);
    if (personmanagr1.studentsmasage.find(name) == personmanagr1.studentsmasage.end())
    {
        cout << "û�и�ѧ���޷�ɾ��" << endl;
    }
    else
    {
        personmanagr1.studentsmasage.erase(name);
        cout << "ɾ���ɹ�" << endl;
    }
}