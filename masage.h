#pragma once
#include <string>
#include <map>
#include "person.h"
using namespace std;


class bookmanager
{
public:
    map<string, book>allbook;//��Ź���Ա��ѧ����ӵ��鼮
    map<string, book>bringallbook;//��ű����ߵ�ȫ��ͼ��
};


class personmanager
{
public:
    map<string,student> studentsmasage;//ѧ����Ϣ
};