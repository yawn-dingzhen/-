#pragma once
#include <iostream>
#include <string>
#include <map>
using namespace std;

class person
{
public:
    person();//���캯�����ڳ�ʼ��         
    void mainmenu();//�˵�              
    void newbook();//�������
    map<string, string>book;//�鼮map����
    string bookname;
    string neirong;
};


class student :public person
{
public:
    void studentmenu();//ѧ���˵�
    void studentcz();//ѧ�������˵�
    void studentcase();//ѧ������
    void denglu();//��¼
    void bring();//ѧ������
    void back();//ѧ������
    void change();//ѧ���޸�����
    void zhuce();//ѧ��ע��
    void slookbook();//�鿴�鼮
    map<string, string>m1;//ע������map
};


class manager :public person
{
public:
    void allreader();//�鿴���ж�����Ϣ
    void delallreader();//ɾ�����ж�����Ϣ
    void delbook();//ɾ���鼮
    void changebook();//�޸��鼮
    void managermenu();//����Ա�˵�      
    void managerdenglu();//����Ա��¼�����  
    void mlookbook();//�鿴�鼮

};
