//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "App.xaml.h"
#include "AppShell.xaml.h"
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

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}


void ClemyAcademyApp::MainPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//Window::Current->Content = ClemyAcademyApp::App::
	auto shell = dynamic_cast<AppShell^>(Window::Current->Content);
	if (shell == nullptr)

	{
		// Create a AppShell to act as the navigation context and navigate to the first page
		shell = ref new AppShell();
		shell->AppFrame->NavigationFailed += ref new Windows::UI::Xaml::Navigation::NavigationFailedEventHandler(this, &MainPage::OnNavigationFailed);
		//if (e->PreviousExecutionState == ApplicationExecutionState::Terminated)
		//{
			// TODO: Restore the saved session state only when appropriate, scheduling the
			// final launch steps after the restore is complete
		//}

	}
	Window::Current->Content = shell;

	if (shell->AppFrame->Content == nullptr)
	{
		// When the navigation stack isn't restored navigate to the first page,
		// suppressing the initial entrance animation and configuring the new
		// page by passing required information as a navigation parameter
		shell->AppFrame->Navigate(TypeName(Dashboard::typeid), ref new Windows::UI::Xaml::Media::Animation::SuppressNavigationTransitionInfo());
	}
	// Ensure the current window is active
	Window::Current->Activate();

	//this->conn = ref new dbconn();
}

void MainPage::OnNavigationFailed(Platform::Object ^sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs ^e)
{
	throw ref new FailureException("Failed to load Page " + e->SourcePageType.Name);
}