//
// NavMenuItem.h
// Declaration of the NavMenuItem class.
//

#pragma once

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Interop;


namespace ClemyAcademyApp
{
	public ref class NavMenuItem sealed
	{
	public:
		NavMenuItem(String^, Symbol, TypeName);
		NavMenuItem(String^, Symbol, TypeName, Object^);
		property String^ Label;
		property Symbol Symbol;
		property TypeName DestPage;
		property String^ SymbolAsChar
		{
			String^ get();
		}
		property Object^ Arguments;
	};
}
