class Solution
{
public:
    string multiply(string num1, char num2)
    {
        string res;

        char carry = 0;

        for (int i = num1.size() - 1; i >= 0; i--)
        {
            int int_res = (num1.at(i) - '0') * (num2 - '0') + carry;
            res = static_cast<char>(int_res % 10 + '0') + res;
            carry = int_res / 10;
        }
        if (carry != 0)
        {
            res = static_cast<char>(carry + '0') + res;
        }
        return res;
    }

    string sum(string num1, string num2)
    {
        if (num1.length() == 0)
        {
            return num2;
        }
        if (num2.length() == 0)
        {
            return num1;
        }
        std::max(num1.length(), num2.length());
        size_t len = std::max(num1.length(), num2.length());
        string res;

        int p1 = num1.length() - 1;
        int p2 = num2.length() - 1;

        bool flag_1 = false;
        bool flag_2 = false;

        char carry = '0';
        while (!(flag_1 == true && flag_2 == true))
        {

            char a = flag_1 ? '0' : num1.at(p1);
            char b = flag_2 ? '0' : num2.at(p2);
            int tempSum = (a - '0') + (b - '0') + (carry - '0');
            res = static_cast<char>(tempSum % 10 + '0') + res;
            carry = (tempSum / 10) + '0';
            if (p1 == 0)
            {
                flag_1 = true;
            }
            else
            {
                p1--;
            }

            if (p2 == 0)
            {
                flag_2 = true;
            }
            else
            {
                p2--;
            }
        }

        if (carry != '0')
        {
            res = carry + res;
        }

        return res;
    }

    string multiply(string num1, string num2)
    {

        int y = 0;
        std::string result;

        for (int i = num2.size() - 1; i >= 0; i--)
        {
            std::string currentRes = \\;
            for (int _ = 0; _ < y; _++)
            {
                currentRes += \0\;
            }
            y++;
            currentRes = multiply(num1, num2.at(i)) + currentRes;
            result = sum(currentRes, result);
        }

        while (result.length() > 1)
        {
            if (result.front() == '0')
            {
                result.erase(0, 1);
            }
            else
            {
                break;
            }
        }
        return result;
    }
};