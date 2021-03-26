class Solution {
public:

    #define DOWN (-1)
    #define UP   (1)

    string convert(string s, int numRows)
    {
        if ( numRows < 2 || s.size() <= numRows )
            return ( s );

        char buf[s.size() + 1];

        int  curBufIdx;
        int  direction;
        int  offset;
        int  steps;

        curBufIdx = 0;
        for ( int rowIdx = 0; rowIdx < numRows; ++rowIdx )
        {
            offset = 0;
            direction = ( rowIdx == (numRows - 1) ) ?
                UP : DOWN;
            do
            {
                buf[curBufIdx++] = s[rowIdx + offset];
                if ( direction == DOWN ) {
                    steps = 2 * ((numRows - 1) - rowIdx);
                    if ( rowIdx != 0 )
                        direction = -direction;
                } else if ( direction == UP ) {
                    steps = 2 * rowIdx;
                    if ( rowIdx != (numRows - 1) )
                        direction = -direction;                
                }
                offset += steps;
            }
            while ( rowIdx + offset < s.size() );
        }
        buf[s.size()] = '\0';
        return (buf);
    }
};