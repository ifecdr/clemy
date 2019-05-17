﻿//
// Dashboard.xaml.cpp
// Implementation of the Dashboard class
//

#include "pch.h"
#include "Dashboard.xaml.h"
#include "dbconn.h"

using namespace ClemyAcademyApp;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

Dashboard::Dashboard()
{
	InitializeComponent();
	connData = ref new CourseInformation();
	
}

