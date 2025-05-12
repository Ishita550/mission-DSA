int sansaXor(vector<int> arr) {
    int n = arr.size(), res = 0;
    if (n % 2 == 0) return 0;
    for (int i = 0; i < n; i += 2) res ^= arr[i];
    return res;
}