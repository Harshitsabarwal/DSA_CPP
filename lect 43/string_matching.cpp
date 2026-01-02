// ...existing code...
#include <bits/stdc++.h>
using namespace std;

// Naive search: returns starting indices where pattern occurs in text
vector<int> naive_search(const string &text, const string &pat) {
    vector<int> res;
    size_t n = text.size(), m = pat.size();
    if (m == 0 || m > n) return res;
    for (size_t i = 0; i + m <= n; ++i) {
        bool ok = true;
        for (size_t j = 0; j < m; ++j) {
            if (text[i + j] != pat[j]) { ok = false; break; }
        }
        if (ok) res.push_back((int)i);
    }
    return res;
}

// KMP (Knuth–Morris–Pratt)
vector<int> build_lps(const string &pat) {
    int m = (int)pat.size();
    vector<int> lps(m, 0);
    for (int i = 1, len = 0; i < m; ) {
        if (pat[i] == pat[len]) lps[i++] = ++len;
        else if (len) len = lps[len - 1];
        else lps[i++] = 0;
    }
    return lps;
}

vector<int> kmp_search(const string &text, const string &pat) {
    vector<int> res;
    int n = (int)text.size(), m = (int)pat.size();
    if (m == 0 || m > n) return res;
    vector<int> lps = build_lps(pat);
    for (int i = 0, j = 0; i < n; ) {
        if (text[i] == pat[j]) { ++i; ++j; }
        if (j == m) { res.push_back(i - j); j = lps[j - 1]; }
        else if (i < n && text[i] != pat[j]) {
            if (j) j = lps[j - 1];
            else ++i;
        }
    }
    return res;
}

// Rabin-Karp with modular rolling hash
vector<int> rabin_karp_search(const string &text, const string &pat) {
    vector<int> res;
    int n = (int)text.size(), m = (int)pat.size();
    if (m == 0 || m > n) return res;
    const long long base = 256;
    const long long mod = 1000000007LL;
    long long patHash = 0, winHash = 0, highPow = 1;
    for (int i = 0; i < m - 1; ++i) highPow = (highPow * base) % mod;
    for (int i = 0; i < m; ++i) {
        patHash = (patHash * base + (unsigned char)pat[i]) % mod;
        winHash = (winHash * base + (unsigned char)text[i]) % mod;
    }
    for (int i = 0; i + m <= n; ++i) {
        if (patHash == winHash) {
            if (text.compare(i, m, pat) == 0) res.push_back(i);
        }
        if (i + m < n) {
            winHash = (winHash - (unsigned char)text[i] * highPow) % mod;
            if (winHash < 0) winHash += mod;
            winHash = (winHash * base + (unsigned char)text[i + m]) % mod;
        }
    }
    return res;
}

// Helpers for tests
bool eq(const vector<int> &a, const vector<int> &b) { return a == b; }
string join_indices(const vector<int> &v) {
    string s;
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) s += ", ";
        s += to_string(v[i]);
    }
    return s;
}

int main() {
    // Basic test cases
    struct Test { string t, p; vector<int> want; };
    vector<Test> tests = {
        {"hello world", "world", {6}},
        {"aaaaa", "aa", {0,1,2,3}},
        {"abcd", "e", {}},
        {"ababcabcabababd", "ababd", {10}},
        {"", "a", {}},
        {"abc", "", {}}, // pattern empty -> defined as no matches here
    };

    for (auto &tc : tests) {
        auto a = naive_search(tc.t, tc.p);
        auto b = kmp_search(tc.t, tc.p);
        auto c = rabin_karp_search(tc.t, tc.p);
        assert(eq(a, tc.want));
        assert(eq(b, tc.want));
        assert(eq(c, tc.want));
    }

    // Demonstration
    string text = "the quick brown fox jumps over the lazy dog";
    string pat = "the";
    auto r = kmp_search(text, pat);
    cout << "Matches for \"" << pat << "\" in \"" << text << "\": " << join_indices(r) << "\n";

    cout << "All tests passed.\n";
    return 0;
}
// ...existing code...