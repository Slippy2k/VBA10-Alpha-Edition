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

#include "PurchasePage.xaml.h"

void ::VBA10::PurchasePage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///PurchasePage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::VBA10::PurchasePage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                this->LayoutRoot = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
            }
            break;
        case 2:
            {
                this->titleBar = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
            }
            break;
        case 3:
            {
                this->txtLoading = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 4:
            {
                this->txtError = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 5:
            {
                this->pics = safe_cast<::Windows::UI::Xaml::Controls::ItemsControl^>(__target);
            }
            break;
        case 6:
            {
                ::Windows::UI::Xaml::Controls::Button^ element6 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(element6))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::VBA10::PurchasePage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&PurchasePage::ButtonBuyNow_Clicked);
            }
            break;
        case 7:
            {
                this->title = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::VBA10::PurchasePage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}


