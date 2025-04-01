#include <iostream>

using namespace std;

int main(){
    char continueTest;
    //添加一个循环让程序可以连续测试多个用例
    do {
        int a,b,c,n;

        //输入三个大于0小于或等于100的整数
        cout<<"输入三个大于0小于或等于100的整数：";
        cin>>a>>b>>c;
        
        if(cin.fail()){
            cout<<"请输入1~100的三个整数"<<endl;
            return 0;  // 直接结束程序
        }

        //检测abc
        if(!(a>=1 && a<=100)){
            cout<<"请输入1~100的三个整数";
            return 0;
        }

        if(!(b>=1 && b<=100)){
            cout<<"请输入1~100的三个整数";
            return 0;
        }

        if(!(c>=1 && c<=100)){
            cout<<"请输入1~100的三个整数";
            return 0;
        }

        //检查构成三角形的类型
        if((a+b>c) && (a+c>b) && (b+c>a)){
            if(a==b && b==c){
                n=1;}
            else if(a==b || a==c || b==c){
                n=2;}
            else{
                n=3;}
            
            if(n==1){
                cout<<"构成等边三角形"<<endl;
            }
            else if(n==2){
                cout<<"构成等腰三角形"<<endl;
            }
            else if(n==3){
                cout<<"构成不等边三角形"<<endl;
            }
        }
            else{
                cout<<"不能构成三角形"<<endl;
            }
            
            cout<<"\n是否继续测试？(y/n): ";
            cin>>continueTest;
        } while(continueTest == 'y');
        
        return 0;
    }