 #include<bits/stdc++.h>
using namespace std;
#define ll long long
ll p = 1000000007;
void multiply(vector<ll>& a,vector<ll> b){
    vector<ll> x = a;
    a[0] = (((x[0]*b[0])%p) + ((x[1]*b[2])%p))%p;
    a[1] = (((x[0]*b[1])%p) + ((x[1]*b[3])%p))%p;
    a[2] = (((x[2]*b[0])%p) + ((x[3]*b[2])%p))%p;
    a[3] = (((x[2]*b[1])%p) + ((x[3]*b[3])%p))%p;
/*cout<<"Values of a inside multipliication"<<endl;
cout<<"a[0]="<<a[0]<<endl;
cout<<"a[1]="<<a[1]<<endl;
cout<<"a[2]="<<a[2]<<endl;
cout<<"a[3]="<<a[3]<<endl;
*/
}
void matexp(vector<ll>& b,ll pow){
    if(pow == 0){
        b[0] = 1; b[1] = 0; b[2] = 0; b[3] = 1;
        return;
    }
    vector<ll> c = b;
    matexp(b,pow/2);
    multiply(b,b);
    if(pow%2){
        multiply(b,c);
    }
}
int main(){
    ll t,n,m;
    cin >> t;
    while(t > 0){
        cin >> n >> m;
        vector<ll> a(4),b(4);
        a[0] = 0; a[1] = (m-1)%p; a[2] = 1; a[3] = (m-1)%p;
/*cout<<"Values of a"<<endl;
cout<<"a[0]="<<a[0]<<endl;
cout<<"a[1]="<<a[1]<<endl;
cout<<"a[2]="<<a[2]<<endl;
cout<<"a[3]="<<a[3]<<endl;
*/
        b[0] = 0; b[1] = m%p; b[2] = 0; b[3] = 0;
/*cout<<"Values of b"<<endl;
cout<<"b[0]="<<b[0]<<endl;
cout<<"b[1]="<<b[1]<<endl;
cout<<"b[2]="<<b[2]<<endl;
cout<<"b[3]="<<b[3]<<endl;
*/
        matexp(a,n-1);
        multiply(b,a);
        ll ans = (b[0]+b[1])%p;
        cout << ans << endl;
        t--;
    }
}
