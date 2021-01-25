#include <iostream>                            //头文件 
using namespace std;                           //命名空间 
int main()                                     //主函数 
{    
    int date=0;
    char answer;
	cout<<"你的生日在下面的数字里吗？"<<endl;  //输出，显示数据 
	cout<<"1 3 5 7"<<endl;
	cout<<"9 11 13 15"<<endl;
	cout<<"17 19 21 23"<<endl;
	cout<<"25 27 29 31"<<endl;                 //endl:换行的意思 
	cout<<"如果在输入 Y ，不在输入 N 。";
	cin>>answer;                               // 输入，把通过键盘保存到 answer
	if (answer=='Y'){                          //if：如果的意思 
		date=date+1	;
		//第一次 
	}
	cout<<"你的生日在下面的数字里吗？"<<endl;
	cout<<"2 3 6 7"<<endl;
	cout<<"10 11 14 15"<<endl;
	cout<<"18 19 22 23"<<endl;
	cout<<"26 27 30 31"<<endl;
	cout<<"如果在输入 Y ，不在输入 N 。";
	cin>>answer;
	if (answer=='Y'){
		date=date+2;
	}
	//第二次 
	cout<<"你的生日在下面的数字里吗？"<<endl;
	cout<<"4 5 6 7"<<endl;
	cout<<"12 13 14 15"<<endl;
	cout<<"20 21 22 23"<<endl;
	cout<<"28 29 30 31"<<endl;
	cout<<"如果在输入 Y ，不在输入 N 。";
	cin>>answer;
	if (answer=='Y'){
		date=date+4;
	}
	//第三次 
	
	cout<<"你的生日在下面的数字里吗？"<<endl;
	cout<<"8 9 10 11"<<endl;
	cout<<"12 13 14 15"<<endl;
	cout<<"24 25 26 27"<<endl;
	cout<<"28 29 30 31"<<endl;
	cout<<"如果在输入 Y ，不在输入 N 。";
	cin>>answer;
	if (answer=='Y'){
		date=date+8;
	}
	//第四次 
	cout<<"你的生日在下面的数字里吗？"<<endl;
	cout<<"16 17 18 19"<<endl;
	cout<<"02 21 22 23"<<endl;
	cout<<"24 25 26 27"<<endl;
	cout<<"28 29 30 31"<<endl;
	cout<<"如果在输入 Y ，不在输入 N 。";
	cin>>answer;
	if (answer=='Y'){
		date=date+16;
	}
	//第五次 
	cout<<"你的生日是：" <<date<<endl; 
	return 0;                    
}
