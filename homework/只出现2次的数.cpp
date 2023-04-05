#include <iostream>
using namespace std;

class Number {
public:
    int num;
    int count;
    Number(int n = 0, int c = 1): num(n), count(c){}
};

int main() {
    int n;
    std::cin >> n;
    Number nums[20];  // 数字的集合
    for(int i = 0; i < n; ++i) {
        int tmp;
        std::cin >> tmp;
        bool flag = false;  // 是否已经在 nums 中出现
        for(int j = 0; j < i; ++j) {
            if(nums[j].num == tmp) {
                ++nums[j].count;
                flag = true;
                break;
            }
        }
        if(!flag) 
        nums[i] = Number(tmp);
    }

    int res[20], cnt = 0, p;
    bool hasAppeared[20];
    for(int i = 0; i < 20; ++i) {
        hasAppeared[i] = false;
    }
    for(int i = 0; i < n; ++i) {
        if(nums[i].count == 2 && !hasAppeared[i]) {
            res[cnt++] = nums[i].num;
            hasAppeared[i] = true;
        }
        for(int j = i+1; j < n; ++j) {
            if(nums[i].num == nums[j].num) {
                hasAppeared[j] = true;
            }
        }
    }

    if(cnt == 0) {
        std::cout << "none" << std::endl;
    } else {
        std::cout << res[0];
        for(int i = 1; i < cnt; ++i) {
            std::cout << " " << res[i];
        }
        std::cout << std::endl;
    }

    return 0;
}
