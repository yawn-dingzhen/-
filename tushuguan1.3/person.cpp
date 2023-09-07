#include "person.h"
#include "book.h"

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
    cout << "--------4.退出-------------------" << endl;
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
person::person()
{}

void person::denglu()
{
    int zhanghao, mima;
    //输入账号
    cout << "输入你的账号" << endl;
    cin >> zhanghao;
    //输入密码
    cout << "输入你的密码" << endl;
    cin >> mima;
    m2.insert(pair<int, int>(zhanghao, mima));
        if (m1!=m2)
        {
            cout << "用户账号密码错误" << endl;
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
                break;
            case '4':
                exit(0);
                break;
            default:
                cout << "无法操作" << endl;
                break;
            }
        }
}


void student::zhuce()
{
    //注册账号
    cout << "请输入你注册的账号" << endl;
     int id;
     cin >> id;
    //注册密码
     cout << "请输入你注册的密码" << endl;
     int key1;
     cin >> key1;
     cout << "再次确认你注册的密码" << endl;
     int key2;
     cin >> key2;
     if (key1 != key2)
     {
         cout << "两次密码不一致无法注册" << endl;
         return;
     }
     else
     {
         m1.insert(pair<int, int>(id, key1));
     }
}    


void manager::managerdenglu()
{
    //登录成功判断函数
    int zhanghao1, mima1, win;
    int zhanghao2 = 147258;
    int mima2 = 123456;
    cout << "请输入账号" << endl;
    cin >> zhanghao1;
    cout << "请输入密码" << endl;
    cin >> mima1;
    if (zhanghao1 == zhanghao2 && mima1 == mima2)
    {
        win = 1;
    }
    else
    {
        cout << "管理员账号密码错误" << endl;
        return;
    }
    //管理员登录成功
    while (win == 1)
    {
        this->managermenu();
        //下面编号对应菜单数字编号
        switch (getchar())
        {
        case '1':
            break;
        case '2':
            break;
        case '3'://新书入库
            this->newbook();
            break;
        case '4'://删除书籍
            this->delbook();
            break;
        case '5'://修改书籍
            this->changebook();
            break;
        case '6'://退出管理员系统
            exit(0);
            break;
        default:
            cout << "无法操作" << endl;
            break;
        }
    }
}

void manager::newbook()//管理员添加书籍
{
    
    cout << "请输入图书名称" << endl;
    cin >> bookname;
    cout << "请输入图书内容" << endl;
    cin >> neirong;
    book.insert(make_pair(bookname, neirong));
}


void manager::delbook()//管理员删除书籍
{
    string name;
    cout << "--------------------------" << endl;
    cout << "-----1.删除所选书籍-------" << endl;
    cout << "-----2.删除全部书籍-------" << endl;
    cout << "--------------------------" << endl;
    switch (getchar())
    {
    case '1':
        cout << "请输入你想删除书籍的名称" << endl;
        cin >> name;
        book.erase(bookname);
        break;
    case '2':
        book.clear();
        break;
    default:
        break;
    }

}


void manager::changebook()
{
    cout << "请输入你想修改书籍的名称" << endl;
    cin >> bookname;
    cout << "请输入修改后的内容" << endl;
    cin >> neirong;
    book.insert(make_pair(bookname, neirong));
}