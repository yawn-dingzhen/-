#include <iostream>
#include <string>
using namespace std;

class book
{
public:
    string b_name;
    string b_type;
    int b_bianhao;//ͼ����
};
class manager
{
public:
    manager();//���캯�����ڳ�ʼ��
    void mainmenu();//�˵�
    void guanli();//����Ա����
    void denglu();//��¼
    void denglumenu();//��¼�ɹ���ʾ�˵�
};

void manager::mainmenu()
{
    cout << "---------------------------------" << endl;
    cout << "--------1.������Ϣ---------------" << endl;
    cout << "--------2.�����Ϣ---------------" << endl;
    cout << "--------3.���顢�����ѯ---------" << endl;
    cout << "--------4.����-------------------" << endl;
    cout << "--------5.ϵͳ˵��---------------" << endl;
    cout << "--------6��¼--------------------" << endl;
    cout << "--------0.�˳�ϵͳ---------------" << endl;
    cout << "---------------------------------" << endl;
}
void manager::denglu()
{


    //��¼�ɹ�
    this->denglumenu();

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
        break;
    default:
        break;
    }
}

void manager::denglumenu()
{
    cout << "---------------------------------" << endl;
    cout << "--------1.����-------------------" << endl;
    cout << "--------2.����-------------------" << endl;
    cout << "--------3.�޸�����---------------" << endl;
    cout << "--------4.ע��-------------------" << endl;
    cout << "--------5.����-------------------" << endl;
    cout << "--------6.�˳�-------------------" << endl;
    cout << "---------------------------------" << endl;

}





int main()
{
    manager firstpage;
    firstpage.mainmenu();
    int a;
    cin >> a;
    switch (a)
    {
        //�����Ŷ�Ӧ�˵����ֱ��
    case '1':
        break;
    case '2':
        break;
    case '3':
        break;
    case '4':
        cout << "�ް���" << endl;
        break;
    case '5':
        cout << "ͼ�����ϵͳ" << endl;
        break;
    case '6':
        firstpage.denglu();
        break;
    case '0':
        break;
    default:
        break;
    }

    return 0;
}
