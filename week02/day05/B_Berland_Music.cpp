#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        string s;
        cin>>s;
        vector<pair<int,int>> lk;
        vector<pair<int,int>> dk;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                lk.push_back({v[i],i});
            }
            else
            {
                dk.push_back({v[i],i});
            }
        }
        sort(lk.begin(),lk.end());
        sort(dk.begin(),dk.end());

        vector<int> q(n);

        int rat=1;
        for(auto val:dk)
        {
            q[val.second]=rat;
            rat++;
        }
        for(auto val:lk)
        {
            q[val.second]=rat;
            rat++;
        }
        
        for(int val:q)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> p(n);
//     vector<int> q(n); // This will store the final ratings
//     string s;

//     // Input the predicted ratings (permutation of numbers from 1 to n)
//     for (int i = 0; i < n; ++i) {
//         cin >> p[i];
//     }

//     // Input the string representing liked or disliked songs
//     cin >> s;

//     // Create two lists: one for liked songs and one for disliked songs
//     vector<pair<int, int>> liked, disliked;

//     // Separate indices of liked and disliked songs based on s[i]
//     for (int i = 0; i < n; ++i) {
//         if (s[i] == '1') {
//             liked.push_back({p[i], i});  // Store value and index for liked songs
//         } else {
//             disliked.push_back({p[i], i});  // Store value and index for disliked songs
//         }
//     }

//     // Sort the liked and disliked songs based on the ratings (p[i])
//     sort(liked.begin(), liked.end());
//     sort(disliked.begin(), disliked.end());

//     // Assign the smallest ratings to disliked songs first
//     int rating = 1;
//     for (auto& song : disliked) {
//         q[song.second] = rating++;  // Assign to the original index
//     }

//     // Then assign the remaining largest ratings to liked songs
//     for (auto& song : liked) {
//         q[song.second] = rating++;  // Assign to the original index
//     }

//     // Output the new permutation q
//     for (int i = 0; i < n; ++i) {
//         cout << q[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         solve();
//     }

//     return 0;
// }
