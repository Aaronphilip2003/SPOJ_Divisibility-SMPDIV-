#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int n=0,x=0,y=0;
    cin>>n;
    cin>>x;
    cin>>y;
    for(int r=1;r<n;r++)
    {
    if(r%x==0&&r%y!=0)
    cout<<r<<" ";
    }
    cout<<endl;
  }

}
