#include<iostream>
#include <string.h>

int main()
{
    /*
    第１問(一問2点)
    以下の計算に2進数で答えよ。
    00101100 + 01010101
    10110000 + 00001111
    */
    //答え：
    //00101100 + 01010101 = 10000001
    //10110000 + 00001111 = 10111111

    /*
    第２問(一問2点)
    第１問の答えを10進数で答えよ
    */
    //答え：
    //00101100 + 01010101 = 129
    //10110000 + 00001111 = 191

    /*
    第３問(一問2点)
    char、int、float、doubleのバイトサイズはそれぞれいくつか答えよ。
    */
    //答え：
    //char 1バイト
    //int  4バイト(環境依存)
    //float 4バイト
    //double 8バイト

    /*
    第４問(一問2点)
    char* 、int * 、float * 、double * のバイトサイズはそれぞれいくつか答えよ。
    */
    //答え：
    //char* 4バイト(環境依存)
    //int* 4バイト(環境依存)
    //float* 4バイト(環境依存)
    //double* 4バイト(環境依存)

    /*
    第５問(20点)
    以下のプログラムを実行した場合、
    ①～③のどの部分が実行されるか答えよ。
    int main()
    {
        int num = 5;

        num = num % 3;

        if (num == 0)
        {
            ①
        }
        else if (num == 2)
        {
            ②
        }
        else
        {
            ③
        }
    }
    */
    //答え：②

    /*
    第６問(25点)
    数値を2つ入力し、
    1番目に入力された値が奇数なら足し算、
    1番目に入力された値が偶数なら引き算を行うプログラムを作成せよ。

    結果)
    1 // 1番目に入力された値
    5 // 2番目に入力された値
    6 // 1番目が奇数なので足し算

    4 // 1番目に入力された値
    3 // 2番目に入力された値
    1 // 1番目が偶数なので引き算
    */
    std::cout << "問題6";
    int firstNum_Q6 = 0;
    int secondNum_Q6 = 0;
    int ans_Q6 = 0;

    std::cout << "数値1を入力してください\n";
    std::cin >> firstNum_Q6;
    std::cout << "数値2を入力してください\n";
    std::cin >> secondNum_Q6;

    if (firstNum_Q6 % 2 == 1)
    {
        ans_Q6 = firstNum_Q6 + secondNum_Q6;
        std::cout << ans_Q6 << "\n";
    }
    else if (firstNum_Q6 % 2 == 0)
    {
        ans_Q6 = firstNum_Q6 - secondNum_Q6;
        std::cout << ans_Q6 << "\n";
    }

    /*
    第７問(25点)
    第６問のプログラムをループで行うようにし、
    endと入力された場合終了するようにしてください。
    endの入力は1番目の値の場所でも、2番目の値の場所でも、
    別途endの入力を受け付けるようでもどれでもいいです。
    どこか一か所でendと入力して終了していれば正解とします。
    */
    std::cout << "問題7";
    int firstNum_Q7 = 0;
    int secondNum_Q7 = 0;
    int ans_Q7 = 0;
    std::string exit;

    do
    {
        std::cout << "数値1を入力してください\n";
        std::cin >> firstNum_Q6;
        std::cout << "数値2を入力してください\n";
        std::cin >> secondNum_Q6;

        if (firstNum_Q7 % 2 == 1)
        {
            ans_Q6 = firstNum_Q7 + secondNum_Q7;
            std::cout << ans_Q7 << "\n";
        }
        else if (firstNum_Q7 % 2 == 0)
        {
            ans_Q6 = firstNum_Q7 - secondNum_Q7;
            std::cout << ans_Q7 << "\n";
        }

        std::cout << "終了したい場合、endを入力してください\n";
        std::cin >> exit;
    } while (exit != "end");

    /*
    第８問(10点)
    以下のプログラムをエラーを解決し、コンパイルエラーがない状態にし、
    実行できるようにしてください。
    解答がエラー個所をコメントアウトして実行できるようにするのはNGです。
    (途中確認のためにコメントアウトをする分はOKです。)
    間違えている個所は4か所です。

    class Point
    {
    public:
        Point() { Clear(); }

        Clear()
        {
            x = 0;
            y = 0;
            z = 0;
        }
    public:
        int x, y, z;
    }

    {
        Point point;
        Point nextPoint;

        nextPoint.x = 100;
        nextPoint.y = 30;

        while (1)
        {
            if (point.X < nextPoint.x)
            {
                point.x++;
            }
            else if (point.x > nextPoint.x)
            {
                point.x--;
            }

            if (point.y < nextPoint.y)
            {
                point.y++;
            }
            else if (point.y > nextPointy)
            {
                point.y--;
            }
            printf("pointX = %d\n", point.x);
            printf("pointY = %d\n", point.y);

            if (point.x == nextPoint.x &&
                point.y == nextPoint.y)
            {
                break;
            }
        }
    }
    */
}