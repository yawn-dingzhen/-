#pragma once
#include <iostream>
#include <map>
using namespace std;

class person
{
public:
    person();//���캯�����ڳ�ʼ��         
    void denglu();//��¼
    void denglumenu();//��¼�ɹ���ʾ�˵�        
    void mainmenu();//�˵�               
    string account;//����or�û��˺�
    string password;//����or�û�����
    map<int, int>m1;
    map<int, int>m2;
};


class student :public person
{
public:
    void zhuce();//ѧ��ע��
    void zhuxiao();//ѧ��ע��
    void bring();//ѧ������
    void back();//ѧ������
};


class manager :public person
{
public:
    void allreader();//�鿴���ж�����Ϣ
    void delallreader();//ɾ�����ж�����Ϣ
    void newbook();//�������
    void delbook();//ɾ���鼮
    void changebook();//�޸��鼮
    void managermenu();//����Ա�˵�      
    void managerdenglu();//����Ա��¼�����     
};
