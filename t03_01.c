#include <stdio.h>
#include <stdlib.h> // Untuk exit()

int main() {
    int n;
    double sum = 0.0;
    int value;
    int i;

    if (scanf("%d", &n) != 1 || n < 0 || n > 100) {
        return 1; // Berhenti jika n bukan integer, negatif, atau melebihi 100 (batas asumsi)
    }

    for (i = 0; i < n; i++) {
        if (scanf("%d", &value) != 1 || value < 0 || value > 100) {
            return 1; // Berhenti jika input nilai bukan integer atau di luar rentang 0-100
        }
        sum += value;
    }

    printf("%.0f\n", sum); // Jumlah seluruh nilai

    if (n == 0) {
        printf("0.00\n"); // Jika n adalah 0, rata-rata juga 0.00
    } else {
        printf("%.2f\n", sum / n); // Nilai rata-rata dengan 2 digit presisi
    }

    return 0;
}
