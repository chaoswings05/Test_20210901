#include<iostream>
#include <string.h>

int main()
{
    /*
    ��P��(���2�_)
    �ȉ��̌v�Z��2�i���œ�����B
    00101100 + 01010101
    10110000 + 00001111
    */
    //�����F
    //00101100 + 01010101 = 10000001
    //10110000 + 00001111 = 10111111

    /*
    ��Q��(���2�_)
    ��P��̓�����10�i���œ�����
    */
    //�����F
    //00101100 + 01010101 = 129
    //10110000 + 00001111 = 191

    /*
    ��R��(���2�_)
    char�Aint�Afloat�Adouble�̃o�C�g�T�C�Y�͂��ꂼ�ꂢ����������B
    */
    //�����F
    //char 1�o�C�g
    //int  4�o�C�g(���ˑ�)
    //float 4�o�C�g
    //double 8�o�C�g

    /*
    ��S��(���2�_)
    char* �Aint * �Afloat * �Adouble * �̃o�C�g�T�C�Y�͂��ꂼ�ꂢ����������B
    */
    //�����F
    //char* 4�o�C�g(���ˑ�)
    //int* 4�o�C�g(���ˑ�)
    //float* 4�o�C�g(���ˑ�)
    //double* 4�o�C�g(���ˑ�)

    /*
    ��T��(20�_)
    �ȉ��̃v���O���������s�����ꍇ�A
    �@�`�B�̂ǂ̕��������s����邩������B
    int main()
    {
        int num = 5;

        num = num % 3;

        if (num == 0)
        {
            �@
        }
        else if (num == 2)
        {
            �A
        }
        else
        {
            �B
        }
    }
    */
    //�����F�A

    /*
    ��U��(25�_)
    ���l��2���͂��A
    1�Ԗڂɓ��͂��ꂽ�l����Ȃ瑫���Z�A
    1�Ԗڂɓ��͂��ꂽ�l�������Ȃ�����Z���s���v���O�������쐬����B

    ����)
    1 // 1�Ԗڂɓ��͂��ꂽ�l
    5 // 2�Ԗڂɓ��͂��ꂽ�l
    6 // 1�Ԗڂ���Ȃ̂ő����Z

    4 // 1�Ԗڂɓ��͂��ꂽ�l
    3 // 2�Ԗڂɓ��͂��ꂽ�l
    1 // 1�Ԗڂ������Ȃ̂ň����Z
    */
    std::cout << "���6";
    int firstNum_Q6 = 0;
    int secondNum_Q6 = 0;
    int ans_Q6 = 0;

    std::cout << "���l1����͂��Ă�������\n";
    std::cin >> firstNum_Q6;
    std::cout << "���l2����͂��Ă�������\n";
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
    ��V��(25�_)
    ��U��̃v���O���������[�v�ōs���悤�ɂ��A
    end�Ɠ��͂��ꂽ�ꍇ�I������悤�ɂ��Ă��������B
    end�̓��͂�1�Ԗڂ̒l�̏ꏊ�ł��A2�Ԗڂ̒l�̏ꏊ�ł��A
    �ʓrend�̓��͂��󂯕t����悤�ł��ǂ�ł������ł��B
    �ǂ����ꂩ����end�Ɠ��͂��ďI�����Ă���ΐ����Ƃ��܂��B
    */
    std::cout << "���7";
    int firstNum_Q7 = 0;
    int secondNum_Q7 = 0;
    int ans_Q7 = 0;
    std::string exit;

    do
    {
        std::cout << "���l1����͂��Ă�������\n";
        std::cin >> firstNum_Q6;
        std::cout << "���l2����͂��Ă�������\n";
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

        std::cout << "�I���������ꍇ�Aend����͂��Ă�������\n";
        std::cin >> exit;
    } while (exit != "end");

    /*
    ��W��(10�_)
    �ȉ��̃v���O�������G���[���������A�R���p�C���G���[���Ȃ���Ԃɂ��A
    ���s�ł���悤�ɂ��Ă��������B
    �𓚂��G���[�����R�����g�A�E�g���Ď��s�ł���悤�ɂ���̂�NG�ł��B
    (�r���m�F�̂��߂ɃR�����g�A�E�g�����镪��OK�ł��B)
    �ԈႦ�Ă������4�����ł��B

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