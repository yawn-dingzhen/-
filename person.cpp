#include "person.h"
#include "masage.h"
bookmanager bookmanager1;
bookmanager bookmanager2;
personmanager personmanagr1;
manager manager2;
student student1;
book b;
book b2;


person::person()//���캯��
{

}
void studentmanage::studentcase()
{
    system("cls");
    cout << "-------------------------" << endl;
    cout << "--------1.��¼-----------" << endl;
    cout << "--------2.ע��-----------" << endl;
    cout << "--------3.�޸�����-------" << endl;
    cout << "-------------------------" << endl;
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


void studentmanage::zhuce()
{
    system("cls");
    string id;//ѧ��ע���˺�
    string key1;//ѧ��ע����������һ
    string key2;//ѧ��ע�����������
    string name1;
    string xuehao1;
    cout << "���ȵ�¼���ĸ�����Ϣ" << endl;
    cout << "--------------------" << endl;
    cout << "--------------------" << endl;
    cout << "--------------------" << endl;
    cout << "--------------------" << endl;
    cout << "��������������" << endl;
    cin >> name1;
    if (name1.size()<1 && name1.size()>9)
    {
        cout << "��������ȷ������ʽ" << endl;
        return;
    }
    cout << "���������ʮһλѧ��" << endl;
    cin >> xuehao1;
    if (xuehao1.size() != 11)
    {
        cout << "�����ѧ�Ÿ�ʽ����" << endl;
        return;
    }
    cout << "��������ע���ʮλ���˺�" << endl;
    cin >> id;
    if (id.size() != 10)
    {
        cout << "������˺Ÿ�ʽ����" << endl;
        return;
    }
    cout << "��������ע�������" << endl;
    cin >> key1;
    if (key1.size()<6)
    {
        cout << "����������ʽ����" << endl;
        return;
    }
    cout << "�ٴ�ȷ����ע�������" << endl;
    cin >> key2;
    if (key1 != key2)
    {
        cout << "�������벻һ���޷�ע��" << endl;
        return;
    }
    else
    {
        student1.zhanghao = id;
        student1.xuehao = xuehao1;
        student1.password = key1;
        personmanagr1.studentsmasage.insert(make_pair(name1, student1));
    }
}


void studentmanage::denglu()
{
    system("cls");
    string zhanghao, mima,name;
    //�����˺�
    cout << "�������������" << endl;
    cin >> name;
    map<string, student>::iterator asd = personmanagr1.studentsmasage.find(name);
    //��������
    cout << "��������˺�" << endl;
    cin >> zhanghao;
    cout << "�����������" << endl;
    cin >> mima;
    if (asd != personmanagr1.studentsmasage.end() && mima == asd->second.password&&zhanghao==asd->second.zhanghao)
    {
        system("cls");
        cout << "---------------------------------------" << endl;
        cout << "--------------1.����-------------------" << endl;
        cout << "--------------2.����-------------------" << endl;
        cout << "--------------3.�鿴����鼮-----------" << endl;
        cout << "--------------4.����鼮---------------" << endl;
        cout << "--------------5.�˳�ѧ��ϵͳ-----------" << endl;
        cout << "---------------------------------------" << endl;
        cout << "ѡ������Ҫ�Ĳ���" << endl;
        int a;
        cin >> a;
        switch (a)
        {
        case 1://����
            student1.bringbook();
            break;
        case 2://����
            student1.backbook();
            break;
        case 3://�鿴�鼮
            student1.slookbook();
            break;
        case 4://����鼮
            student1.newbook();
            break;
        case 5://�˳�ϵͳ;
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
    system("cls");
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
        cout << "---------------------------------------------------" << endl;
        cout << "--------------1.�鿴���ж�����Ϣ-------------------" << endl;
        cout << "--------------2.��ն�����Ϣ-----------------------" << endl;
        cout << "--------------3.�������---------------------------" << endl;
        cout << "--------------4.ɾ���鼮---------------------------" << endl;
        cout << "--------------5.�޸��鼮---------------------------" << endl;
        cout << "--------------6.�鿴���ͼ������-------------------" << endl;
        cout << "--------------7.�˳�����Աϵͳ---------------------" << endl;
        cout << "---------------------------------------------------" << endl;
        //�����Ŷ�Ӧ�˵����ֱ��
        int a;
        cin >> a;
        switch (a)
        {
            system("cls");
        case 1://�鿴ȫ��������Ϣ
            this->lookallreader();
            break;
        case 2://ɾ��������Ϣ
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
        case 7://����
            return;
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
    bookmanager1.allbook.insert(make_pair(bookname, b));
}


void manager::delbook()//����Աɾ���鼮
{
    string name;
    cout << "����������ɾ���鼮������" << endl;
    cin >> name;
    map<string, book>::iterator qwe = bookmanager1.allbook.find(name);
        if (qwe != bookmanager1.allbook.end())
        {
            bookmanager1.allbook.erase(name);
        }
        else
        {
            cout << "û�и��鼮�޷�ɾ��" << endl;
        }
}


void manager::changebook()//����Ա�޸�ͼ������
{
    string changebookname,changebookneirong,type2;
    cout << "�����������޸��鼮������" << endl;
    cin >> changebookname;
    map<string, book>::iterator pos = bookmanager1.allbook.find(changebookname);
    if (pos != bookmanager1.allbook.end())
    {
        cout << "�������޸ĺ������" << endl ;
        cin >> changebookneirong;
        pos->second.b_neirong = changebookneirong;
        cout << "�������޸ĺ������" << endl;
        cin >> type2;
        pos->second.b_type = type2;
        cout << "����:" << pos->first <<"���ͣ�"<<(*pos).second.b_type << "����:" << (*pos).second.b_neirong << endl;
    }
    else
    {
        cout << "û�и��鼮" << endl;
    }

}


void studentmanage::change()//ѧ���޸�����
{
    string zhanghao2, mima2,mima1,name;
    cout << "�������������" << endl;
    cin >> name;
    cout << "����������˺�" << endl;
    cin >> zhanghao2;
    cout << "�������㵱ǰʹ�õ�����" << endl;
    cin >> mima1;
    map<string, student>::iterator it = personmanagr1.studentsmasage.find(name);
    if (it != personmanagr1.studentsmasage.end()&&it->second.password==mima1&&it->second.zhanghao==zhanghao2)
    {
        cout << "����������Ҫ�޸ĵ�����" << endl;
        cin >> mima2;
        it->second.password = mima2;
    }
    else
    {
        cout << "����ѯ���˺���Ϣ��ע���ע�������˺������Ƿ���ȷ" << endl;
    }
 }


void manager::mlookbook()//����鿴�鼮
{
    string bookname;
    cout << "�����������ѯ�鼮������" << endl;
    cin >> bookname;
    map<string, book>::iterator look = bookmanager1.allbook.find(bookname);
    if (look != bookmanager1.allbook.end())
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
    map<string,book>::iterator look = bookmanager1.allbook.find(bookname);
    if (look != bookmanager1.allbook.end())
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


void manager::lookallreader()//�鿴����ѧ��
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


void manager::delreader()//ɾ��ѧ����Ϣ
{
    cout << "��������Ҫɾ��ѧ����Ϣ������" << endl;
    string name;
    cin>>name;
    cout << "������ѧ����ѧ��" << endl;
    string xuehao1;
    cin >> xuehao1;
   map<string, student>::iterator pos = personmanagr1.studentsmasage.find(name);
    if (personmanagr1.studentsmasage.find(name) != personmanagr1.studentsmasage.end()&&pos->second.xuehao==xuehao1)
    {
        personmanagr1.studentsmasage.erase(name);
        cout << "ɾ���ɹ�" << endl;
    }
    else
    {
        cout << "û�и�ѧ���޷�ɾ��" << endl;
    }
}

void student::bringbook()//����
{
    string name;
    cout << "����������Ҫ���������" << endl;
    cin >> name;
    map<string, book>::iterator pos = bookmanager1.allbook.find(name);
    if (pos != bookmanager1.allbook.end())
    {
        cout << "�鼮���ƣ�" << pos->first << " " << "�鼮���ͣ�" << pos->second.b_type << " " << "�鼮���ݣ�" << pos->second.b_neirong << endl;
        //�ѽ��ߵ��鼮�����������
        b2.b_neirong = pos->second.b_neirong;
        b2.b_type = pos->second.b_type;
        bookmanager2.bringallbook.insert(make_pair(name, b2));
        //�����齫��������ɾ��
        bookmanager1.allbook.erase(name);
    }
    else
    {
        cout << "�����û�и�ͼ��" << endl;
    }
}


void student::backbook()//����
{
    string name;
    cout << "��������Ҫ���������" << endl;
    cin >> name;
    map<string, book>::iterator pos = bookmanager2.bringallbook.find(name);
    b.b_neirong = pos->second.b_neirong;
    b.b_type = pos->second.b_type;
    bookmanager1.allbook.insert(make_pair(name, b));
}

