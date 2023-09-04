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
    person()//构造函数用于初始化
    { };
    void denglu();//登录
    void denglumenu();//登录成功显示菜单
    void mainmenu();//菜单
    string account;//管理or用户账号
    string password;//管理or用户密码
};


class student:public person
{
public:
    void zhuce();//学生注册
    void zhuxiao();//学生注销
    void bring();//学生借书
    void back();//学生还书
};


class manager:public person
{
public:
    void allreader();//查看所有读者信息
    void delallreader();//删除所有读者信息
    void newbook();//新书入库
    void delbook();//删除书籍
    void changebook();//修改书籍
    void managermenu();//管理员菜单
    void managerdenglu();//管理员登录操作程序
};

void person::mainmenu()
{
    cout << "---------------------------------" << endl;
    cout << "--------1.登录-------------------" << endl;
    cout << "--------2.帮助-------------------" << endl;
    cout << "--------3.系统说明---------------" << endl;
    cout << "--------4.书库信息---------------" << endl;
    cout << "--------5.退出系统---------------" << endl;
    cout << "--------6.注册-------------------" << endl;
    cout << "--------7.管理员登录-------------" << endl;
    cout << "---------------------------------" << endl;
}

void person::denglumenu()
{
    cout << "---------------------------------" << endl;
    cout << "--------1.借书-------------------" << endl;
    cout << "--------2.还书-------------------" << endl;
    cout << "--------3.修改密码---------------" << endl;
    cout << "--------4.注销-------------------" << endl;
    cout << "--------5.退出-------------------" << endl;
    cout << "---------------------------------" << endl;

}


void manager::managermenu()
{
    cout << "---------------------------------------------------" << endl;
    cout << "--------------1.查看所有读者信息-------------------" << endl;
    cout << "--------------2.清空全部读者信息-------------------" << endl;
    cout << "--------------3.新书入库---------------------------" << endl;
    cout << "--------------4.删除书籍---------------------------" << endl;
    cout << "--------------5.修改书籍---------------------------" << endl;
    cout << "--------------6.退出管理员系统---------------------" << endl;
    cout << "---------------------------------------------------" << endl;
}


void person::denglu()
{
    //登录成功判断函数

    //登录成功
    while (1)
    {
        //下面编号对应菜单数字编号
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
            cout << "无法操作" << endl;
            break;
        }
    }
}


void manager::managerdenglu()
{
    //登录成功判断函数

    //管理员登录成功
    while (1)
    {
        //下面编号对应菜单数字编号
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
            cout << "无法操作" << endl;
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
        //下面编号对应菜单数字编号
    case '1':
        firstpage.denglumenu();
        firstpage.denglu();
        break;
    case '2':
        cout << "无帮助" << endl;
        break;
    case '3':
        cout << "该系统是图书管理系统" << endl;
        break;
    case '4':
        cout << "该书库可以自行添加查找图书" << endl;
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
    default://用户输入其他指令
        cout << "dsfasdfsdakjhfasdhkjfsabhjlfhjg" << endl;
        break;
    }
    return 0;
}
