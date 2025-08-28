class Solution {
public:
    int firstUniqChar(string s) {
    int arr[26] = { 0 };

	for (int i = 0; i < s.size(); i++) {
		if (arr[s[i] - 'a'] > 0 || arr[s[i] - 'a'] == -1) arr[s[i] - 'a'] = -1;

		else
			arr[s[i] - 'a'] = i + 1;

	}
	int ind = s.size()+1;
	for (int i = 0; i < 26; i++) {
		if (arr[i] < ind && arr[i] >= 1) ind = arr[i];
	}
	if (ind - 1 != s.size())
		return ind - 1;
    else return -1;
    }
};