#include "replace.hpp"

Filename::Filename(void){
}

Filename::~Filename(void){
}

bool	Filename::set_infile_outfile(std::string in, std::string out){
	if (in == ""){
		std::cout << "error, invalid argument" << std::endl;
		return (false);
	}
	else{
		my_file.open(in.c_str(), std::ios::in);
		if (my_file.is_open()){
			std::cout << "I'm opening " << in << " as input" << std::endl;
		}
		else{
			std::cout << "error opening " << in << ", invalid filename" << std::endl;
			return (false);
		}
	}
	if (out == ""){
		std::cout << "error, invalid argument" << std::endl;
		return (false);
	}
	else{
		outfile.open(in + ".replace", std::ios_base::out);
		std::cout << "I'm creating " << in + ".replace" << "as output" << std::endl;
	}
	return (true);
}

void	Filename::search_replace(std::string search, std::string replace)
{
	std::string	tmp;

	while(1){
		my_file >> tmp;
		if (tmp == search)
			tmp = replace;
		outfile << tmp << " ";
		if (my_file.eof())
			break;
	}
	outfile << std::endl;
}