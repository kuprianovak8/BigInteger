#ifndef MATHEMATIC_H
#define MATHEMATIC_H


class mathematic
{
    /*T a;
    T2 b*/;

public:
    mathematic();

    template <typename T, typename T2>
    T Sum (T a,T2 b)
    {
        return a + b;
    }

    template <typename T, typename T2>
    T Sub (T a, T2 b)
    {
        return a - b;
    }

    template <typename T, typename T2>
    T Mul (T a, T2 b)
    {
        return a * b;
    }

    double Sum2 (double a, double b);
    double Sub2 (double a, double b);
    int Sum2 (int a, int b);
    long Sub2 (long a, long b);
};

#endif // MATHEMATIC_H
