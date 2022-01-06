class Rotor
{
    private:
        char switchedLetter;
        char* letterMap;

    public:
        char getSwitchedLetter();
        void setConfiguration(char* map);
        void pass(char signal);
};