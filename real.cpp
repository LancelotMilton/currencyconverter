#include <iostream>
#include <sstream>
#include <string>

class crypto{
private:
    std::string name ;
    std::string symbol ;
    long double value;
public:
    crypto(std::string namae, std::string simbol, long double kachi){
        name=namae;
        symbol=simbol;
        value=kachi;
    }
    long double getvalue(){
        return value;
    }
    std::string getsymbol(){
        return symbol;
    }
    std::string getname(){
        return name;
    }
};
long double converter(long double price, long double d1, long double d2){
        return((price*d1)/d2);
}
std::string cryptos[6][3]={{"Bitcoin","BTC","19924"},{"LiteCoin","LTC","52.06"},{"Ethereum","ETC","1435.55"},{"Tether","USDT","1"}, {"BinanceCoin","BNB","276.92"}};
long double values[6];
int main(){
for(int i=0; i<=5; i++){
    char* eb;
    values[i]=std::strtold(cryptos[i][2].c_str(), &eb);
}
crypto c1[6]={crypto(cryptos[0][0], cryptos[0][1], values[0]),crypto(cryptos[1][0],cryptos[1][1],values[1]),crypto(cryptos[2][0],cryptos[2][1],values[2]),crypto(cryptos[3][0], cryptos[3][1], values[3]), crypto(cryptos[4][0], cryptos[4][1], values[4]), crypto(cryptos[5][0], cryptos[5][1], values[5])};
   std::string symbold;
    int s;
    int a;
    std::string symbolc;
    std::cout << "Please enter a symbol" << std::endl;
    std::cin >> symbold;
    for(int w=0; w<=5; w++){
        if(c1[w].getsymbol()==symbold){
            s=w;
        }
    }
    long double amount;
    std::cout<<"Please enter an amount: "<<std::endl;
    std::cin>>amount;
    if(!std::cin.good()){
       std::cerr<<"Please Enter an amount";
       exit(1);
    }
    std::cout<<"Please enter a symbol to convert to: "<<std::endl;
    std::cin>>symbolc;
    for(int u=0; u<=5; u++){
        if(c1[u].getsymbol()==symbolc){
            a=u;
        }
    }
long double result= converter(amount, c1[s].getvalue(), c1[a].getvalue());
std::cout << amount << " (" << symbold << ") is worth " << result << " (" << symbolc << ")";
}
