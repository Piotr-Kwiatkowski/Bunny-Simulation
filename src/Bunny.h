#ifndef BUNNY_H
#define BUNNY_H

#include <string>

class Bunny
{
public:
	// constructor
	Bunny(std::string a_name, std::string a_sex, std::string a_color, int a_age, bool a_mutant);
	
    // getters
	std::string getName()     const;
	std::string getSex()      const;
	std::string getColor()    const;
	int         getAge()      const;
	bool        getIsMutant() const;

    void incrementAge();

	// for std::list::remove
	bool operator==(const Bunny& other) const;

private:
	std::string m_name;
	std::string m_sex;
	std::string m_color;
	int         m_age;
	bool        m_isRadioactiveVampireMutant;
};

#endif  /* BUNNY_H */