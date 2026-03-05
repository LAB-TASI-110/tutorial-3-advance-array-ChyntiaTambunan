#include <stdio.h>
#include <stdlib.h> // Untuk exit()

int main() {
    int n;
    double sum = 0.0;
    int value;
    int i;
    int scores[100]; // Array untuk menyimpan nilai, asumsi n maksimal 100
    int min_score = 101; // Inisialisasi dengan nilai di luar rentang atas
    int max_score = -1;  // Inisialisasi dengan nilai di luar rentang bawah

    if (scanf("%d", &n) != 1 || n < 0 || n > 100) { // n diasumsikan tidak lebih dari 100
        return 1; // Berhenti jika n bukan integer, negatif, atau melebihi 100
    }

    for (i = 0; i < n; i++) {
        if (scanf("%d", &value) != 1 || value < 0 || value > 100) {
            return 1; // Berhenti jika input nilai bukan integer atau di luar rentang 0-100
        }
        scores[i] = value; // Simpan nilai ke dalam array
        sum += value;

        if (value < min_score) {
            min_score = value;
        }
        if (value > max_score) {
            max_score = value;
        }
    }

    printf("%.0f\n", sum); // Jumlah seluruh nilai

    double average;
    if (n == 0) {
        average = 0.0;
        printf("0.00\n"); // Jika n adalah 0, rata-rata juga 0.00
    } else {
        average = sum / n;
        printf("%.2f\n", average); // Nilai rata-rata dengan 2 digit presisi
    }
    
    int count_above_average = 0;
    for (i = 0; i < n; i++) {
        if (scores[i] >= average) {
            count_above_average++;
        }
    }
    printf("%d\n", count_above_average); // Jumlah mahasiswa dengan nilai >= rata-rata

    if (n == 0) {
        printf("0\n"); // Jika n adalah 0, rentang nilai juga 0
    } else {
        printf("%d\n", max_score - min_score); // Rentang nilai (max - min)
    }

    return 0;
}
