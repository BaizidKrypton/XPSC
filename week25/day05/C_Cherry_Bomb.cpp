#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }

        int r_x=-1;
        int flag=0;
        int flag1=1;
        for(int i=0; i<n; i++)
        {
            if(b[i]!=-1)
            {
                flag1=0;
                int x=a[i]+b[i];
                if(r_x==-1)
                {
                    r_x=x;
                }
                else
                {
                    if(r_x!=x)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }

        if(flag)
        {
            cout<<0<<endl;
            continue;
        }

        if(flag1)
        {
            sort(a.begin(),a.end());
            int mn=a[n-1];
            int mx=a[0]+k;

            cout<<max(0,(mx-mn+1))<<endl;
            continue;
        }

        int flag2=1;
        for(int i=0; i<n; i++)
        {
            if(b[i]==-1)
            {
                int y=r_x-a[i];
                if(y<0 || y>k)
                {
                    flag2=0;
                    break;
                }
            }
            else
            {
                if(a[i]+b[i]!=r_x)
                {
                    flag2=0;
                    break;
                }
            }
        }

        if(flag2)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

    return 0;
}

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         long long k;
//         cin >> n >> k;

//         vector<long long> a(n), b(n);
//         for (int i = 0; i < n; ++i) cin >> a[i];
//         for (int i = 0; i < n; ++i) cin >> b[i];

//         bool all_missing = true;
//         long long known_x = -1;
//         bool inconsistent = false;

//         for (int i = 0; i < n; ++i) {
//             if (b[i] != -1) {
//                 all_missing = false;
//                 long long current_x = a[i] + b[i];
//                 if (known_x == -1) {
//                     known_x = current_x;
//                 } else if (known_x != current_x) {
//                     inconsistent = true;
//                     break;
//                 }
//             }
//         }

//         if (inconsistent) {
//             cout << 0 << '\n';
//             continue;
//         }

//         if (all_missing) {
//             long long min_a = *min_element(a.begin(), a.end());
//             long long max_a = *max_element(a.begin(), a.end());
//             long long min_x = max_a;
//             long long max_x = k + min_a;
//             long long result = max(0LL, max_x - min_x + 1);
//             cout << result << '\n';
//             continue;
//         }

//         // If we have a valid known_x, validate all missing b[i]
//         bool valid = true;
//         for (int i = 0; i < n; ++i) {
//             if (b[i] == -1) {
//                 long long bi = known_x - a[i];
//                 if (bi < 0 || bi > k) {
//                     valid = false;
//                     break;
//                 }
//             } else {
//                 if (a[i] + b[i] != known_x) {
//                     valid = false;
//                     break;
//                 }
//             }
//         }

//         cout << (valid ? 1 : 0) << '\n';
//     }

//     return 0;
// }
