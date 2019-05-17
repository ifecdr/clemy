#include "pch.h"
#include "dbconn.h"
#include "DashboardData.h"

using namespace ClemyAcademyApp;
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace concurrency;

dbconn::dbconn()
{
	HttpClient^ httpclient = ref new HttpClient();
	Uri ^ uri = ref new Uri("http://localhost:42920/Service.svc/querySql");

	IAsyncOperationWithProgress<String^, HttpProgress> ^accessSQLop = httpclient->GetStringAsync(uri);
	auto operationTask = create_task(accessSQLop);
	operationTask.then([this](String^ Response)
	{
		Vector<DashboardData^>^ vector = ref new Vector<DashboardData^>();

		JsonValue^ jsonvalue = JsonValue::Parse(Response);

		if(jsonvalue->GetObject()->GetNamedBoolean("queryParam") == true)
		{
			// Convert xml string to vector<Article^> object 
			String^ resulttxt = jsonvalue->GetObject()->GetNamedString("querySqlResult");
			XmlDocument^ xdoc = ref new XmlDocument();
			xdoc->LoadXml(resulttxt);
			XmlNodeList^ nodelist = xdoc->GetElementsByTagName("Table");
			for each(auto var in nodelist)
			{
				//DashboardData^ item = ref new DashboardData();
				//item->CourseTitle = var->ChildNodes->Item(0)->InnerText;
				//item->CourseSubHeading = var->ChildNodes->Item(1)->InnerText;

				// Insert an item 
				//vector->Append(item);
				
			}

			// Set ItemsSource of ListView control 
			//lvDataTemplates->ItemsSource  = vector;
		}
		else
		{
			//NotifyUser(L"Error occurs. Please make sure the database has been attached to SQL Server!");
		}

	});
}
