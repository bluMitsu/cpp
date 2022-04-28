#include "../inc/Convert.hpp"

static int ft_strlen(std::string const & s);

Convert::Convert() {}
Convert::Convert(const Convert&) {}
Convert::~Convert() {}
Convert & Convert::operator=(const Convert& op)
{
	if (this == &op)
		return (*this); 
	return (*this);
}

float       Convert::toTreatable(std::string const & totreat)
{
	float to_treat;

	try
	{	
		if (ft_strlen(totreat) == 3
			&& totreat[0] == '\''
			&& totreat[2] == '\'')
			return (static_cast<float>(totreat[1]));
		to_treat = std::stof(totreat);
	}
	catch (std::exception & e) { throw Convert::NotConvertible(); }

	return (to_treat);
}

float		Convert::toFloat(float f)
{
	return (static_cast<float>(f));
}

int		Convert::toInt(float f)
{
	int i = static_cast<int>(f);
	if (f == std::numeric_limits<float>::infinity()
		|| f == -std::numeric_limits<float>::infinity()
		|| std::isnan(f))
		throw std::string("impossible");
	return (i);
}

double       Convert::toDouble(float f)
{
	return (static_cast<double>(f));
}

char		Convert::toChar(float f)
{
	char value = static_cast<char>(f);
	if (f == std::numeric_limits<float>::infinity()
		|| f == -std::numeric_limits<float>::infinity()
		|| std::isnan(f))
		throw std::string("impossible");
	else if (value < 32 || value > 126)
		throw std::string("Non displayable");
	return (value);
}

Convert::NotConvertible::NotConvertible() throw() {}
Convert::NotConvertible::NotConvertible(const NotConvertible& copy) throw() { (void)copy; }
Convert::NotConvertible::~NotConvertible() throw() {}
Convert::NotConvertible & Convert::NotConvertible::operator=(const NotConvertible& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* Convert::NotConvertible::what() const throw() { return ("Invalid format or can't be converted."); }


static int ft_strlen(std::string const & s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}