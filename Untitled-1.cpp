#include <iostream>

using namespace std;

int main(){
    int a,b,c,n;

    cout<<"输入三个大于0小于或等于100的整数：";
    cin>>a>>b>>c;

    while(!(a>=1 && a<=100)){
        cout<<"输入的a错误，请重新输入：";
        cin>>a;
    }

    while(!(b>=1 && b<=100)){
        cout<<"输入的b错误，请重新输入：";
        cin>>b;
    }

    while(!(c>=1 && c<=100)){
        cout<<"输入的c错误，请重新输入：";
        cin>>c;
    }

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