    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int t;
        cin >> t;
        
        while (t--) {
            long long int a, b;
            cin >> a >> b;
            
            long long int num = a % b;
            long long int count = 0;
            
            if (a % b != 0) {
                count = b - num;
            }
            cout << count << endl;
        }
        return 0;
    }