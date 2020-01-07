#include<bits/stdc++.h>
using namespace std;
#define dd double
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
#define ll long long
#define ull unsigned long long
#define ld long double
#define mx 200005
#define mod 1000000007
#define fr first
#define cti(a) (a-48)
#define itc(a) char(a+48)
#define se second
#define End cout<<"\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define memo(Array,val) memset(Array, val, sizeof Array)
#define check(n, pos) (n & (1<<pos))
#define Set(n, pos) (n | (1<<pos))
ld X[mx],Y[mx],sum=0;
ll n,x;

void solve(ld A[], ld B[])
{
    for(ll i=0; i<n; i++){
        ld lob=1,hor=1;
        for(ll j=0; j<n; j++){
            if(i == j) continue;
            lob*=(x-A[j]);
            hor*=(A[i]-A[j]);
        }
        sum+=((lob/hor)*B[i]);
    }
    cout << "Value of f(" << x << ") is: " << sum << "\n";
    sum=0;
}

void Input()
{
   cout << "Enter Number of Elements(Xn, Yn): ";
   cin >> n;
   End;
   for(ll i=0; i<n; i++){
       cout << "Enter Value of X[" << i << "] = ";
       cin >> X[i];
   }
   End;
   for(ll i=0; i<n; i++){
       cout << "Enter Value of Y[" << i << "] = ";
       cin >> Y[i];
   }
   cout << "\nFor f(x) give the Value of x: ";
   while(cin >> x){
       solve(X,Y);
       cout << "\nFor f(x) give the Value of x: ";
   }
}

int main()
{
   //freopen("text.txt","r",stdin);
   Input();
   return 0;
}

