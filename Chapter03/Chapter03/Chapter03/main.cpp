//
//  main.cpp
//  Chapter03
//
//  Created by denny on 2021/02/19.
//

//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

//int n = 1260;
//int cnt = 0;
//int coinType[4] = {500, 100, 50, 10};

//int main(int argc, const char * argv[]) {
//    for(int i = 0; i < 4; i++) {
//        int coin = coinType[i];
//        cnt += n / coin;
//        n = n % coin;
//    }
//
//    cout << "cnt : " << cnt << endl;
//    return 0;
//}

int n, m, k;
vector<int> v;

int main(int argc, const char * argv[]) {
    cin >> n >> m >> k;
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    
    int first = v[n - 1];
    int second = v[n - 2];
    
    int cnt = (m / (k + 1)) * k;
    cnt += m % (k + 1);
    
    int result = 0;
    result += cnt * first;
    result += (m - cnt) * second;
    
    cout << result << endl;
    
    return 0;
}

