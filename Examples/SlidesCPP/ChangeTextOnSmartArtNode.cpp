
#include <iostream>
#include <system/console.h>
#include <Export/SaveFormat.h>
#include <DOM/SmartArt/SmartArtQuickStyleType.h>
#include <DOM/SmartArt/SmartArtNode.h>
#include <DOM/SmartArt/SmartArtLayoutType.h>
#include <DOM/SmartArt/SmartArtColorType.h>
#include <DOM/SmartArt/SmartArt.h>
#include <DOM/SmartArt/ISmartArtNodeCollection.h>
#include <DOM/SmartArt/ISmartArtNode.h>
#include <DOM/SmartArt/ISmartArt.h>
#include <DOM/SmartArt/OrganizationChartLayoutType.h>
#include <DOM/Shape.h>
#include <DOM/Presentation.h>
#include <DOM/ITextFrame.h>
#include <DOM/ISlideCollection.h>
#include <DOM/ISlide.h>
#include <DOM/IShapeCollection.h>
#include <DOM/IShape.h>

#include <system/object.h>
#include <system/object_ext.h>
#include <system/special_casts.h>
#include <system/io/path.h>

#include "SlidesExamples.h"

using namespace Aspose::Slides;
using namespace Aspose::Slides::SmartArt;

using namespace System;

const int NodesCount = 5;

void ChangeTextOnSmartArtNode()
{

	// ExStart:ChangeTextOnSmartArtNode
	// The path to the documents directory.
	const String outPath = u"../out/ChangeTextOnSmartArtNode.pptx";

	// Load the desired the presentation
	SharedPtr<Presentation> pres = MakeObject<Presentation>();

	// Add SmartArt BasicProcess 
	System::SharedPtr<Aspose::Slides::SmartArt::ISmartArt>  smart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddSmartArt(10, 10, 400, 300, SmartArtLayoutType::BasicCycle);

	// Accessing SmartArt node at index 0
	System::SharedPtr<Aspose::Slides::SmartArt::ISmartArtNode> node = smart->get_AllNodes()->idx_get(0);

	// Setting the text of the TextFrame 
	node->get_TextFrame()->set_Text(u"Second root node");

	// Save Presentation
	pres->Save(outPath, Aspose::Slides::Export::SaveFormat::Pptx);

	// ExEnd:ChangeTextOnSmartArtNode
}
