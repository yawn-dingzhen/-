#pragma once
#include <string>
#include <map>
using namespace std;

class bookmanager
{
public:
    map<string, string>allbook;//存放管理员和学生添加的书籍
};


class personmanager
{
public:
    map<string,string> studentsmasage;//学生信息
    map<string, string> passwords;//学生账号密码
};