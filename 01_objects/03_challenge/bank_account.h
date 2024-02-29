// コードを入力してください

class BankAccount {
    public:
        BankAccount(double balance);

        void deposit(double cash);
        void withdraw(double cash);
        double get_balance() const;

    private:
        double balance;
};
