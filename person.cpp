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
    cout << "-----欢迎使用图书管理系统-------" << endl;
    cout << "---------------------------------" << endl;
    cout << "---------------------------------" << endl;
    cout << "*******请选择你需要的操作********" << endl;
    cout << "---------------------------------" << endl;
    cout << "---------------------------------" << endl;
    cout << "-----1.学生操作------------------" << endl;
    cout << "-----2.管理员操作----------------" << endl;
    cout << "-----3.退出管理系统--------------" << endl;
    cout << "---------------------------------" << endl;
}


void student::studentmenu()
{
    cout << "-------------------------" << endl;
    cout << "--------1.登录-----------" << endl;
    cout << "--------2.注册-----------" << endl;
    cout << "--------3.修改密码-------" << endl;
    cout << "-------------------------" << endl;
}


void manager::managermenu()
{
    cout << "---------------------------------------------------" << endl;
    cout << "--------------1.查看所有读者信息-------------------" << endl;
    cout << "--------------2.清空读者信息-----------------------" << endl;
    cout << "--------------3.新书入库---------------------------" << endl;
    cout << "--------------4.删除书籍---------------------------" << endl;
    cout << "--------------5.修改书籍---------------------------" << endl;
    cout << "--------------6.查看添加图书内容-------------------" << endl;
    cout << "--------------7.退出管理员系统---------------------" << endl;
    cout << "---------------------------------------------------" << endl;
}


void student::studentcz()
{
    cout << "---------------------------------------" << endl;
    cout << "--------------1.借书-------------------" << endl;
    cout << "--------------2.还书-------------------" << endl;
    cout << "--------------3.查看添加书籍-----------" << endl;
    cout << "--------------4.添加书籍---------------" << endl;
    cout << "--------------5.退出全部系统-----------" << endl;
    cout << "---------------------------------------" << endl;
}


person::person()//构造函数
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
    string id;//学生注册账号
    string key1;//学生注册输入密码一
    string key2;//学生注册输入密码二
    //注册账号
    string name1;
    string xuehao1;
    cout << "请先登录您的个人信息" << endl;
    cout << "请输入您的姓名" << endl;
    cin >> name1;
    cout << "请输入你的学号" << endl;
    cin >> xuehao1;
    student1.xuehao = xuehao1;
    cout << "请输入你注册的账号" << endl;
    cin >> id;
    student1.zhanghao = id;
    //注册密码
    cout << "请输入你注册的密码" << endl;
    cin >> key1;
    student1.password = key1;
    cout << "再次确认你注册的密码" << endl;
    cin >> key2;
    if (key1 != key2)
    {
        cout << "两次密码不一致无法注册" << endl;
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
    //输入账号
    cout << "输入你的账号" << endl;
    cin >> zhanghao;
    map<string, student>::iterator asd = personmanagr1.studentsmasage.find(zhanghao);
    //输入密码
    cout << "输入你的密码" << endl;
    cin >> mima;
    if (asd != personmanagr1.studentsmasage.end() && mima == asd->second.password)
    {
        this->studentcz();
        cout << "选择你想要的操作" << endl;
        int a;
        cin >> a;
        switch (a)
        {
        case 1://借书
            break;
        case 2://还书
            break;
        case 3://查看书籍
            this->slookbook();
            break;
        case 4://添加书籍
            this->newbook();
            break;
        case 5://退出系统
            return;
            break;
        default:
            cout << "无法操作" << endl;
            break;
        }


    }
    else
    {
        cout << "账号或密码错误" << endl;
    }
}


void manager::managerdenglu()
{
    //登录成功判断函数
    person lkb;
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
        case 3://新书入库
            this->newbook();
            break;
        case 4://删除书籍
            this->delbook();
            break;
        case 5://修改书籍
            this->changebook();
            break;
        case 6://查询书籍
            this->mlookbook();
            break;
        case 7:
            break;
        default:
            cout << "无法操作" << endl;
            break;
        }
    }
}


