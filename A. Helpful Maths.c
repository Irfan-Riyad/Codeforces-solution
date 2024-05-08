#include <stdio.h>

void quicksort(int arr[], int q, int r);

int partition(int arr[], int p, int r) {
    int x = arr[r];
    int i = p - 1;

    for (int j = p; j < r; j++) {
        if (arr[j] <= x) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp2 = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = temp2;

    return i + 1;
}

void quicksort(int arr[], int q, int r) {
    if (q < r) {
        int partition_index = partition(arr, q, r);
        quicksort(arr, q, partition_index - 1);
        quicksort(arr, partition_index + 1, r);
    }
}

int main() {
   char s[1001];
    scanf("%s", s);
    int arr[1001];
    int count = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '+') {
            continue;
        } else {
            arr[count++] = s[i] - '0';
        }
    }

    quicksort(arr, 0, count - 1);

    for (int i = 0; i < count; i++) {
        printf("%d", arr[i]);
        if (i != count - 1) {
            printf("+");
        }
    }

    return 0;
}
