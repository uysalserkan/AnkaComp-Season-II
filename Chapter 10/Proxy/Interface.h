#ifndef INTERFACE_H
#define INTERFACE_H
class Implementation;
class Interface{
private:
	Implementation *ptr;
public:
	Interface(int);
	void SetValue(int);
	int GetValue()const;
	~Interface();
};
#endif
