#pragma once
#include <odbcinst.h>
//#import <odbccp32.dll>

using namespace Platform;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::Web::Syndication;
using namespace Windows::UI::Xaml::Media::Imaging;
using namespace Windows::Foundation;
using namespace Windows::Web::Http;
using namespace Platform::Collections;
using namespace Windows::Foundation::Collections;

namespace ClemyAcademyApp
{
	[Windows::UI::Xaml::Data::Bindable]
	public ref class DashboardData sealed
	{
	public:
		DashboardData(String^ coursetitle, String^ courserefno, String^ coursesubheading, String^ url):
			_coursetitle{coursetitle}, _courserefno{courserefno} , _coursesubheading{coursesubheading}, _url{url}{}

		property String^ CourseTitle
		{
			String^ get() { return this->_coursetitle; };
			void set(String^ value) { _coursetitle = value; };// include NotifyPropertyChanged call after the semi colon
		}
		property String^ Courserefno
		{
			String^ get() { return this->_courserefno; };
			void set(String^ refnovalue) { _courserefno = refnovalue; };
		}
		property String^ CourseSubHeading
		{
			String^ get() { return this->_coursesubheading; };
			void set(String^ subheadingvalue) { _coursesubheading = subheadingvalue; };
		}
		property String^ Url
		{
			String^ get() { return this->_url; };
			void set(String^ urlvalue) { _url = urlvalue; };
		}
	private:
		String^ _coursetitle;
		String^ _courserefno;
		String^ _coursesubheading;
		String^ _url;
	};

	[Windows::UI::Xaml::Data::Bindable]
	public ref class CourseInformation sealed : INotifyPropertyChanged
	{
	public:
		CourseInformation();
		virtual event Windows::UI::Xaml::Data::PropertyChangedEventHandler^ PropertyChanged;

		property String^ CourseTitle
		{
			String^ get();
			void set(String^ value);// include NotifyPropertyChanged call after the semi colon
		}
		property String^ Courserefno
		{
			String^ get();
			void set(String^ refnovalue);
		}
		property String^ CourseSubHeading
		{
			String^ get();
			void set(String^ subheadingvalue);
		}
		property String^ Url
		{
			String^ get();
			void set(String^ urlvalue);
		}

		property IObservableVector<Platform::Object^>^ OpenDashboard
		{
			IObservableVector<Platform::Object^> ^get()
			{
				return _courseinfo;
			}
		}
		property IObservableVector<Platform::Object^>^ CourseImages
		{
			IObservableVector<Platform::Object^>^ get()
			{
				return _couseimageurl;
			}
		}

	private:
		String^ _coursetitle;
		String^ _courserefno;
		String^ _coursesubheading;
		String^ _url;
		Vector<Platform::Object^>^ _courseinfo;
		Vector<Platform::Object^>^ _couseimageurl;
		void NotifyPropertyChanged(String^ prop);
	};
	[BindableAttribute]
	public ref class signInData sealed : INotifyPropertyChanged
	{
	public:
		signInData();
		virtual event Windows::UI::Xaml::Data::PropertyChangedEventHandler^ PropertyChanged;

		property String^ username
		{
			String^ get() { return this->_uname; }
			void set(String^ nameValue) { _uname = nameValue; } // include NotifyPropertyChange call after the semicolon
		}

		property String^ pass
		{
			String^ get() { return this->_pass; }
			void set(String^ passValue) { _pass = passValue; } // include NotifyPropertyChange call after the semicolon
		}

		property String^ category
		{
			String^ get() { return this->_cat; }
			void set(String^ catValue) { _cat = catValue; } //include NotifyProertyChange call after the semicolon
		}
	private:
		String^ _uname;
		String^ _pass;
		String^ _cat;
	};
	[BindableAttribute]
	public ref class uprofile sealed : INotifyPropertyChanged
	{
	public:
		uprofile();
		virtual event Windows::UI::Xaml::Data::PropertyChangedEventHandler^ PropertyChanged;

		property String^ username
		{
			String^ get() { return this->_Uname; }
			void set(String^ unameValue) { _Uname = unameValue; } // include the notifyPropertyChange
		}
		property String^ fullname
		{
			String^ get() { return this->_Fullname; }
			void set(String^ FnameValue) { _Fullname = FnameValue; }
		}
		property String^ email
		{
			String^ get() { return this->_email; }
			void set(String^ emailValue) { _email = emailValue; }
		}
		property String^ pass
		{
			String^ get() { return this->_pass; }
			void set(String^ passValue) { _pass = passValue; }
		}
		property String^ language
		{
			String^ get() { return this->_Language; }
			void set(String^ langValue) { _Language = langValue; }
		}
		property String^ Fullname
		{
			String^ get() { return this->_Fullname; }
			void set(String^ FnameValue) { _Fullname = FnameValue; }
		}
		property String^ country
		{
			String^ get() { return this->_country; }
			void set(String^ countryValue) { _country = countryValue; }
		}
		property String^ Education
		{
			String^ get() { return this->_CompletedEdu; }
			void set(String^ eduValue) { _CompletedEdu = eduValue; }
		}
		property String^ gender
		{
			String^ get() { return this->_gender; }
			void set(String^ genderValue) { _gender = genderValue; }
		}
		property Windows::Foundation::DateTime DOB
		{
			Windows::Foundation::DateTime get() { return this->_birthYear; }
			void set(Windows::Foundation::DateTime DOBValue) { _birthYear = DOBValue; }
		}
		property String^ completedcourses
		{
			String^ get() { return this->_completdcourses; }
			void set(String^ completedcoursesValue) { _completdcourses = completedcoursesValue; }
		}
	private:
		String^ _Uname;
		String^ _Fullname;
		String^ _email;
		String^ _pass;
		String^ _Language;
		String^ _country;
		String^ _CompletedEdu;
		String^ _gender;
		Windows::Foundation::DateTime _birthYear;
		String^ _completdcourses;
	};

	
}

