#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

struct LogDict {
	std::string log_level;
	std::string quote;
};

# define KAREN_QUOTES_SIZE 6

static const LogDict DEFAULT_QUOTE = {
	"Probably complaining about insignificant problems", ""
};

static const LogDict KAREN_QUOTES[KAREN_QUOTES_SIZE] = {
	{
		"TRACE",
		"I've been waiting for 15 minutes!"
	}, 
	{
		"DEBUG",
		"Do you know how much money I spend here every month?"
	}, 
	{
		"INFO",
		"My name is misspelled on the cup."
	}, 
	{
		"WARNING",
		"I think I deserve to have some extra bacon for free.\n"\
		"I’ve been coming here for years an you just started working here last month."
	}, 
	{
		"ERROR",
		"This is unacceptable, I want to speak to the manager now."
	}, 
	{
		"FATAL",
		"You are violating my constitutional rights."
	}	
};

class Karen {
	private:

		int find_log_level( std::string log_level );

	public:
		Karen();
		~Karen();

		void	print_log( LogDict karen_quote );
		void	filter( std::string log_level );
};

#endif
