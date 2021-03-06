﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlTypeInfo.g.h"

#include "AddNewCourse.xaml.h"
#include "AdminView.xaml.h"
#include "AppShell.xaml.h"
#include "CourseView.xaml.h"
#include "Dashboard.xaml.h"
#include "PageHeader.xaml.h"
#include "App.xaml.h"
#include "MainPage.xaml.h"
#include "UserProfile.xaml.h"
#include "XamlBindingInfo.g.hpp"
#include "AddNewCourse.g.hpp"
#include "AdminView.g.hpp"
#include "AppShell.g.hpp"
#include "CourseView.g.hpp"
#include "Dashboard.g.hpp"
#include "PageHeader.g.hpp"
#include "App.g.hpp"
#include "MainPage.g.hpp"
#include "UserProfile.g.hpp"

template<typename T>
::Platform::Object^ ActivateType()
{
    return ref new T;
}

template<typename TInstance, typename TItem>
void CollectionAdd(::Platform::Object^ instance, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Append((TItem)item);
}

template<typename TInstance, typename TKey, typename TItem>
void DictionaryAdd(::Platform::Object^ instance, ::Platform::Object^ key, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Insert((TKey)key, (TItem)item);
}

template<typename T>
::Platform::Object^ FromStringConverter(::XamlTypeInfo::InfoProvider::XamlUserType^ userType, ::Platform::String^ input)
{
    return ref new ::Platform::Box<T>((T)userType->CreateEnumUIntFromString(input));
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_DOB(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->DOB);
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_HeaderContent(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->HeaderContent;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_AppFrame(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->AppFrame;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_ConnDash(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->ConnDash;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Url(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Url;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_CourseSubHeading(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->CourseSubHeading;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Courserefno(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Courserefno;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_CourseTitle(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->CourseTitle;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_CourseImages(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->CourseImages;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_OpenDashboard(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->OpenDashboard;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_category(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->category;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_pass(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->pass;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_username(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->username;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_completedcourses(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->completedcourses;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_gender(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->gender;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Education(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Education;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_country(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->country;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Fullname(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Fullname;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_language(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->language;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_email(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->email;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_fullname(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->fullname;
}

template<typename TDeclaringType, typename TValue>
void SetValueTypeMember_DOB(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->DOB = safe_cast<::Platform::IBox<TValue>^>(value)->Value;
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_HeaderContent(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->HeaderContent = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_Url(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->Url = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_CourseSubHeading(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->CourseSubHeading = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_Courserefno(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->Courserefno = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_CourseTitle(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->CourseTitle = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_category(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->category = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_pass(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->pass = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_username(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->username = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_completedcourses(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->completedcourses = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_gender(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->gender = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_Education(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->Education = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_country(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->country = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_Fullname(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->Fullname = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_language(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->language = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_email(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->email = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_fullname(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->fullname = safe_cast<TValue^>(value);
}

struct TypeInfo
{
    PCWSTR  typeName;
    PCWSTR contentPropertyName;
    ::Platform::Object^ (*activator)();
    void (*collectionAdd)(::Platform::Object^, ::Platform::Object^);
    void (*dictionaryAdd)(::Platform::Object^, ::Platform::Object^, ::Platform::Object^);
    ::Platform::Object^ (*fromStringConverter)(::XamlTypeInfo::InfoProvider::XamlUserType^, ::Platform::String^);
    int     baseTypeIndex;
    int     firstMemberIndex;
    int     firstEnumValueIndex;
    ::Windows::UI::Xaml::Interop::TypeKind kindofType;
    bool    isLocalType;
    bool    isSystemType;
    bool    isReturnTypeStub;
    bool    isBindable;
};

TypeInfo TypeInfos[] = 
{
    //   0
    L"Object", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   1
    L"String", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   2
    L"System.ValueType", L"",
    nullptr, nullptr, nullptr, nullptr,
    0, // Object
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, false, false, false,
    //   3
    L"ClemyAcademyApp.AppShell", L"",
    &ActivateType<::ClemyAcademyApp::AppShell>, nullptr, nullptr, nullptr,
    14, // Windows.UI.Xaml.Controls.Page
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //   4
    L"ClemyAcademyApp.MainPage", L"",
    &ActivateType<::ClemyAcademyApp::MainPage>, nullptr, nullptr, nullptr,
    14, // Windows.UI.Xaml.Controls.Page
    1, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //   5
    L"ClemyAcademyApp.uprofile", L"",
    &ActivateType<::ClemyAcademyApp::uprofile>, nullptr, nullptr, nullptr,
    0, // Object
    1, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, true, 
    //   6
    L"Windows.UI.Xaml.UIElement", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    12, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   7
    L"ClemyAcademyApp.AdminView", L"",
    &ActivateType<::ClemyAcademyApp::AdminView>, nullptr, nullptr, nullptr,
    14, // Windows.UI.Xaml.Controls.Page
    12, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //   8
    L"ClemyAcademyApp.Dashboard", L"",
    &ActivateType<::ClemyAcademyApp::Dashboard>, nullptr, nullptr, nullptr,
    14, // Windows.UI.Xaml.Controls.Page
    12, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //   9
    L"ClemyAcademyApp.CourseView", L"",
    &ActivateType<::ClemyAcademyApp::CourseView>, nullptr, nullptr, nullptr,
    14, // Windows.UI.Xaml.Controls.Page
    13, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //  10
    L"ClemyAcademyApp.signInData", L"",
    &ActivateType<::ClemyAcademyApp::signInData>, nullptr, nullptr, nullptr,
    0, // Object
    13, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, true, 
    //  11
    L"ClemyAcademyApp.UserProfile", L"",
    &ActivateType<::ClemyAcademyApp::UserProfile>, nullptr, nullptr, nullptr,
    14, // Windows.UI.Xaml.Controls.Page
    16, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //  12
    L"Windows.Foundation.DateTime", L"",
    nullptr, nullptr, nullptr, nullptr,
    2, // System.ValueType
    16, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, false, true,  false,
    //  13
    L"ClemyAcademyApp.AddNewCourse", L"",
    &ActivateType<::ClemyAcademyApp::AddNewCourse>, nullptr, nullptr, nullptr,
    14, // Windows.UI.Xaml.Controls.Page
    16, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //  14
    L"Windows.UI.Xaml.Controls.Page", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    16, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //  15
    L"ClemyAcademyApp.DashboardData", L"",
    nullptr, nullptr, nullptr, nullptr,
    0, // Object
    16, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, true, 
    //  16
    L"Windows.UI.Xaml.Controls.Frame", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    20, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //  17
    L"Windows.UI.Xaml.Controls.ListView", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    20, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //  18
    L"ClemyAcademyApp.CourseInformation", L"",
    &ActivateType<::ClemyAcademyApp::CourseInformation>, nullptr, nullptr, nullptr,
    0, // Object
    20, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, true, 
    //  19
    L"ClemyAcademyApp.Controls.PageHeader", L"",
    &ActivateType<::ClemyAcademyApp::Controls::PageHeader>, nullptr, nullptr, nullptr,
    20, // Windows.UI.Xaml.Controls.UserControl
    26, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //  20
    L"Windows.UI.Xaml.Controls.UserControl", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    27, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //  21
    L"Windows.UI.Xaml.Controls.ItemsControl", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    27, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //  22
    L"ClemyAcademyApp.Controls.NavMenuListView", L"",
    &ActivateType<::ClemyAcademyApp::Controls::NavMenuListView>, nullptr, nullptr, nullptr,
    17, // Windows.UI.Xaml.Controls.ListView
    27, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //  23
    L"Windows.Foundation.Collections.IObservableVector`1<Object>", L"",
    nullptr, &CollectionAdd<::Windows::Foundation::Collections::IObservableVector<::Platform::Object^>, ::Platform::Object^>, nullptr, nullptr,
    -1,
    27, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, false, true,  false,
    //  Last type here is for padding
    L"", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1, 
    27, 0,::Windows::UI::Xaml::Interop::TypeKind::Custom,
    false, false, false, false,
};

UINT TypeInfoLookup[] = { 
      0,   //   0
      0,   //   1
      0,   //   2
      0,   //   3
      0,   //   4
      0,   //   5
      0,   //   6
      2,   //   7
      2,   //   8
      2,   //   9
      2,   //  10
      2,   //  11
      2,   //  12
      2,   //  13
      2,   //  14
      2,   //  15
      2,   //  16
      3,   //  17
      3,   //  18
      3,   //  19
      3,   //  20
      3,   //  21
      3,   //  22
      3,   //  23
      3,   //  24
      6,   //  25
      9,   //  26
     11,   //  27
     13,   //  28
     14,   //  29
     16,   //  30
     17,   //  31
     17,   //  32
     17,   //  33
     19,   //  34
     19,   //  35
     20,   //  36
     21,   //  37
     22,   //  38
     22,   //  39
     22,   //  40
     23,   //  41
     23,   //  42
     23,   //  43
     23,   //  44
     23,   //  45
     23,   //  46
     23,   //  47
     23,   //  48
     23,   //  49
     23,   //  50
     23,   //  51
     23,   //  52
     23,   //  53
     23,   //  54
     23,   //  55
     23,   //  56
     23,   //  57
     23,   //  58
     24,   //  59
};

struct MemberInfo 
{
    PCWSTR shortName;
    ::Platform::Object^ (*getter)(::Platform::Object^);
    void (*setter)(::Platform::Object^, ::Platform::Object^);
    int typeIndex;
    int targetTypeIndex;
    bool isReadOnly;
    bool isDependencyProperty;
    bool isAttachable;
};

MemberInfo MemberInfos[] = 
{
    //   0 - ClemyAcademyApp.AppShell.AppFrame
    L"AppFrame",
    &GetReferenceTypeMember_AppFrame<::ClemyAcademyApp::AppShell>,
    nullptr,
    16, // Windows.UI.Xaml.Controls.Frame
    -1,
    true,  false, false,
    //   1 - ClemyAcademyApp.uprofile.completedcourses
    L"completedcourses",
    &GetReferenceTypeMember_completedcourses<::ClemyAcademyApp::uprofile>,
    &SetReferenceTypeMember_completedcourses<::ClemyAcademyApp::uprofile, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //   2 - ClemyAcademyApp.uprofile.DOB
    L"DOB",
    &GetValueTypeMember_DOB<::ClemyAcademyApp::uprofile, ::Windows::Foundation::DateTime>,
    &SetValueTypeMember_DOB<::ClemyAcademyApp::uprofile, ::Windows::Foundation::DateTime>,
    12, // Windows.Foundation.DateTime
    -1,
    false, false, false,
    //   3 - ClemyAcademyApp.uprofile.gender
    L"gender",
    &GetReferenceTypeMember_gender<::ClemyAcademyApp::uprofile>,
    &SetReferenceTypeMember_gender<::ClemyAcademyApp::uprofile, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //   4 - ClemyAcademyApp.uprofile.Education
    L"Education",
    &GetReferenceTypeMember_Education<::ClemyAcademyApp::uprofile>,
    &SetReferenceTypeMember_Education<::ClemyAcademyApp::uprofile, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //   5 - ClemyAcademyApp.uprofile.country
    L"country",
    &GetReferenceTypeMember_country<::ClemyAcademyApp::uprofile>,
    &SetReferenceTypeMember_country<::ClemyAcademyApp::uprofile, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //   6 - ClemyAcademyApp.uprofile.Fullname
    L"Fullname",
    &GetReferenceTypeMember_Fullname<::ClemyAcademyApp::uprofile>,
    &SetReferenceTypeMember_Fullname<::ClemyAcademyApp::uprofile, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //   7 - ClemyAcademyApp.uprofile.language
    L"language",
    &GetReferenceTypeMember_language<::ClemyAcademyApp::uprofile>,
    &SetReferenceTypeMember_language<::ClemyAcademyApp::uprofile, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //   8 - ClemyAcademyApp.uprofile.pass
    L"pass",
    &GetReferenceTypeMember_pass<::ClemyAcademyApp::uprofile>,
    &SetReferenceTypeMember_pass<::ClemyAcademyApp::uprofile, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //   9 - ClemyAcademyApp.uprofile.email
    L"email",
    &GetReferenceTypeMember_email<::ClemyAcademyApp::uprofile>,
    &SetReferenceTypeMember_email<::ClemyAcademyApp::uprofile, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  10 - ClemyAcademyApp.uprofile.fullname
    L"fullname",
    &GetReferenceTypeMember_fullname<::ClemyAcademyApp::uprofile>,
    &SetReferenceTypeMember_fullname<::ClemyAcademyApp::uprofile, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  11 - ClemyAcademyApp.uprofile.username
    L"username",
    &GetReferenceTypeMember_username<::ClemyAcademyApp::uprofile>,
    &SetReferenceTypeMember_username<::ClemyAcademyApp::uprofile, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  12 - ClemyAcademyApp.Dashboard.ConnDash
    L"ConnDash",
    &GetReferenceTypeMember_ConnDash<::ClemyAcademyApp::Dashboard>,
    nullptr,
    18, // ClemyAcademyApp.CourseInformation
    -1,
    true,  false, false,
    //  13 - ClemyAcademyApp.signInData.category
    L"category",
    &GetReferenceTypeMember_category<::ClemyAcademyApp::signInData>,
    &SetReferenceTypeMember_category<::ClemyAcademyApp::signInData, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  14 - ClemyAcademyApp.signInData.pass
    L"pass",
    &GetReferenceTypeMember_pass<::ClemyAcademyApp::signInData>,
    &SetReferenceTypeMember_pass<::ClemyAcademyApp::signInData, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  15 - ClemyAcademyApp.signInData.username
    L"username",
    &GetReferenceTypeMember_username<::ClemyAcademyApp::signInData>,
    &SetReferenceTypeMember_username<::ClemyAcademyApp::signInData, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  16 - ClemyAcademyApp.DashboardData.Url
    L"Url",
    &GetReferenceTypeMember_Url<::ClemyAcademyApp::DashboardData>,
    &SetReferenceTypeMember_Url<::ClemyAcademyApp::DashboardData, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  17 - ClemyAcademyApp.DashboardData.CourseSubHeading
    L"CourseSubHeading",
    &GetReferenceTypeMember_CourseSubHeading<::ClemyAcademyApp::DashboardData>,
    &SetReferenceTypeMember_CourseSubHeading<::ClemyAcademyApp::DashboardData, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  18 - ClemyAcademyApp.DashboardData.Courserefno
    L"Courserefno",
    &GetReferenceTypeMember_Courserefno<::ClemyAcademyApp::DashboardData>,
    &SetReferenceTypeMember_Courserefno<::ClemyAcademyApp::DashboardData, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  19 - ClemyAcademyApp.DashboardData.CourseTitle
    L"CourseTitle",
    &GetReferenceTypeMember_CourseTitle<::ClemyAcademyApp::DashboardData>,
    &SetReferenceTypeMember_CourseTitle<::ClemyAcademyApp::DashboardData, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  20 - ClemyAcademyApp.CourseInformation.CourseImages
    L"CourseImages",
    &GetReferenceTypeMember_CourseImages<::ClemyAcademyApp::CourseInformation>,
    nullptr,
    23, // Windows.Foundation.Collections.IObservableVector`1<Object>
    -1,
    true,  false, false,
    //  21 - ClemyAcademyApp.CourseInformation.OpenDashboard
    L"OpenDashboard",
    &GetReferenceTypeMember_OpenDashboard<::ClemyAcademyApp::CourseInformation>,
    nullptr,
    23, // Windows.Foundation.Collections.IObservableVector`1<Object>
    -1,
    true,  false, false,
    //  22 - ClemyAcademyApp.CourseInformation.Url
    L"Url",
    &GetReferenceTypeMember_Url<::ClemyAcademyApp::CourseInformation>,
    &SetReferenceTypeMember_Url<::ClemyAcademyApp::CourseInformation, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  23 - ClemyAcademyApp.CourseInformation.CourseSubHeading
    L"CourseSubHeading",
    &GetReferenceTypeMember_CourseSubHeading<::ClemyAcademyApp::CourseInformation>,
    &SetReferenceTypeMember_CourseSubHeading<::ClemyAcademyApp::CourseInformation, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  24 - ClemyAcademyApp.CourseInformation.Courserefno
    L"Courserefno",
    &GetReferenceTypeMember_Courserefno<::ClemyAcademyApp::CourseInformation>,
    &SetReferenceTypeMember_Courserefno<::ClemyAcademyApp::CourseInformation, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  25 - ClemyAcademyApp.CourseInformation.CourseTitle
    L"CourseTitle",
    &GetReferenceTypeMember_CourseTitle<::ClemyAcademyApp::CourseInformation>,
    &SetReferenceTypeMember_CourseTitle<::ClemyAcademyApp::CourseInformation, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //  26 - ClemyAcademyApp.Controls.PageHeader.HeaderContent
    L"HeaderContent",
    &GetReferenceTypeMember_HeaderContent<::ClemyAcademyApp::Controls::PageHeader>,
    &SetReferenceTypeMember_HeaderContent<::ClemyAcademyApp::Controls::PageHeader, ::Windows::UI::Xaml::UIElement>,
    6, // Windows.UI.Xaml.UIElement
    -1,
    false, true,  false,
};

PCWSTR GetShortName(PCWSTR longName)
{
    PCWSTR separator = wcsrchr(longName, '.');
    return separator != nullptr ? separator + 1: longName;
}

TypeInfo* GetTypeInfo(::Platform::String^ typeName)
{
    int typeNameLength = typeName->Length();
    if (typeNameLength < _countof(TypeInfoLookup) - 1)
    {
        for (UINT i = TypeInfoLookup[typeNameLength]; i < TypeInfoLookup[typeNameLength+1]; i++)
        {
            if (typeName == ::Platform::StringReference(TypeInfos[i].typeName))
            {
                return &TypeInfos[i];
            }
        }
    }
    return nullptr;
}

MemberInfo* GetMemberInfo(::Platform::String^ longMemberName)
{
    for (int lastDotIndex = longMemberName->Length(); lastDotIndex >= 0; lastDotIndex--)
    {
        if (longMemberName->Data()[lastDotIndex] == '.')
        {
            TypeInfo* pTypeInfo = GetTypeInfo(ref new ::Platform::String(longMemberName->Data(), lastDotIndex));
            TypeInfo* pNextTypeInfo = pTypeInfo + 1;
            if (pTypeInfo)
            {
                PCWSTR shortMemberName = GetShortName(longMemberName->Data());
                for (int i = pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
                {
                    if (wcscmp(shortMemberName, MemberInfos[i].shortName) == 0)
                    {
                        return &MemberInfos[i];
                    }
                }
            }
            break;
        }
    }
    return nullptr;
}

::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::OtherProviders::get()
{
    if(_otherProviders == nullptr)
    {
        auto otherProviders = ref new ::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>();
        _otherProviders = otherProviders;
    }
    return _otherProviders;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlType(::Platform::String^ typeName)
{
    TypeInfo* pTypeInfo = GetTypeInfo(typeName);
    TypeInfo* pNextTypeInfo = pTypeInfo + 1;
    if (pTypeInfo == nullptr || pNextTypeInfo == nullptr)
    {
        return nullptr;
    }
    else if (pTypeInfo->isSystemType)
    {
        return ref new ::XamlTypeInfo::InfoProvider::XamlSystemBaseType(typeName);
    }
    else
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(
            this, 
            ::Platform::StringReference(pTypeInfo->typeName), 
            this->GetXamlTypeByName(::Platform::StringReference(pTypeInfo->baseTypeIndex >= 0 ? TypeInfos[pTypeInfo->baseTypeIndex].typeName : L"")));
        userType->KindOfType = pTypeInfo->kindofType;
        userType->Activator = pTypeInfo->activator;
        userType->CollectionAdd = pTypeInfo->collectionAdd;
        userType->DictionaryAdd = pTypeInfo->dictionaryAdd;
        userType->FromStringConverter = pTypeInfo->fromStringConverter;
        userType->ContentPropertyName = ::Platform::StringReference(pTypeInfo->contentPropertyName);
        userType->IsLocalType = pTypeInfo->isLocalType;
        userType->IsReturnTypeStub = pTypeInfo->isReturnTypeStub;
        userType->IsBindable = pTypeInfo->isBindable;
        int nextMemberIndex = pTypeInfo->firstMemberIndex;
        for (int i=pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
        {
            userType->AddMemberName(::Platform::StringReference(MemberInfos[i].shortName));
            nextMemberIndex++;
        }
        return userType;
    }
}

::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlMember(::Platform::String^ longMemberName)
{
    ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = nullptr;
    MemberInfo* pMemberInfo = GetMemberInfo(longMemberName);
    if (pMemberInfo != nullptr)
    {
        xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(
            this,
            ::Platform::StringReference(pMemberInfo->shortName),
            ::Platform::StringReference(TypeInfos[pMemberInfo->typeIndex].typeName));
        xamlMember->Getter = pMemberInfo->getter;
        xamlMember->Setter = pMemberInfo->setter;
        xamlMember->TargetTypeName = pMemberInfo->targetTypeIndex >= 0 ? ::Platform::StringReference(TypeInfos[pMemberInfo->targetTypeIndex].typeName) : L"";
        xamlMember->IsReadOnly = pMemberInfo->isReadOnly;
        xamlMember->IsDependencyProperty = pMemberInfo->isDependencyProperty;
        xamlMember->IsAttachable = pMemberInfo->isAttachable;
    }
    return xamlMember;
}

