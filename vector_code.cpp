#include<bits/stdc++.h>
    using namespace std;
    void printvec(vector<int>v)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
         cout<<endl;
    }
    int main()
    {
        //10 vectors of 0 size
        //v[1]- 2nd vector
        //v[2]- 3rd vector
        cout<<"Enter the size"<<endl;
        int N;
        cin>>N;
        vector<int>v[N];
        for(int i=0;i<N;i++)
        {
            cout<<"Enter "<<i<<" vector size"<<endl;
            int n;
            cin>>n;
            cout<<"Enter the elements now"<<endl;
            for(int j=0;j<n;j++)
            {
                
                int x;
                cin>>x;
                v[j].push_back(x);        
            }
        }
        cout<<"Vector"<<endl;
        for(int i=0;i<N;i++)
        {
            printvec(v[i]);
                   }
    }