void person::newbook()//添加书籍
{
    string bookname, neirong, leixing;
    cout << "请输入图书名称" << endl;
    cin >> bookname;
    cout << "请输入图书类型" << endl;
    cin >> leixing;
    cout << "请输入图书内容" << endl;
    cin >> neirong;

    b.b_neirong = neirong;
    b.b_type = leixing;
    manager1.allbook.insert(make_pair(bookname, b));
}


void manager::delbook()//管理员删除书籍
{
    string name;
    cout << "请输入你想删除书籍的名称" << endl;
    cin >> name;
    map<string, book>::iterator qwe = manager1.allbook.find(name);
        if (qwe != manager1.allbook.end())
        {
            manager1.allbook.erase(name);
        }
        else
        {
            cout << "没有该书籍无法删除" << endl;
        }
}


void manager::changebook()//管理员修改图书内容
{
    string changebookname,changebookneirong;
    cout << "请输入你想修改书籍的名称" << endl;
    cin >> changebookname;
    map<string, book>::iterator pos = manager1.allbook.find(changebookname);
    if (pos != manager1.allbook.end())
    {
        cout << "请输入修改后的内容" << endl ;
        cin >> changebookneirong;
        pos->second.b_neirong = changebookneirong;
        cout << "书名:" << (*pos).first <<"内容:" << (*pos).second.b_neirong << endl;
    }
    else
    {
        cout << "没有该书籍" << endl;
    }

}


void student::change()//学生修改密码
{
    string zhanghao2, mima2;
    cout << "请输入你的账号" << endl;
    cin >> zhanghao2;
    map<string, student>::iterator it = personmanagr1.studentsmasage.find(zhanghao2);
    if (it != personmanagr1.studentsmasage.end())
    {
        cout << "请输入你想要修改的密码" << endl;
        cin >> mima2;
        it->second.password = mima2;
    }
    else
    {
        cout << "法查询该账号信息请注册或注意输入账号是否正确" << endl;
    }
 }


void manager::mlookbook()//管理查看书籍
{
    string bookname;
    cout << "请输入你想查询书籍的名称" << endl;
    cin >> bookname;
    map<string, book>::iterator look = manager1.allbook.find(bookname);
    if (look != manager1.allbook.end())
    {
        cout << "书籍名称：" << endl;
        cout << look->first << endl;
        cout << "书籍类型" << endl;
        cout << look->second.b_type << endl;
        cout << "书籍内容：" << endl;
        cout << look->second.b_neirong << endl;
    }
    else
    {
        cout << "没有该书籍无法查看" << endl;
    }
}


void student::slookbook()//学生查看书籍
{
    string bookname;
    cout << "请输入你想查询书籍的名称" << endl;
    cin >> bookname;
    map<string,book>::iterator look = manager1.allbook.find(bookname);
    if (look != manager1.allbook.end())
    {
        cout << "书籍名称：" << endl;
        cout << look->first << endl;
        cout << "书籍类型" << endl;
        cout << look->second.b_type << endl;
        cout << "书籍内容：" << endl;
        cout << look->second.b_neirong << endl;
    }
    else
    {
        cout << "没有该书籍无法查看" << endl;
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
        cout << "学生的姓名为：" << n << " " << "学生的学号为：" << x << " " << "学生的账号是：" << z << " " << "学生的密码是；" << y;
    }
    cout << endl;
}


void manager::delreader()
{
    cout << "请输入你要删除学生信息的姓名" << endl;
    string name;
    cin>>name;
    map<string, student>::iterator pos = personmanagr1.studentsmasage.find(name);
    if (personmanagr1.studentsmasage.find(name) == personmanagr1.studentsmasage.end())
    {
        cout << "没有该学生无法删除" << endl;
    }
    else
    {
        personmanagr1.studentsmasage.erase(name);
        cout << "删除成功" << endl;
    }
}