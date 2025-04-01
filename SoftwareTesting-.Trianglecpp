#include <iostream>

using namespace std;

int main(){

        int a,b,c,n;

        //输入三个大于0小于或等于100的整数
        cout<<"输入三个大于0小于或等于100的整数：";
        cin>>a>>b>>c;
        
        //检测输入是否为整数
        if(cin.fail()){
            cout<<"请输入1~100的三个整数"<<endl;
            return 0;
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
    }