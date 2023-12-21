#include <stdio.h>
void nhapMang(int a[], int n, int i) {
    if(i == n) {
        return;
    }
    printf("Nhap phan tu thu %d: ", i);
    scanf("%d", &a[i]);
    nhapMang(a, n, i + 1);
}

void xuatMang(int a[], int n, int i) {
    if(i == n) {
        return;
    }
    printf("%d ", a[i]);
    xuatMang(a, n, i + 1);
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    nhapMang(a, n, 0);
    printf("Cac phan tu cua mang la: ");
    xuatMang(a, n, 0);
    return 0;
}


