#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class person
{
public:
    person();//���캯�����ڳ�ʼ��         
    void newbook();//�������;
};


class student :public person
{
public:
    void studentcz();//ѧ�������˵�
    void studentcase();//ѧ������
    void denglu();//��¼
    void bringbook();//ѧ������
    void backbook();//ѧ������
    void change();//ѧ���޸�����
    void zhuce();//ѧ��ע��
    void slookbook();//�鿴�鼮
    string password;
    string xuehao;
    string zhanghao;
};


class manager :public person
{
public:
    void lookallreader();//�鿴���ж�����Ϣ
    void delreader();//ɾ�����ж�����Ϣ
    void delbook();//ɾ���鼮
    void changebook();//�޸��鼮
    void managermenu();//����Ա�˵�      
    void managerdenglu();//����Ա��¼�����  
    void mlookbook();//�鿴�鼮

};

class book
{
public:
    string b_neirong;
    string b_type;
};