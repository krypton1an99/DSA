#include <iostream>
using namespace std;
void fun1(int x){
    if(x>0)
    fun1(x-1);
    cout<<x<<endl;
    

}
int main(){
    int x;
    cout<<"Enter number\n";
    cin>>x;
    fun1(x);

    return 0;
}