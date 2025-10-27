#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int maxv = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > maxv) maxv = a[i];
    }

    int fre[maxv + 1];
    for(int i = 0; i <= maxv; i++)
        fre[i] = 0;
    for(int i = 0; i < n; i++)
     fre[a[i]]++;

    int answer = 0;

    for(int x = 1; x <= maxv; x++){
        for(int y = x + 1; y <= maxv; y++){
            int count_x = 0, count_y = 0;
            map<int,int> first_occurrence;
            first_occurrence[0] = -1;

            for(int i = 0; i < n; i++){
                if(a[i] == x) count_x++;
                if(a[i] == y) count_y++;

                int diff = count_x - count_y;

                if(first_occurrence.count(diff)){
                    answer = max(answer, i - first_occurrence[diff]);
                } else {
                    first_occurrence[diff] = i;
                }
            }
        }
    }

    cout << answer << endl;
}

