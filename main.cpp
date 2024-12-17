#include <iostream>

using namespace std;

int main() {
    long long num;
    
    cout << "Enter Num ";
    cin >> num;

    unsigned char* p = (unsigned char *) &num;

    for (size_t i = 0; i < sizeof(long long); ++i) {
        cout << static_cast<int>(p[i]) << " ";
    }

    return 0;
}