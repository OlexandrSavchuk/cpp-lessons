#include "stdafx.h"
#include "DlgTwo.h"
#include "HIMLAPI.h"

namespace ATLConterol = UI;





void CDlgTwo::InitControls() {

    CRect rc;
    
    GetClientRect(&rc);

    // reserve space for ok and cancel buttons
    InflateRect(&rc, -20, -20);
    rc.bottom -= 2 * VERTICAL_GAP + BUTTON_HEIGHT;

    UINT STYLES = TVS_LINESATROOT | TVS_HASBUTTONS | TVS_HASLINES | TVS_INFOTIP | TVS_SHOWSELALWAYS;
    tree.Create(m_hWnd, rc, 0, STYLES | WS_VISIBLE | WS_CHILD | WS_BORDER);
    assert(tree.IsWindow());
/*
    SHFILEINFO shfi = {0};
    HIMAGELIST hSysImgList = (HIMAGELIST)SHGetFileInfo(_T("C:\\"), 0, &shfi, sizeof(SHFILEINFO), SHGFI_SYSICONINDEX |  SHGFI_LARGEICON |  SHGFI_ICON);  // SHGFI_SMALLICON |
*/

    HIMAGELIST himlLarge = 0;
    HIMAGELIST himlSmall = 0;

    GetSystemImageLists(&himlLarge, &himlSmall);

    UI::CImageList imageList(himlLarge);

    tree.SetImageList(imageList, TVSIL_NORMAL);

    UI::CTreeItem root = tree.GetRootItem();
    int count = imageList.GetImageCount();
    
    std::wostringstream wss;
    int index = 0;
    for(int i = 0; i < 10; ++i) {
        wss.str(L"");
        wss << L"level 0, item " << i;
        UI::CTreeItem item = root.AddTail(wss.str().c_str(), index++ % count);
        for(int j = 0; j < 12; ++j) {
            wss.str(L"");
            wss << L"level 1, item " << j;
            UI::CTreeItem subitem = item.AddTail(wss.str().c_str(), index++ % count);
            for(int k = 0; k < 12; ++k) {
                wss.str(L"");
                wss << L"level 2, item " << k;
                subitem.AddTail(wss.str().c_str(), index++ % count);
            }
        }    
    }
}


 void CDlgTwo::processOk() {

    MessageBox(_T("CDlgTwo::processOk() "));

}

