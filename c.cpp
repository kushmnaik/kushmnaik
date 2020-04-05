//@author :  |< U $ |-|
#include<cmath>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<deque>
#include<queue>
#include<algorithm>
#include<list>
#include<cstring>
#include<unordered_map>
#define ll long long
#define vi vector<long long>
// #define pb push_back
// #define pop pop_back
#define pi pair<long long ,long long>
#define vp vector<pair<long long,long long> >
#define mkp make_pair
#define in(i,n) for(i=0;i<n;i++)
#define fon(i,n,m) for(i=n;i<m;i++)
#define rfon(i,n,m) for(i=n;i>=m;i--)
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define jaldi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define map map<long long,long long>
#define inm1(b)  memset(b,-1,sizeof(b))
#define in0(b) memset(b,0,sizeof(b))
#define ininf(b) memset(b,1000000001,sizeof(b))
#define MOD         1000000007
#define I 1000000000000000001
#define t(a) cout<<a<<" "<<endl
#define tt(a,b) cout<<a<<" "<<b<<endl
#define th(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define TakeInput freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
using namespace std;
ll gcd(ll a, ll b) {  if (a == 0)  return b; return gcd(b % a, a); }



int main(){
    jaldi
    // #ifndef ONLINE_JUDGE
    // TakeInput
    // #endif
    ll i,j,n,t,m,k,q;
    
    cin>>t;
    in(q,t){

        cin>>n;
        m=24*60+1;
        ll a[m];
        in0(a);
        priority_queue < pair< pair<ll,ll> ,ll >, vector<pair< pair<ll,ll> ,ll > >, greater<pair< pair<ll,ll> ,ll > > > p;
        in(i,n){
            ll l,r;
            cin>>l>>r;
            a[l]+=1;
            a[r]-=1;
            p.push(mkp(mkp(l,r),i));
        }

        ll f=0;
        fon(i,1,m){
            a[i]=a[i]+a[i-1];
            if(a[i]>2){
                f=1;
                // cout<<i;
                break;
            }
        }
        if(f){
            cout<<"Case #"<<q+1<<": IMPOSSIBLE"<<endl;
            continue;
        }


        ll cc=0,jc=0;
        char ans[n+1];

        in(i,n)
        {
            ll l=p.top().F.F,r=p.top().F.S;
            ll in=p.top().S;
            if(cc<=l){
                ans[in]='C';
                cc=r;
            }
            else if(jc<=l){
                ans[in]='J';
            }
            else{
                ans[in]='C';
            }
            p.pop();

        }
        cout<<"Case #"<<q+1<<": ";
        in(i,n){
            cout<<ans[i];
        }
        cout<<endl;
        // in(i,n){
        //     tt(p.top().F.F,p.top().F.S);
        //     p.pop();
        // }
        // cout<<endl;



        
    }


    

    

}
 
 
