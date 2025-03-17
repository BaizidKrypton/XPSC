#include <bits/stdc++.h>
using namespace std;

const int maxN=1e5+9;
const int MOD=1e9+7;

long long a[maxN],t[maxN*4],lazy[maxN*4];

void push(int n,int b,int e)
{
    if(lazy[n]==1)
    {
        return;
    }

    t[n]=t[n]*lazy[n]%MOD;

    if(b!=e)
    {
        int l=(2*n),r=(2*n)+1;
        lazy[l]=lazy[l]*lazy[n]%MOD;
        lazy[r]=lazy[r]*lazy[n]%MOD;
    }

    lazy[n]=1;
}

void build(int n,int b,int e)
{
    if(b==e)
    {
        t[n]=a[b];
        return;
    }

    int mid=(b+e)/2;
    int l=(2*n),r=(2*n)+1;

    build(l,b,mid);
    build(r,mid+1,e);

    t[n]=(t[l]+t[r])%MOD;
}

void update(int n,int b,int e,int i,int j,int v)
{
    push(n,b,e);
    
    if(e<i || j<b) 
    {
        return;
    }
    if(b>=i && e<=j)
    {
        lazy[n]=lazy[n]*v%MOD;
        push(n,b,e);

        return;
    }

    int mid=(b+e)/2;
    int l=(2*n),r=(2*n)+1;

    update(l,b,mid,i,j,v);
    update(r,mid+1,e,i,j,v);

    t[n]=(t[l]+t[r])%MOD;
}

long long query(int n,int b,int e,int i,int j)
{
    push(n,b,e);

    if(e<i || j<b)
    {
        return 0;
    }
    if(b>=i && e<=j)
    {
        return t[n];
    }

    int mid=(b+e)/2;
    int l=(2*n),r=(2*n)+1;

    return(query(l,b,mid,i,j)+query(r,mid+1,e,i,j))%MOD;
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n; i++)
    {
        a[i]=1;
    }

    fill(lazy,lazy+4*maxN,1);

    build(1,1,n);

    while(m--)
    {
        int type;
        cin>>type;

        if(type==1)
        {
            int l,r,v;
            cin>>l>>r>>v;
            l++;
            r++;

            update(1,1,n,l,r-1,v);
        } 
        else
        {
            int l,r;
            cin>>l>>r;
            l++;
            r++;
            cout<<query(1,1,n,l,r-1)<<endl;
        }
    }

    return 0;
}
