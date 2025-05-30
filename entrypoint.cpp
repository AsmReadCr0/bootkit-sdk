#include <iostream>
#include "communication/edk.hpp"
#define LocalPlayer  0x23e7ff8
#define ENTITYLSIT  0x1f14e08

int main()
{
	m_vm.get()->attach_vm((L"process.exe"));

	while (true)
	{
		std::cout << m_vm.get()->m_image_base << "\n";
		
		m_vm.get()->read<std::uintptr_t>(m_vm.get()->m_image_base + 0xfff318);
	}	
}