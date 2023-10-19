#ifndef CONTACT_HPP
# define CONTACT_HPP

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
			void		print_list();
			void		print_contact();
			void		add_contact();
			bool		used;
};

#endif