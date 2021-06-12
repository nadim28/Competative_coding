#include<bits/stdc++.h>
//#include <CkBinData.h>
//#include <CkXml.h>

void ChilkatSample(void)
    {
    CkBinData bd;

    //  I created an extra-small GIF image for this example..
    bool success = bd.LoadFile("qa_data/gif/xsmall.gif");
    if (success != true) {
        std::cout << "Failed to load GIF image file." << "\r\n";
        return;
    }

    //  Show GIF bytes as base64:
    std::cout << bd.getEncoded("base64") << "\r\n";

    //  This particular GIF in base64 is this:
    //  R0lGODlhBQAFAMQAAAAAAP////z8/PHx8evr6+jo6OHh4d7e3sPDw8LCwpqamo2NjWxsbGRkZFpaWk1NTUtLS0hISCwsLCQkJP///wAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACH5BAEAABQALAAAAAAFAAUAAAUTYCAYQUBAU1lI0TIgztE8jFImIQA7

    //  Let's begin with an XML string:
    const char *x = "<abc><def>R0lGODlhBQAFAMQAAAAAAP////z8/PHx8evr6+jo6OHh4d7e3sPDw8LCwpqamo2NjWxsbGRkZFpaWk1NTUtLS0hISCwsLCQkJP///wAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACH5BAEAABQALAAAAAAFAAUAAAUTYCAYQUBAU1lI0TIgztE8jFImIQA7</def></abc>";

    CkXml xml;
    success = xml.LoadXml(x);

    //  Get the base64 string:
    const char *gifBase64 = xml.getChildContent("def");

    std::cout << gifBase64 << "\r\n";

    //  Load bd with the base64 decoded bytes.
    bd.Clear();
    bd.AppendEncoded(gifBase64,"base64");

    //  Save to a GIF file.
    success = bd.WriteFile("qa_output/xsmall.gif");
    }
