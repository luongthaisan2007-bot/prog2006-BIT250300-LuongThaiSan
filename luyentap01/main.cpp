# bai1
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "So chan";
    else
        cout << "So le";

    return 0;
}
# bai2
#include <iostream>
using namespace std;

int main() {
    float W, H;

    cout << "Nhap chieu rong W: ";
    cin >> W;

    cout << "Nhap chieu cao H: ";
    cin >> H;

    float S = W * H;

    cout << "Dien tich = " << S;

    return 0;
}
#bai3
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }

    return 0;
}
#bai4
#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0)
            cout << "Phuong trinh vo so nghiem";
        else
            cout << "Phuong trinh vo nghiem";
    } else {
        float x = -b / a;
        cout << "Nghiem x = " << x;
    }

    return 0;
}
#bai5
#include <iostream>
using namespace std;

int maxArray(int a[], int n) {
    int max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }

    return max;
}

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Gia tri lon nhat: " << maxArray(a, n);

    return 0;
}
#bai6
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap so tu 1-7: ";
    cin >> n;

    switch(n) {
        case 1:
            cout << "Chu Nhat";
            break;
        case 2:
            cout << "Thu Hai";
            break;
        case 3:
            cout << "Thu Ba";
            break;
        case 4:
            cout << "Thu Tu";
            break;
        case 5:
            cout << "Thu Nam";
            break;
        case 6:
            cout << "Thu Sau";
            break;
        case 7:
            cout << "Thu Bay";
            break;
        default:
            cout << "Khong hop le";
    }

    return 0;
}
#bai7
#include <iostream>
using namespace std;

int main() {
    int n;
    int S = 0;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        S += i;
    }

    cout << "Tong S = " << S;

    return 0;
}
