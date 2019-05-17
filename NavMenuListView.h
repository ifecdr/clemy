#pragma once


//
// NavMenuListView.h
// Declaration of the NavMenuListView class.
//

using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Input;

namespace ClemyAcademyApp
{
	namespace Controls
	{
		public ref class NavMenuListView sealed : public ListView
			{
			public:
				NavMenuListView();
				event EventHandler<ListViewItem^>^ ItemInvoked;
				void SetSelectedItem(ListViewItem^ item);
			protected:
				virtual void OnApplyTemplate() override;
				virtual void OnKeyDown(KeyRoutedEventArgs^ e) override;
			private:
				SplitView^ _splitViewHost;
				void ItemClickHandler(Object^ sender, ItemClickEventArgs^ e);
				void InvokeItem(Object^ focusedItem);
				void OnLoaded(Object ^sender, RoutedEventArgs ^e);
				void OnPaneToggled();
				void IsOpenPanePropertyChangedCallback(DependencyObject^ sender, DependencyProperty^ args);
				void TryMoveFocus(FocusNavigationDirection direction);
			};
	}
	
}
