#include<iostream>
using namespace std;
int main(){
int x,y,z;
cin>>x;
cin>>y;
cin>>z;
cout<<(x+y+z)/3<<' ';
if(x>y&&y>z)
{
    cout<<"maximum value is x and minumum value is z\n";
}
    else if(x>y&&z>y)
    {
        cout<<"maximum value is x and minumum value is y\n";
    }
    else if(y>x&&x>z)
    {
        cout<<"maximum value is y and minimum value is z\n";
    }
        else if(y>x&&z>x)
        {
            cout<<"maximum value is y and minimum value is x\n";
        }
            else if(z>x&&x>y)
            {
                cout<<"maximum value is z and minimum value is y\n";
            }
                else if(z>x&&y>x)
                {
                cout<<"maximum value is z and minimum value is x\n";
                }

return 0;
}