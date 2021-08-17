#ifndef KAREN_HPP
#define KAREN_HPP

# include <string>
# include <iostream>

class Karen
{
private:
	static const int CALLBACKS_N;
	typedef void (Karen::*t_log_callback)(void);

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	struct t_log_pair {
		std::string		level;
		t_log_callback	func;
	};
public:
	Karen();
	~Karen();

	void complain( std::string level );
};


#endif
