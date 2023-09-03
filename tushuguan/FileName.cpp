#include <iostream>
#include <string>
using namespace std;

class book
{
public:
    string b_name;
    string b_type;
    int b_bianhao;//图书编号
};
class manager
{
public:
    manager();//构造函数用于初始化
    void mainmenu();//菜单
    void guanli();//管理员功能
    void denglu();//登录
    void denglumenu();//登录成功显示菜单
};

void manager::mainmenu()
{
    cout << "---------------------------------" << endl;
    cout << "--------1.读者信息---------------" << endl;
    cout << "--------2.书库信息---------------" << endl;
    cout << "--------3.借书、还书查询---------" << endl;
    cout << "--------4.帮助-------------------" << endl;
    cout << "--------5.系统说明---------------" << endl;
    cout << "--------6登录--------------------" << endl;
    cout << "--------0.退出系统---------------" << endl;
    cout << "---------------------------------" << endl;
}
void manager::denglu()
{


    //登录成功
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
    cout << "--------1.借书-------------------" << endl;
    cout << "--------2.还书-------------------" << endl;
    cout << "--------3.修改密码---------------" << endl;
    cout << "--------4.注销-------------------" << endl;
    cout << "--------5.查找-------------------" << endl;
    cout << "--------6.退出-------------------" << endl;
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
        //下面编号对应菜单数字编号
    case '1':
        break;
    case '2':
        break;
    case '3':
        break;
    case '4':
        cout << "无帮助" << endl;
        break;
    case '5':
        cout << "图书管理系统" << endl;
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
