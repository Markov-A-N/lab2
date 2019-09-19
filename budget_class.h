#ifndef BUDGET_CLASS_H
#define BUDGET_CLASS_H 1

class Budget
{
	double a, b;
public:
	Budget(double first, double second);
	Budget();
	double rounding(double num) const;
	Budget operator+(Budget const op2) const;
	//Budget plus(Budget const op2) const;
	Budget operator=(Budget const op2);
	//Budget assign(Budget const op2);
	Budget operator-(Budget const op2) const;
	//Budget minus(Budget const op2) const;
	Budget operator*(double const &num) const;
	//Budget multiply(Budget const &op2) const;
	Budget operator/(double const &num) const;
	//Budget devide(Budget const &op2) const;
	bool operator==(Budget const &op2) const;
	//bool eq(Budget const &op2) const;
	bool operator!=(Budget const &op2) const;
	//bool ne(Budget const &op2) const;
	bool operator<(Budget const &op2) const;
	//bool lt(Budget const &op2) const;
	bool operator>(Budget const &op2) const;
	//bool gt(Budget const &op2) const;
	bool operator<=(Budget const &op2) const;
	//bool le(Budget const &op2) const;
	bool operator>=(Budget const &op2) const;
	//bool ge(Budget const &op2) const;
	friend std::ostream &operator<<(std::ostream &out, Budget const &ob);
	friend std::istream &operator>>(std::istream &in, Budget const &ob);	
	//void write(std::ostream &out);
	//void read(std::istream &in);
};

#endif //BUDGET_CLASS_H