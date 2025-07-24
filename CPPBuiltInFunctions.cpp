// 🔁 **Algorithms** (from `<algorithm>`)

// ```cpp
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> v = {5, 2, 9, 1, 5, 6};

//     sort(v.begin(), v.end());             // Sort in ascending
//     sort(v.begin(), v.end(), greater<int>()); // Sort in descending
//     reverse(v.begin(), v.end());          // Reverse elements
//     cout << min(3, 7);                    // 3
//     cout << max(3, 7);                    // 7
//     int a = 5, b = 10;
//     swap(a, b);                           // a = 10, b = 5
//     count(v.begin(), v.end(), 5);        // Count 5s
//     auto it = find(v.begin(), v.end(), 9); // Find 9
//     accumulate(v.begin(), v.end(), 0);   // Sum
//     binary_search(v.begin(), v.end(), 5); // Check if 5 is present
//     lower_bound(v.begin(), v.end(), 5);  // First not less than 5
//     upper_bound(v.begin(), v.end(), 5);  // First greater than 5
//     next_permutation(v.begin(), v.end()); // Next lexicographic permutation
//     prev_permutation(v.begin(), v.end()); // Previous
//     rotate(v.begin(), v.begin()+2, v.end()); // Rotate by 2 positions
//     auto it2 = unique(v.begin(), v.end()); // Removes consecutive duplicates
//     int d = distance(v.begin(), it2);    // Elements after unique()
//     fill(v.begin(), v.end(), 0);         // Fill vector with 0
// }
// ```

// 📊 **Math Functions** (from `<cmath>`)

// ```cpp
// #include <cmath>
// #include <iostream>
// using namespace std;

// int main() {
//     cout << abs(-5);         // 5
//     cout << pow(2, 3);       // 8
//     cout << sqrt(16);        // 4
//     cout << log(2.718);      // ~1
//     cout << log10(100);      // 2
//     cout << ceil(2.3);       // 3
//     cout << floor(2.7);      // 2
//     cout << round(2.5);      // 3
//     cout << gcd(12, 18);     // 6 (C++17+)
//     cout << lcm(4, 5);       // 20 (C++17+)
// }
// ```

// 🧠 **Bit Manipulation**

// ```cpp
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 29; // binary: 11101
//     cout << __builtin_popcount(x); // 4 (number of 1s)
//     cout << __builtin_clz(x);      // Leading 0s (depends on int size)
//     cout << __builtin_ctz(x);      // 0 (no trailing 0s)
//     cout << __builtin_parity(x);   // 0 (even number of 1s)
//     cout << __builtin_ffs(x);      // 1 (first 1 at pos 1 from right)
// }
// ```

// 📚 **Containers & Utilities**

// ```cpp
// #include <iostream>
// #include <vector>
// #include <set>
// #include <map>
// #include <tuple>
// using namespace std;

// int main() {
//     vector<int> v(5);              // vector of size 5
//     v.push_back(10);               // Add 10
//     v.pop_back();                  // Remove last element
//     cout << v.size();              // Size
//     cout << v.empty();             // 1 if empty
//     v.clear();                     // Remove all elements
//     cout << v.front();             // First
//     cout << v.back();              // Last

//     set<int> s;
//     s.insert(3);
//     cout << s.count(3);            // 1 if 3 is present

//     map<string, int> m;
//     m["apple"] = 3;
//     cout << m["apple"];

//     pair<int, int> p = {1, 2};
//     int a, b;
//     tie(a, b) = p;                 // a = 1, b = 2
// }
// ```

// ✅ Use these built-in functions wisely to simplify your logic and improve code performance in DSA problems.
