class Solution
{
public:
    int maxDistToClosest(vector<int> &seats)
    {
        int pre_zeroes = -1, suf_zeroes = -1, max_zeroes = -1, zeroes = 0;

        for (int i = 0; i < seats.size(); i++)
        {
            if (seats[i] == 0)
            {
                zeroes++;
            }
            else
            {
                if (pre_zeroes == -1)
                {
                    pre_zeroes = zeroes;
                }
                else
                {
                    max_zeroes = max(max_zeroes, zeroes);
                }
                zeroes = 0;
            }
        }
        suf_zeroes = zeroes;

        return max((max_zeroes + 1) / 2, max(pre_zeroes, suf_zeroes));
    }
};