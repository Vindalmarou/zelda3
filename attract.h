#pragma once
struct AttractOamInfo {
  int8 x, y;
  uint8 c, f, e;
};


extern const uint16 kMapMode_Zooms1[224];
extern const uint16 kMapMode_Zooms2[224];
void Attract_DrawSpriteSet2(const AttractOamInfo *p, int n);
void Attract_ZeldaPrison_Case0();
void Attract_ZeldaPrison_Case1();
void Attract_ZeldaPrison_DrawA();
void Attract_MaidenWarp_Case0();
void Attract_MaidenWarp_Case1();
void Attract_MaidenWarp_Case2();
void Attract_MaidenWarp_Case3();
void Attract_MaidenWarp_Case4();
void Dungeon_LoadAndDrawEntranceRoom(uint8 a);
void Dungeon_SaveAndLoadLoadAllPalettes(uint8 a, uint8 k);
void Module14_Attract();
void Attract_Fade();
void Attract_InitGraphics();
void Attract_FadeInStep();
void Attract_FadeInSequence();
void Attract_FadeOutSequence();
void Attract_LoadNewScene();
void AttractScene_PolkaDots();
void AttractScene_WorldMap();
void AttractScene_ThroneRoom();
void Attract_PrepFinish();
void Attract_PrepZeldaPrison();
void Attract_PrepMaidenWarp();
void AttractScene_EndOfStory();
void Death_Func31();
void Attract_EnactStory();
void AttractDramatize_PolkaDots();
void AttractDramatize_WorldMap();
void Attract_ThroneRoom();
void AttractDramatize_Prison();
void AttractDramatize_AgahnimAltar();
void Attract_SkipToFileSelect();
void Attract_BuildNextImageTileMap();
void Attract_ShowTimedTextMessage();
void Attract_ControlMapZoom();
void Attract_BuildBackgrounds();
void Attract_TriggerBGDMA(uint16 dstv);
void Attract_DrawPreloadedSprite(const uint8 *xp, const uint8 *yp, const uint8 *cp, const uint8 *fp, const uint8 *ep, int n);
void Attract_DrawZelda();
void Sprite_SimulateSoldier(int k, uint16 x, uint16 y, uint8 dir, uint8 flags, uint8 gfx);
