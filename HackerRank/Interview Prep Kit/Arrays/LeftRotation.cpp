vector<string> split_string(string);

// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    int n = a.size();
    reverse(a.begin(),a.begin()+d);
    reverse(a.begin()+d,a.begin()+n);
    reverse(a.begin(),a.end());
    return a;
}