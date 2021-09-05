#ifdef GUARD_CUSTOM_CODE_C

static const struct BgTemplate custom_sBgTemplate[] = {
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 30,
        .priority = 0
    }
};
static const u16 custom_sBgPal00[] = INCBIN_U16("graphics/main_menu/unk_8234648.gbapal");
static const u16 custom_sBgPal15[] = INCBIN_U16("graphics/main_menu/unk_8234668.gbapal");

/*static const struct WindowTemplate custom_sWindowTemplate[] = {
    {
        .bg = 0,
        .tilemapLeft = 3,
        .tilemapTop = 1,
        .width = 24,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x001
    }, 
    {
        .bg = 0,
        .tilemapLeft = 3,
        .tilemapTop = 1,
        .width = 24,
        .height = 10,
        .paletteNum = 15,
        .baseBlock = 0x001
    }, 
    {
        .bg = 0,
        .tilemapLeft = 3,
        .tilemapTop = 13,
        .width = 24,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x0f1
    }, 
    {
        .bg = 0,
        .tilemapLeft = 3,
        .tilemapTop = 17,
        .width = 24,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x121
    }, 
    {
        .bg = 0,
        .tilemapLeft = 3,
        .tilemapTop = 15,
        .width = 24,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x001
    }, 
    DUMMY_WIN_TEMPLATE
};*/

const u8 custom_gText_BerryFixProgram[] = _("Berry Fix Program (R/S)");
const u8 custom_gText_MysteryEvent[] = _("Mystery Event (R/S)");
const u8 custom_gText_MysteryGift[] = _("Mystery Gift (FR/LG/E");
const struct ListMenuItem custom_sListMenuItems_RootMenu[] = {
    { custom_gText_BerryFixProgram, 0 },
    { custom_gText_MysteryEvent,    1 },
    { custom_gText_MysteryGift,     2 }
};
const struct ListMenuTemplate custom_sListMenuTemplate_RootMenu = {
    .items = custom_sListMenuItems_RootMenu,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = 3,
    .maxShowed = 3,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 0,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = 0,
    .fontId = 2,
    .cursorKind = 0
};
const struct WindowTemplate custom_sWindowTemplate_RootMenu = {
    .bg = 0x00,
    .tilemapLeft = 0x08,
    .tilemapTop = 0x05,
    .width = 0x0e,
    .height = 0x05,
    .paletteNum = 0x0e,
    .baseBlock = 0x0155
};

#endif // GUARD_CUSTOM_CODE_C
