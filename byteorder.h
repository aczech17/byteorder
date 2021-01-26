#ifndef BYTE_ORDER_H
#define BYTE_ORDER_H

#include <cstdint>

namespace ENDNMSPC
{
	enum class Endianess
	{
		BIG_ENDIAN, LITTLE_ENDIAN
	};
	
	Endianess get_byte_order()
	{
		uint32_t i = 1;
		uint8_t* b = (uint8_t*)&i;
		
		if(b[0] == 0)
			return Endianess::BIG_ENDIAN;
		
		return Endianess::LITTLE_ENDIAN;
	}
};

#define BYTE_ORDER 		ENDNMSPC::get_byte_order()
#define BIG_ENDIAN 		ENDNMSPC::Endianess::BIG_ENDIAN
#define LITTLE_ENDIAN 	ENDNMSPC::Endianess::LITTLE_ENDIAN

#endif //BYTE_ORDER_H
