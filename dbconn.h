#pragma once

using namespace Platform;
using namespace Platform::Collections;
using namespace Windows::Web::Http;
using namespace Windows::Data::Json;
using namespace Windows::Data::Xml::Dom;
using namespace Windows::Data::Text;

namespace ClemyAcademyApp
{
	[Windows::Foundation::Metadata::WebHostHiddenAttribute]
	public ref class dbconn sealed
	{
	public:
		dbconn();
	};

}