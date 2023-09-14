#include "person.h"
#include "masage.h"
bookmanager bookmanager1;
bookmanager bookmanager2;
personmanager personmanagr1;
manager manager2;
student student1;
book b;
book b2;


person::person()//构造函数
{

}
void studentmanage::studentcase()
{
    system("cls");
    cout << "-------------------------" << endl;
    cout << "--------1.登录-----------" << endl;
    cout << "--------2.注册-----------" << endl;
    cout << "--------3.修改密码-------" << endl;
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
    string id;//学生注册账号
    string key1;//学生注册输入密码一
    string key2;//学生注册输入密码二
    string name1;
    string xuehao1;
    cout << "请先登录您的个人信息" << endl;
    cout << "--------------------" << endl;
    cout << "--------------------" << endl;
    cout << "--------------------" << endl;
    cout << "--------------------" << endl;
    cout << "请输入您的姓名" << endl;
    cin >> name1;
    if (name1.size()<1 && name1.size()>9)
    {
        cout << "请输入正确姓名格式" << endl;
        return;
    }
    cout << "请输入你的十一位学号" << endl;
    cin >> xuehao1;
    if (xuehao1.size() != 11)
    {
        cout << "输入的学号格式有误" << endl;
        return;
    }
    cout << "请输入你注册的十位数账号" << endl;
    cin >> id;
    if (id.size() != 10)
    {
        cout << "输入的账号格式有误" << endl;
        return;
    }
    cout << "请输入你注册的密码" << endl;
    cin >> key1;
    if (key1.size()<6)
    {
        cout << "输入的密码格式有误" << endl;
        return;
    }
    cout << "再次确认你注册的密码" << endl;
    cin >> key2;
    if (key1 != key2)
    {
        cout << "两次密码不一致无法注册" << endl;
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
    //输入账号
    cout << "请输入你的姓名" << endl;
    cin >> name;
    map<string, student>::iterator asd = personmanagr1.studentsmasage.find(name);
    //输入密码
    cout << "输入你的账号" << endl;
    cin >> zhanghao;
    cout << "输入你的密码" << endl;
    cin >> mima;
    if (asd != personmanagr1.studentsmasage.end() && mima == asd->second.password&&zhanghao==asd->second.zhanghao)
    {
        system("cls");
        cout << "---------------------------------------" << endl;
        cout << "--------------1.借书-------------------" << endl;
        cout << "--------------2.还书-------------------" << endl;
        cout << "--------------3.查看添加书籍-----------" << endl;
        cout << "--------------4.添加书籍---------------" << endl;
        cout << "--------------5.退出学生系统-----------" << endl;
        cout << "---------------------------------------" << endl;
        cout << "选择你想要的操作" << endl;
        int a;
        cin >> a;
        switch (a)
        {
        case 1://借书
            student1.bringbook();
            break;
        case 2://还书
            student1.backbook();
            break;
        case 3://查看书籍
            student1.slookbook();
            break;
        case 4://添加书籍
            student1.newbook();
            break;
        case 5://退出系统;
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
    system("cls");
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
        cout << "---------------------------------------------------" << endl;
        cout << "--------------1.查看所有读者信息-------------------" << endl;
        cout << "--------------2.清空读者信息-----------------------" << endl;
        cout << "--------------3.新书入库---------------------------" << endl;
        cout << "--------------4.删除书籍---------------------------" << endl;
        cout << "--------------5.修改书籍---------------------------" << endl;
        cout << "--------------6.查看添加图书内容-------------------" << endl;
        cout << "--------------7.退出管理员系统---------------------" << endl;
        cout << "---------------------------------------------------" << endl;
        //下面编号对应菜单数字编号
        int a;
        cin >> a;
        switch (a)
        {
            system("cls");
        case 1://查看全部读者信息
            this->lookallreader();
            break;
        case 2://删除读者信息
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
        case 7://返回
            return;
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
    bookmanager1.allbook.insert(make_pair(bookname, b));
}


void manager::delbook()//管理员删除书籍
{
    string name;
    cout << "请输入你想删除书籍的名称" << endl;
    cin >> name;
    map<string, book>::iterator qwe = bookmanager1.allbook.find(name);
        if (qwe != bookmanager1.allbook.end())
        {
            bookmanager1.allbook.erase(name);
        }
        else
        {
            cout << "没有该书籍无法删除" << endl;
        }
}


void manager::changebook()//管理员修改图书内容
{
    string changebookname,changebookneirong,type2;
    cout << "请输入你想修改书籍的名称" << endl;
    cin >> changebookname;
    map<string, book>::iterator pos = bookmanager1.allbook.find(changebookname);
    if (pos != bookmanager1.allbook.end())
    {
        cout << "请输入修改后的内容" << endl ;
        cin >> changebookneirong;
        pos->second.b_neirong = changebookneirong;
        cout << "请输入修改后的类型" << endl;
        cin >> type2;
        pos->second.b_type = type2;
        cout << "书名:" << pos->first <<"类型："<<(*pos).second.b_type << "内容:" << (*pos).second.b_neirong << endl;
    }
    else
    {
        cout << "没有该书籍" << endl;
    }

}


void studentmanage::change()//学生修改密码
{
    string zhanghao2, mima2,mima1,name;
    cout << "请输入你的姓名" << endl;
    cin >> name;
    cout << "请输入你的账号" << endl;
    cin >> zhanghao2;
    cout << "请输入你当前使用的密码" << endl;
    cin >> mima1;
    map<string, student>::iterator it = personmanagr1.studentsmasage.find(name);
    if (it != personmanagr1.studentsmasage.end()&&it->second.password==mima1&&it->second.zhanghao==zhanghao2)
    {
        cout << "请输入你想要修改的密码" << endl;
        cin >> mima2;
        it->second.password = mima2;
    }
    else
    {
        cout << "法查询该账号信息请注册或注意输入账号密码是否正确" << endl;
    }
 }


void manager::mlookbook()//管理查看书籍
{
    string bookname;
    cout << "请输入你想查询书籍的名称" << endl;
    cin >> bookname;
    map<string, book>::iterator look = bookmanager1.allbook.find(bookname);
    if (look != bookmanager1.allbook.end())
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
    map<string,book>::iterator look = bookmanager1.allbook.find(bookname);
    if (look != bookmanager1.allbook.end())
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


void manager::lookallreader()//查看所有学生
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


void manager::delreader()//删除学生信息
{
    cout << "请输入你要删除学生信息的姓名" << endl;
    string name;
    cin>>name;
    cout << "请输入学生的学号" << endl;
    string xuehao1;
    cin >> xuehao1;
   map<string, student>::iterator pos = personmanagr1.studentsmasage.find(name);
    if (personmanagr1.studentsmasage.find(name) != personmanagr1.studentsmasage.end()&&pos->second.xuehao==xuehao1)
    {
        personmanagr1.studentsmasage.erase(name);
        cout << "删除成功" << endl;
    }
    else
    {
        cout << "没有该学生无法删除" << endl;
    }
}

void student::bringbook()//借书
{
    string name;
    cout << "请输入你想要借书的名称" << endl;
    cin >> name;
    map<string, book>::iterator pos = bookmanager1.allbook.find(name);
    if (pos != bookmanager1.allbook.end())
    {
        cout << "书籍名称：" << pos->first << " " << "书籍类型；" << pos->second.b_type << " " << "书籍内容：" << pos->second.b_neirong << endl;
        //把借走的书籍放入借书容器
        b2.b_neirong = pos->second.b_neirong;
        b2.b_type = pos->second.b_type;
        bookmanager2.bringallbook.insert(make_pair(name, b2));
        //借完书将书从书库中删除
        bookmanager1.allbook.erase(name);
    }
    else
    {
        cout << "书库中没有该图书" << endl;
    }
}


void student::backbook()//还书
{
    string name;
    cout << "请输入你要还书的名称" << endl;
    cin >> name;
    map<string, book>::iterator pos = bookmanager2.bringallbook.find(name);
    b.b_neirong = pos->second.b_neirong;
    b.b_type = pos->second.b_type;
    bookmanager1.allbook.insert(make_pair(name, b));
}

