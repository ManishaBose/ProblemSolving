class Solution
{
public:
    int minimizeXor(int num1, int num2)
    {
        // first find the set bits in num1 and num2
        int setBit1 = 0, setBit2 = 0;
        int x = num1;
        while (num1)
        {
            // get the bit and check if it 1 then shift to right
            if (num1 & 1 == 1)
                setBit1++;
            num1 >>= 1;
        }
        while (num2)
        {
            if (num2 & 1 == 1)
                setBit2++;
            num2 >>= 1;
        }
        int i = 0;
        // remove the least significant bit
        while (setBit1 > setBit2)
        {
            if (x & (1 << i))
            { // if set
                setBit1--;
                x = x ^ (1 << i); // to remove the set bit
            }
            i++;
        }
        // add the least significant bit
        while (setBit1 < setBit2)
        {
            if ((x & (1 << i)) == 0)
            { // if not set
                setBit1++;
                x = x | (1 << i); // to remove the set bit
            }
            i++;
        }
        return x;
    }
};