﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "PageHeader.xaml.h"

void ::ClemyAcademyApp::Controls::PageHeader::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///PageHeader.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}


/// <summary>
/// Auto generated class for compiled bindings.
/// </summary>
class ClemyAcademyApp::Controls::PageHeader::PageHeader_obj1_Bindings 
    : public ::XamlBindingInfo::XamlBindingsBase<::ClemyAcademyApp::Controls::PageHeader>
{
public:
    PageHeader_obj1_Bindings()
    {
    }

    void Connect(int __connectionId, ::Platform::Object^ __target)
    {
        switch(__connectionId)
        {
            case 2:
                this->obj2 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                break;
            case 4:
                this->obj4 = safe_cast<::Windows::UI::Xaml::Controls::ContentPresenter^>(__target);
                break;
        }
    }
private:
    // Fields for each control that has bindings.
    ::Windows::UI::Xaml::Controls::Grid^ obj2;
    ::Windows::UI::Xaml::Controls::ContentPresenter^ obj4;

    // Update methods for each path node used in binding steps.
    void Update_(::ClemyAcademyApp::Controls::PageHeader^ obj, int phase)
    {
        if (obj != nullptr)
        {
            if ((phase & (NOT_PHASED | (1 << 0))) != 0)
            {
                this->Update_Background(obj->Background, phase);
                this->Update_VerticalContentAlignment(obj->VerticalContentAlignment, phase);
                this->Update_HorizontalContentAlignment(obj->HorizontalContentAlignment, phase);
                this->Update_Padding(obj->Padding, phase);
                this->Update_HeaderContent(obj->HeaderContent, phase);
            }
        }
    }
    void Update_Background(::Windows::UI::Xaml::Media::Brush^ obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED )) != 0)
        {
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_Controls_Panel_Background(this->obj2, obj, nullptr);
        }
    }
    void Update_VerticalContentAlignment(::Windows::UI::Xaml::VerticalAlignment obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED )) != 0)
        {
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_FrameworkElement_VerticalAlignment(this->obj4, obj);
        }
    }
    void Update_HorizontalContentAlignment(::Windows::UI::Xaml::HorizontalAlignment obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED )) != 0)
        {
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_FrameworkElement_HorizontalAlignment(this->obj4, obj);
        }
    }
    void Update_Padding(::Windows::UI::Xaml::Thickness obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED )) != 0)
        {
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_FrameworkElement_Margin(this->obj4, obj);
        }
    }
    void Update_HeaderContent(::Windows::UI::Xaml::UIElement^ obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED )) != 0)
        {
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_Controls_ContentPresenter_Content(this->obj4, obj, nullptr);
        }
    }
};

void ::ClemyAcademyApp::Controls::PageHeader::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 2:
            {
                this->grid = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
            }
            break;
        case 3:
            {
                this->titleBar = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
            }
            break;
        case 4:
            {
                this->content = safe_cast<::Windows::UI::Xaml::Controls::ContentPresenter^>(__target);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::ClemyAcademyApp::Controls::PageHeader::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    ::XamlBindingInfo::XamlBindings^ bindings = nullptr;
    switch (__connectionId)
    {
        case 1:
            {
                ::Windows::UI::Xaml::Controls::UserControl^ element1 = safe_cast<::Windows::UI::Xaml::Controls::UserControl^>(__target);
                PageHeader_obj1_Bindings* objBindings = new PageHeader_obj1_Bindings();
                objBindings->SetDataRoot(this);
                bindings = ref new ::XamlBindingInfo::XamlBindings(objBindings);
                this->Bindings = bindings;
                element1->Loading += ref new ::Windows::Foundation::TypedEventHandler<::Windows::UI::Xaml::FrameworkElement^, ::Platform::Object^>(bindings, &::XamlBindingInfo::XamlBindings::Loading);
            }
            break;
    }
    return bindings;
}


