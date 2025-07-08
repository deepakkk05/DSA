//Check if the given string is palindrome or not

#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s,int l)
{
    int start =0,last = l-1;

    while(start != (l/2) )
    { 
    if(tolower(s[start]) == tolower(s[last]))
    {
        start++;
        last--;
    }
    else
    {
        return false;
    }
    }

    return true;
}


int main(){
    string s = "Madam";
    int l=s.length();
    cout <<palindrome(s,l);
}

//Improved Version : Striver

// #include<bits/stdc++.h> 

// using namespace std;

// bool isPalindrome(string s) {

//         int left = 0, right = s.length()-1;
//         while(left<right)
//         {
//             if(!isalnum(s[left])) 
//                 left++;
//             else if(!isalnum(s[right])) 
//                 right--;
//             else if(tolower(s[left])!=tolower(s[right])) 
//                 return false;
//             else {
//                 left++; 
//                 right--;
//             }
//         }
//         return true;

// }
// int main() {

//   string str = "ABCDCBA";
//   bool ans = isPalindrome(str);

//   if (ans == true) {
//     cout << "Palindrome";
//   } else {
//     cout << "Not Palindrome";
//   }
//   return 0;
// }