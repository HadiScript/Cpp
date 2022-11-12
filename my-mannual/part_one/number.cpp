    #include <iostream>
    using namespace std;

    class lenght
    {
        string str;

        lenght(string str2)
        {
            cout << "enter a string :" << endl;
            getline(cin, str2);
            str = str2;
        }

        void showing(void)
        {
            int i, count = 0;
            for (i = 0; str[i] != '\0'; i++)
            {
                if (str[i] == ' ')
                    count++;
            }
            cout << "Number of words in the string are: " << count + 1;
        }
    };

    int main()
    {
        lenght h;
        h.showing();

        return 0;
    }
