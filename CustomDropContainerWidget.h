#ifndef CUSTOMDROPCONTAINER_WIDGET_H
#define CUSTOMDROPCONTAINER_WIDGET_H

#include <Wt/WContainerWidget.h>
#include <Wt/WText.h>
#include <Wt/WWidget.h>
#include <Wt/WTableCell.h>
#include <Wt/WImage.h>
#include "Board.h"

using namespace Wt;

class CustomDropContainerWidget: public WContainerWidget
{
    public:
        CustomDropContainerWidget (Board* board);
        void dropEvent(WDropEvent event);

    private:
        Board         *boardInstance_;
};

#endif