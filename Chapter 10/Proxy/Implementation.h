#ifndef IMPLEMENTATION_H
#define IMPLEMENTATION_H
class Implementation{
private:
	int value;
public:
	Implementation(int v){
		value=v;
	}
	void SetValue(int v){
		value=v;
	}
	int GetValue(){
		return value;
	}
};
#endif
