#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class person
{
public:
    person();//构造函数用于初始化         
    void mainmenu();//菜单              
    void newbook();//新书入库
    void choice();
};


class student :public person
{
public:
    void studentmenu();//学生菜单
    void studentcz();//学生操作菜单
    void studentcase();//学生操作
    void denglu();//登录
    void bring();//学生借书
    void back();//学生还书
    void change();//学生修改密码
    void zhuce();//学生注册
    void slookbook();//查看书籍
    string password;
    string xuehao;
    string zhanghao;
};


class manager :public person
{
public:
    void lookallreader();//查看所有读者信息
    void delreader();//删除所有读者信息
    void delbook();//删除书籍
    void changebook();//修改书籍
    void managermenu();//管理员菜单      
    void managerdenglu();//管理员登录后程序  
    void mlookbook();//查看书籍

};

class book
{
public:
    string b_neirong;
    string b_type;
};