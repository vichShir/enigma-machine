class Plugboard
{
    private:
        char switchedLetter;
        char letterMap[26] = {
            'Z', // <- A
            'P', // <- B
            'H', // <- C
            'N', // <- D
            'M', // <- E
            'S', // <- F
            'W', // <- G
            'C', // <- H
            'I', // <- I
            'Y', // <- J
            'T', // <- K
            'Q', // <- L
            'E', // <- M
            'D', // <- N
            'O', // <- O
            'B', // <- P
            'L', // <- Q
            'R', // <- R
            'F', // <- S
            'K', // <- T
            'U', // <- U
            'V', // <- V
            'G', // <- W
            'X', // <- X
            'J', // <- Y
            'A'  // <- Z
        };

    public:
        char getSwitchedLetter();
        void pass(char signal);
};