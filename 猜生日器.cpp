#include <iostream>                            //ͷ�ļ� 
using namespace std;                           //�����ռ� 
int main()                                     //������ 
{    
    int date=0;
    char answer;
	cout<<"����������������������"<<endl;  //�������ʾ���� 
	cout<<"1 3 5 7"<<endl;
	cout<<"9 11 13 15"<<endl;
	cout<<"17 19 21 23"<<endl;
	cout<<"25 27 29 31"<<endl;                 //endl:���е���˼ 
	cout<<"��������� Y ���������� N ��";
	cin>>answer;                               // ���룬��ͨ�����̱��浽 answer
	if (answer=='Y'){                          //if���������˼ 
		date=date+1	;
		//��һ�� 
	}
	cout<<"����������������������"<<endl;
	cout<<"2 3 6 7"<<endl;
	cout<<"10 11 14 15"<<endl;
	cout<<"18 19 22 23"<<endl;
	cout<<"26 27 30 31"<<endl;
	cout<<"��������� Y ���������� N ��";
	cin>>answer;
	if (answer=='Y'){
		date=date+2;
	}
	//�ڶ��� 
	cout<<"����������������������"<<endl;
	cout<<"4 5 6 7"<<endl;
	cout<<"12 13 14 15"<<endl;
	cout<<"20 21 22 23"<<endl;
	cout<<"28 29 30 31"<<endl;
	cout<<"��������� Y ���������� N ��";
	cin>>answer;
	if (answer=='Y'){
		date=date+4;
	}
	//������ 
	
	cout<<"����������������������"<<endl;
	cout<<"8 9 10 11"<<endl;
	cout<<"12 13 14 15"<<endl;
	cout<<"24 25 26 27"<<endl;
	cout<<"28 29 30 31"<<endl;
	cout<<"��������� Y ���������� N ��";
	cin>>answer;
	if (answer=='Y'){
		date=date+8;
	}
	//���Ĵ� 
	cout<<"����������������������"<<endl;
	cout<<"16 17 18 19"<<endl;
	cout<<"02 21 22 23"<<endl;
	cout<<"24 25 26 27"<<endl;
	cout<<"28 29 30 31"<<endl;
	cout<<"��������� Y ���������� N ��";
	cin>>answer;
	if (answer=='Y'){
		date=date+16;
	}
	//����� 
	cout<<"��������ǣ�" <<date<<endl; 
	return 0;                    
}
