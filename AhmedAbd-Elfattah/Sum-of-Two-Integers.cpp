#define SET_BIT(val, bit) ((val) |= (1U << (bit)))
#define CLEAR_BIT(val, bit) ((val) &= ~(1U << (bit)))
#define GET_BIT(val, bit) (((val) >> (bit)) & 1U)

class Solution {
public:
    int getSum(int a, int b) {
        int val = 0;
        bool carry = false;
        for (size_t i = 0; i < 32; i++) {
            bool a_val = GET_BIT(a, i);
            bool b_val = GET_BIT(b, i);

            if ((a_val==false) && (b_val == false) && (carry == false)) {
                carry = false;
            }
            else if ((a_val == false) && (b_val == false) && (carry == true)) {
                carry = false;
                SET_BIT(val, i);
            }
            else if ((a_val == false) && (b_val == true) && (carry == false)) {
                carry = false;
                SET_BIT(val, i);
            }
            else if ((a_val == false) && (b_val == true) && (carry == true)) {
                carry = true;
            }
            else if ((a_val == true) && (b_val == false) && (carry == false)) {
                carry = false;
                SET_BIT(val, i);
            }
            else if ((a_val == true) && (b_val == false) && (carry == true)) {
                carry = true;
            }
            else if ((a_val == true) && (b_val == true) && (carry == false)) {
                carry = true;
            }
            else if ((a_val == true) && (b_val == true) && (carry == true)) {
                carry = true;
                SET_BIT(val, i);
            }
        }
        return val; // placeholder return
    }
};