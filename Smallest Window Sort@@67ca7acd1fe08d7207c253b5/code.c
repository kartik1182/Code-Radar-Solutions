int findUnsortedSubarray(int arr[], int n) {
    int left = -1, right = -1;

    // Find left boundary
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            left = i;
            break;
        }
    }
    if (left == -1) return 0; // Already sorted

    // Find right boundary
    for (int j = n - 1; j > 0; j--) {
        if (arr[j] < arr[j - 1]) {
            right = j;
            break;
        }
    }

    // Find min and max in the unsorted window
    int minVal = arr[left], maxVal = arr[left];
    for (int k = left; k <= right; k++) {
        if (arr[k] < minVal) minVal = arr[k];
        if (arr[k] > maxVal) maxVal = arr[k];
    }

    // Expand left boundary
    while (left > 0 && arr[left - 1] > minVal) left--;

    // Expand right boundary
    while (right < n - 1 && arr[right + 1] < maxVal) right++;

    return right - left + 1;
}