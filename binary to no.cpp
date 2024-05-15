#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        int digit=n%10;//we are taking last bit of binary
        if(digit==1){//checking if that binary is 1 or not
        ans=ans+pow(2,i);//if it is 2 ki power i
        }  n=n/10;//for remaing number except left last part /it by 10
        i++;
    }
    cout<<ans<<endl;
}
