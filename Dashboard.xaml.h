//
// Dashboard.xaml.h
// Declaration of the Dashboard class
//

#pragma once

#include "Dashboard.g.h"
#include "DashboardData.h"

namespace ClemyAcademyApp
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class Dashboard sealed
	{
	public:
		Dashboard();
		property CourseInformation^ ConnDash
		{
			CourseInformation^ get() { return this->connData; }
		}

	private:
		CourseInformation^ connData;
		
		
	};
}
