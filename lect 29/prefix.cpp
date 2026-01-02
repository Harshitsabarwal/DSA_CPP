vector<int> prefixSum(const vector<int>& arr) {
    vector<int> prefix(arr.size());
    if (arr.empty()) return prefix;
    
    prefix[0] = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    
    return prefix;
}
 