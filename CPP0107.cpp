#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; 
    cin >> T;
    while(T--){
        int ma;
        cin >> ma;
        char ans[16]; 
        for(int i = 1; i <= 15; i++){
		cin >> ans[i];
		}
        int x = 0;
        if(ma == 101){
            if(ans[1] == 'A') x++;
            if(ans[2] == 'B') x++;
            if(ans[3] == 'B') x++;
            if(ans[4] == 'A') x++;
            if(ans[5] == 'D') x++;
            if(ans[6] == 'C') x++;
            if(ans[7] == 'C') x++;
            if(ans[8] == 'A') x++;
            if(ans[9] == 'B') x++;
            if(ans[10] == 'D') x++;
            if(ans[11] == 'C') x++;
            if(ans[12] == 'C') x++;
            if(ans[13] == 'A') x++;
            if(ans[14] == 'B') x++;
            if(ans[15] == 'D') x++;
        }
        else if(ma == 102){
            if(ans[1] == 'A') x++;
            if(ans[2] == 'C') x++;
            if(ans[3] == 'C') x++;
            if(ans[4] == 'A') x++;
            if(ans[5] == 'B') x++;
            if(ans[6] == 'C') x++;
            if(ans[7] == 'D') x++;
            if(ans[8] == 'D') x++;
            if(ans[9] == 'B') x++;
            if(ans[10] == 'B') x++;
            if(ans[11] == 'C') x++;
            if(ans[12] == 'D') x++;
            if(ans[13] == 'D') x++;
            if(ans[14] == 'B') x++;
            if(ans[15] == 'B') x++;
        }
        double score = x * 10.0 / 15;
        cout << fixed << setprecision(2) << score << "\n";
    }
    return 0;
}

