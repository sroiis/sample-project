#include<bits/stdc++.h>

#define int long long
#define vll vector<long long>
#define pll pair<long long,long long>
#define vpll vector<pair<long long,long long>>
#define vvll vector<vector<long long>>
#define pqll priority_queue
#define pb push_back
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define endl "\n"
#define inf LLONG_MAX
#define ff first
#define ss second
#define mapi map<long long,long long>
#define mapc map<char,long long>
#define sorta(arr) sort(arr.begin(),arr.end())
#define all(arr) arr.begin(),arr.end()
#define sortd(arr) sort(arr.begin(),arr.end(),greater<int>())
#define f(i, start, end) for (int i = (start); i < (end); i++)
#define f2(i,start,end) for(int i=(start);i<(end);i+=2)
#define fa(item,data) for(auto (item):(data))
#define fi(i, end, start) for (int i = (end); i >= (start); i--)
#define p(item) cout<<item<<endl
#define pr(item) cout<<item<<endl;return
#define pv(item) for(auto it:item) cout<<it<<" ";cout<<endl;return

using namespace std;

void solve(){
    int ans=0;
    int n;
    cin>>n;
    vll a(n);
    f(i,0,n) cin>>a[i];
    map<int,int> mp;
    mp[0]=3;
    mp[2]=2;mp[1]=1;mp[3]=1;mp[5]=1;
    f(i,0,n){
      if(mp.find(a[i])!=mp.end()){
        mp[a[i]]--;
        if(mp[a[i]]==0){
          mp.erase(a[i]);
        }
      }
      if(mp.empty()){
        cout<<i+1<<endl;
        return;
      }
      
    }
    cout<<0<<endl;
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t=1;
	cin>>t;
	while(t--) solve();
}