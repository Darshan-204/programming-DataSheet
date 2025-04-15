#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
     vector<int> ans={1,2,3,4,5,6,7,8,9};
     int n=ans.size();
     int low=0;
     int high=n-1;
     int key=7;
     int mid=0;
     int res=-1;
     while (low<=high)
     {
        mid=(low+high)/2;
        if(ans[mid]>key)

        {
            res=mid;
            high=mid-1;
        }
        else{
             low=mid+1;
        }
        
     }
        if(res==-1)
        {
            cout<<"No such element found"<<endl;
        }
        else{
            cout<<"The lower bound of "<<key<<" is "<<ans[res]<<endl;
        }
     

}