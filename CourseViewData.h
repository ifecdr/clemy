#pragma once

using namespace Platform;
using namespace Windows::UI::Xaml::Data;


namespace ClemyAcademyApp
{

	public ref class CourseViewData sealed : INotifyPropertyChanged
	{
	public:
		CourseViewData();
		virtual event Windows::UI::Xaml::Data::PropertyChangedEventHandler^ PropertyChanged;

		property String^ coursetitle
		{
			String^ get() { return this->_coursetitle; }
			void set(String^ titlevalue) { _coursetitle = titlevalue; }
		}
		property String^ introduction
		{
			String^ get() { return this->_intro; }
			void set(String^ introvalue) { _intro = introvalue; }
		}
		property String^ tutor
		{
			String^ get() { return this->_tutors; }
			void set(String^ tutorvalue) { _tutors = tutorvalue; }
		}
		property String^ courserefno
		{
			String^ get() { return this->_courseRefno; }
			void set(String^ refnovalue) { _courseRefno = refnovalue; }
		}
		property int noOfModules
		{
			int get() { return this->_NoOfModules; }
			void set(int NoOfModulesvalue) { _NoOfModules = NoOfModulesvalue; }
		}
		
	private:
		String^ _coursetitle;
		String^ _intro;
		String^ _tutors;
		String^ _courseRefno;
		int _NoOfModules;
		
	};

	public ref class CourseModule sealed :INotifyPropertyChanged
	{
	public:
		CourseModule();
		virtual event Windows::UI::Xaml::Data::PropertyChangedEventHandler^ PropertyChanged;

		property String^ Moduleref
		{
			String^ get() { return this->_moduleref; }
			void set(String^ modulerefvalue) { _moduleref = modulerefvalue; }
		}
		property String^ ModuleTItle
		{
			String^ get() { return this->_moduletitle; }
			void set(String^ moduletitlevalue) { _moduletitle = moduletitlevalue; }
		}
		property int NoOfSubModule
		{
			int get() { return this->_noOfsubmodule; }
			void set(int noofsubmodulevalue) { _noOfsubmodule = noofsubmodulevalue; }
		}
	private:
		String^ _moduleref;
		String^ _moduletitle;
		int _noOfsubmodule;
		
	};

	public ref class CourseSubModule sealed : INotifyPropertyChanged
	{
	public:
		CourseSubModule();
		virtual event Windows::UI::Xaml::Data::PropertyChangedEventHandler^ PropertyChanged;

		property String^ SubModuleRef
		{
			String^ get() { return this->_smref; }
			void set(String^ smrefvalue) { _smref = smrefvalue; }
		}
		property String^ SubModuleTitle
		{
			String^ get() { return this->_smtitle; }
			void set(String^ smtitlevalue) { _smtitle = smtitlevalue; }
		}
		property int NoOfContent
		{
			int get() { return this->_noofcontent; }
			void set(int noofcontentvalue) { _noofcontent = noofcontentvalue; }
		}
	private:
		String^ _smref;
		String^ _smtitle;
		int _noofcontent;
		
	};

	public ref class CourseContent sealed : INotifyPropertyChanged
	{
	public:
		CourseContent();
		virtual event Windows::UI::Xaml::Data::PropertyChangedEventHandler^ PropertyChanged;

		property String^ ContetnType
		{
			String^ get() { return this->_contenttype; }
			void set(String^ contenttypevalue) { _contenttype = contenttypevalue; }
		}
		property String^ Contenttype
		{
			String^ get() { return this->_contenttitle; }
			void set(String^ contenttitlevalue) { _contenttitle = contenttitlevalue; }
		}
		property int ChrnoNoOfContent
		{
			int get() { return this->_ChronologicalContent; }
			void set(int chronoContentvalue) { _ChronologicalContent = chronoContentvalue; }
		}
	private:
		String^ _contenttype;
		String^ _contenttitle;
		int _ChronologicalContent;
	};
}