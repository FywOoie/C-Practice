class Account{
public:
    void calculate(){
        amount += amount * interst_rate;
    }
    static double rate(){
        return interst_rate;
    }
    static void rate(double);

private:
    double amount;
    static double interst_rate;
    static double initRate();
    static constexpr int period = 30;
    double daily_tbl[period];

};

void Account::rate(double newRate){
    interst_rate = newRate;
}