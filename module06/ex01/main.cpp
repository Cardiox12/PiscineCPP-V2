#include <iostream>
#include <stdint.h>

struct Data {
	const char	*name;
	int			age;
};

uintptr_t serialize(Data* ptr){
	return ( reinterpret_cast<uintptr_t>( ptr ) );
}

Data	*deserialize(uintptr_t raw){
	return ( reinterpret_cast<Data*>( raw ) );
}

void	show_data(Data *data){
	std::cout << "Name: " << data->name << std::endl;
	std::cout << "Age : " << data->age << std::endl;
	std::cout << "Addr: " << data << std::endl;
}

int		main(void)
{
	Data data = {"Tony", 22};
	Data *data_deserialized = deserialize( serialize( &data ) );


	show_data(&data);
	show_data(data_deserialized);
	return (0);
}
