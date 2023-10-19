#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class contact
{
	private:
			std::string		fname;
			std::string		lname;
			std::string		nickname;
			std::string		phonenum;
			std::string		darksecret;
	public:
			contact();
			~contact();
			int			idx;
			void		print_list(void);
			void		print_contact(void);
			void		add_contact(void);
			bool		used;
};

#endif