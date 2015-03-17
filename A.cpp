#include<iostream>
using namespace std;
int main(int argc,char*argv[])
{
int i;
cin>>i;
cout<<i<<" ";
while (i!=1){
	if(i%2==1){
		i=3*i+1;
		cout<<i<<" ";
	}
	else{
		i=i/2;
		cout<<i<<" ";
	}

}
cout<<endl;
return 0;	
}
