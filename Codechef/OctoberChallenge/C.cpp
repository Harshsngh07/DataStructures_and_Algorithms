    #include <bits/stdc++.h>
    using namespace std;


    bool pow2(int n)
    {
        int res = n & (n - 1);

        if (res == 0)
            return true;
        return false;
    }

    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            if(n==1)
                cout << 1 << endl;
            else if(pow2(n))
                cout << -1 << endl;
            else if(n==3)
                cout << 1 << " " << 3 << " "<<2<<endl;
            else if(n==5)
                cout << 2 << " " << 3 << " " << 1 << " " << 5 << " " << 4<<endl;
            else if(n==6)
                cout << 2 << " " << 3 << " " << 1 << " " << 5 << " " << 4<<" "<<6 << endl;
            else if(n==7)
                cout << 2 << " " << 3 << " " << 1 << " " << 5 << " " << 4 << " "<< 6 <<" "<< 7<<endl;
            else if(n==9)
                cout << 2 << " " << 3 << " " << 1 << " " << 5 << " " << 4 << " "<< 6 <<" " << 7 << " " << 9 << " " << 8<<endl;
            else
            {
                cout << 2 << " " << 3 << " " << 1 << " " << 5 << " " << 4 << " "<< 6 <<" " << 7 << " " << 9 << " " << 8 << " "; 
                for(int i=10;i<=n;i++)
                {
                    if(pow2(i)){
                        cout << i+1 << " "<< i <<" ";
                        i++;
                    }
                    else
                        cout << i << " ";
                }

                cout << endl;
            }
        }
    }