#include<iostream>
#include<windows.h>
#include<ctime>
#include<cstdlib>
using namespace std;
void fun(int a){
	if(a==0){
        Sleep(300);
        return;
    } 
	keybd_event(17,0,0,0);
	keybd_event(86,0,0,0);
	keybd_event(17,0,KEYEVENTF_KEYUP,0);
	keybd_event(86,0,KEYEVENTF_KEYUP,0); 
	Sleep(10);
	fun(a-1);
}
int main(){
	srand(time(0));
	while(true){
		int times;
		cin >> times; 
	for(int i=1;i<=4;i++){
		cout << i;
		Sleep(1000); 
	}
	keybd_event(17,0,0,0);
	keybd_event(65,0,0,0);
	keybd_event(17,0,KEYEVENTF_KEYUP,0);
	keybd_event(65,0,KEYEVENTF_KEYUP,0); 
	keybd_event(17,0,0,0);
	keybd_event(67,0,0,0);
	keybd_event(17,0,KEYEVENTF_KEYUP,0);
	keybd_event(67,0,KEYEVENTF_KEYUP,0); 
	for(int i = 1;i<=times;i++){
		if(i%40==0){
			Sleep(10000);
		}
		int rands = rand()%20+1;
		cout << rands;
		fun(rands);
		keybd_event(13,0,0,0); 
		keybd_event(13,0,KEYEVENTF_KEYUP,0);  
	}
	cout<<"finish"; 
	} 
	
} 
