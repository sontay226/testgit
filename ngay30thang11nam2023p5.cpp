#include<iostream>
int main () {
    int n,k;
    int f = 0;
    std::cout << "Nhap so phan tu va so can kiem tra : ";
    std::cin >> n >> k;
    int mang[n];
    for ( int i = 0 ; i < n ; i++) {
        std::cin >> mang[i];
    }
    for (int i = 0 ; i < n ; i++) {
        if (k == mang[i]) f++;
    }
    std::cout << f;
}