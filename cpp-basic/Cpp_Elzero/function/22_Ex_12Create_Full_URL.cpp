#include <iostream>
using namespace std;
string createurl(string protocol, string site, string domain, bool haswww = true)
{
        string result;
        if(haswww)
        {
            result = protocol + "://www."+ site +"." + domain ;
        }
        else
        {
        result = protocol + "://" + site + "." + domain;
        }
        return result;
}
int main()
{
    cout << createurl("https", "elzero", "org") << "\n";        // https://www.elzero.org
    cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
    cout << createurl("http", "learn", "net") << "\n";          // http://www.learn.net
    return 0;
}