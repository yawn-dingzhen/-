#pragma once
#include <iostream>
#include <string>
#include <map>
using namespace std;

class person
{
public:
    person();//构造函数用于初始化         
    void denglu();//登录
    void denglumenu();//登录成功显示菜单        
    void mainmenu();//菜单               
    string account;//管理or用户账号
    string password;//管理or用户密码
    map<int, int>m1;//注册密码map
    map<int, int>m2;//登录map
    map<string, string>book;//书籍map容器
};


class student :public person
{
public:
    void zhuce();//学生注册
    void bring();//学生借书
    void back();//学生还书
};


class manager :public person
{
public:
    void allreader();//查看所有读者信息
    void delallreader();//删除所有读者信息
    void newbook();//新书入库
    void delbook();//删除书籍
    void changebook();//修改书籍
    void managermenu();//管理员菜单      
    void managerdenglu();//管理员登录后程序  
    string bookname;
    string neirong;
};
