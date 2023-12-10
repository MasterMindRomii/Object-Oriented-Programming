#include<iostream>
using namespace std;

template <typename T>
class Pair{
    private:
    T Number1;
    T Number2;

    public:

    Pair(T a, T b): Number1(a),Number2(b){}

    T getMax()
    {
        return (Number1>Number2)?Number1:Number2;
    }
};

int main()
{
    Pair<int> intPair(10, 20);
    int maxVal = intPair.getMax();

    cout << "Maximum value in the pair: " << maxVal << endl;
    return 0;
}