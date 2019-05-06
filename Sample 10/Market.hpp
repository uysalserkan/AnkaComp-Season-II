#ifndef MARKET_HPP
#define MARKET_HPP
class Market{
private:
	int ID;
	double miktar;
public:
	Market(){}
	Market(int v, double k) {
		ID = v;
		miktar = k;
	}
	int getID() const{
		return ID;
	}
	double getMiktar() const{
		return miktar;
	}
	void setID(int identity){
		ID=identity;
	}
	void setMiktar(double m) {
		miktar = m;
	}

};
#endif 