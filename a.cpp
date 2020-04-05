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
#define pb push_back
#define pop pop_back
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
        ll a[n][n];
        ll sum=0,r=0,c=0;
        // map<ll,map<ll,ll> > mr,mc;
        in(i,n){
            in(j,n){
                cin>>a[i][j];
                if(i==j){
                    sum+=a[i][j];
                }
            }
        }
        ll f=0;
        in(i,n){
            map mp;
            in(j,n){
                mp[a[i][j]]++ ;
                if(mp[a[i][j]]>1){
                    r++;
                    break;
                }
            }
        }
        in(i,n){
            map mp;
            in(j,n){
                mp[a[j][i]]++ ;
                if(mp[a[j][i]]>1){
                    c++;
                    break;
                }
            }
        }
        cout<<"Case #"<<q+1<<": ";
        th(sum,r,c);


    }

    

    

}
 
 
