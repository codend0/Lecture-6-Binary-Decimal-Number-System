/*we are creating a code for to write the bit of a number 
eg.5=101
*/

#include <iostream>
#include <math.h>//importing this module for math calculation
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;//taking a varible ans and starting its value from 0
    while(n!=0){//loop till n does not become 0
        int bit=n&1;//if a bit is 0 so it wil gonna store 0 and if it is 1 then it gonna store 1 with and operator
        ans=(bit*pow(10,i))+ans  ;//it start from end to start so we have to just reverse it 
        n=n>>1;//right shift by 1
        i++;
        
    }cout<<ans;
}
