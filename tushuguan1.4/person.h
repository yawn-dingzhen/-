#pragma once
#include <iostream>
#include <string>
#include <map>
using namespace std;

class person
{
public:
    person();//���캯�����ڳ�ʼ��         
    void denglumenu();//��¼�ɹ���ʾ�˵�        
    void mainmenu();//�˵�              
    void newbook();//�������
    string account;//����or�û��˺�
    string password;//����or�û�����
    map<int, int>m1;//ע������map
    map<int, int>m2;//��¼map
    map<string, string>book;//�鼮map����
    int id;//ѧ��ע���˺�
    int key1;//ѧ��ע����������һ
    int key2;//ѧ��ע�����������
    string bookname;
    string neirong;
    
};


class student :public person
{
public:
    void denglu();//��¼
    void zhuce();//ѧ��ע��
    void bring();//ѧ������
    void back();//ѧ������
    void change();//ѧ���޸�����
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
};
