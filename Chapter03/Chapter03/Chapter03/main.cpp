//
//  main.cpp
//  Chapter03
//
//  Created by denny on 2021/02/19.
//

#include <iostream>
using namespace std;

int n = 1260;
int cnt = 0;
int coinType[4] = {500, 100, 50, 10};

int main(int argc, const char * argv[]) {
    for(int i = 0; i < 4; i++) {
        int coin = coinType[i];
        cnt += n / coin;
        n = n % coin;
    }
    
    cout << "cnt : " << cnt << endl;
    return 0;
}
