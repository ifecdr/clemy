#include "pch.h"
#include "DashboardData.h"

using namespace ClemyAcademyApp;
using namespace Windows::Foundation;
using namespace Windows::Web::Http;


ClemyAcademyApp::signInData::signInData()
{
	
}

ClemyAcademyApp::uprofile::uprofile()
{
	//throw ref new Platform::NotImplementedException();
}


ClemyAcademyApp::CourseInformation::CourseInformation()
{
	//throw ref new Platform::NotImplementedException();
	_courseinfo = ref new Vector<Platform::Object^>();
	_coursetitle = "Introduction to c++";
	_coursesubheading = "Step by step into the world of madness";
	_courserefno = "cpp111";
	_url = "Assets/ai.png";
	DashboardData^ nw = ref new DashboardData(_coursetitle, _courserefno, _coursesubheading, _url);
	_courseinfo->Append(nw);
	

	_coursetitle = "Artifitial Intelligence";
	_coursesubheading = "The art of making computer think";
	_courserefno = "AI101";
	_url = "Assets/ai2.png";
	DashboardData^ nw1 = ref new DashboardData(_coursetitle, _courserefno, _coursesubheading, _url);
	_courseinfo->Append(nw1);

	_coursetitle = "Artifitial Intelligence II";
	_coursesubheading = "The logic behind intelligence";
	_courserefno = "AI111";
	_url = "Assets/ai3.png";
	DashboardData^ nw2 = ref new DashboardData(_coursetitle, _courserefno, _coursesubheading, _url);
	_courseinfo->Append(nw2);

	_coursetitle = "Artifitial Intelligence III";
	_coursesubheading = "The Human brain replication";
	_courserefno = "AI201";
	_url = "Assets/ai4.png";
	DashboardData^ nw3 = ref new DashboardData(_coursetitle, _courserefno, _coursesubheading, _url);
	_courseinfo->Append(nw3);

	_coursetitle = "Artifitial Minds";
	_coursesubheading = "Brain and technology";
	_courserefno = "AI202";
	_url = "Assets/ai5.png";
	DashboardData^ nw4 = ref new DashboardData(_coursetitle, _courserefno, _coursesubheading, _url);
	_courseinfo->Append(nw4);

	_coursetitle = "Robotics";
	_coursesubheading = "Machine and codes";
	_courserefno = "AI301";
	_url = "Assets/ai6.png";
	DashboardData^ nw5 = ref new DashboardData(_coursetitle, _courserefno, _coursesubheading, _url);
	_courseinfo->Append(nw5);
}

void ClemyAcademyApp::CourseInformation::NotifyPropertyChanged(String ^ prop)
{
	//throw ref new Platform::NotImplementedException();
	PropertyChangedEventArgs^ args =
		ref new PropertyChangedEventArgs(prop);
	PropertyChanged(this, args);
}

String^ CourseInformation::CourseTitle::get() { return this->_coursetitle; }
void CourseInformation::CourseTitle::set(String^ value)
{
	if (_coursetitle != value)
	{
		_coursetitle = value;
		NotifyPropertyChanged("CourseTitle");
	}
}

String^ CourseInformation::CourseSubHeading::get() { return this->_coursesubheading; }
void CourseInformation::CourseSubHeading::set(String^ subheadingvalue)
{
	if (_coursesubheading != subheadingvalue)
	{
		_coursesubheading = subheadingvalue;
		NotifyPropertyChanged("CourseSubHeading");
	}
}

String^ CourseInformation::Courserefno::get() { return this->_courserefno; }
void CourseInformation::Courserefno::set(String^ refnovalue)
{
	if (_courserefno != refnovalue)
	{
		_courserefno = refnovalue;
		NotifyPropertyChanged("Courserefno");
	}
}

String^ CourseInformation::Url::get() { return this->_url; }
void CourseInformation::Url::set(String^ urlvalue)
{
	if (_url != urlvalue)
	{
		_url = urlvalue;
		NotifyPropertyChanged("Url");
	}
}