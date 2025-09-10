#include "minimolocal.h"

int* minimolocal(int* first, int* last) {
    int n = last - first;
    if (n == 0) return nullptr;
    if (n == 1) return first;

    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Condições de borda
        if (mid == 0) {
            return (first[mid] < first[mid + 1]) ? first + mid : first + mid + 1;
        }
        if (mid == n - 1) {
            return (first[mid] < first[mid - 1]) ? first + mid : first + mid - 1;
        }

        if (first[mid] < first[mid - 1] && first[mid] < first[mid + 1]) {
            return first + mid;
        }

        if (first[mid + 1] < first[mid - 1]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return first; 
}

