#ifndef BYTEORDER_H
#define BYTEORDER_H

#include <cstdint>

namespace ENDNMSPC
{
	enum Endianess
	{
		BIG_ENDIAN = 0x00000001,
		LITTLE_ENDIAN = 0x01000000
	};

	static const union { uint8_t bytes[4]; uint32_t value; } byte_order = { {0, 0, 0, 1} };
}

#define BYTE_ORDER		ENDNMSPC::byte_order.value
#define BIG_ENDIAN		ENDNMSPC::Endianess::BIG_ENDIAN
#define LITTLE_ENDIAN	ENDNMSPC::Endianess::LITTLE_ENDIAN

#endif //BYTEORDER_H
