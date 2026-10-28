// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourneyCards$$BuildCards
// address: 0x4359a70
// body: available
// range: 0x4359a70-0x4359dbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4359dbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIHomeTabPageJourneyCards__BuildCards(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  if ((DAT_095177f6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174ad0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b1558);
    FUN_03f5c2a4(&DAT_091b1568);
    FUN_03f5c2a4(&DAT_091d4cf8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dca88);
    FUN_03f5c2a4(&DAT_09213dc0);
    DAT_095177f6 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(char *)(param_1 + 200) == '\0') {
    *(undefined1 *)(param_1 + 200) = 1;
    uVar10 = *(undefined8 *)(param_1 + 0xb0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar10,0);
    if ((uVar3 & 1) != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0xa8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar10,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = CakeOrder_Home_Journey_JourneyLevelMap__get_Instance(0);
        if (lVar4 != 0) {
          iVar1 = CakeOrder_Home_Journey_JourneyLevelMap__get_NumMaps(lVar4,0);
          if (-1 < iVar1 + -1) {
            do {
              iVar1 = iVar1 + -1;
              CakeOrder_Home_Journey_JourneyLevelMap__GetRange(&local_a0,lVar4,iVar1,0);
              uStack_78 = uStack_98;
              local_80 = local_a0;
              uStack_68 = uStack_88;
              uStack_70 = uStack_90;
              uVar3 = CakeOrder_Home_Journey_JourneyLevelMap_MapRange__get_HasLevels(&local_80,0);
              uVar10 = local_80;
              if ((uVar3 & 1) != 0) {
                if (((uStack_68 & 0x100000000) == 0) && (*(char *)(param_1 + 0x98) == '\0')) {
                  local_a0 = CONCAT44(local_a0._4_4_,uStack_78._4_4_);
                  uVar11 = FUN_03f5c42c(DAT_09535420,&local_a0);
                  uVar10 = System_String__Format(DAT_09213dc0,uVar10,uVar11,0);
                  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_091835d0);
                  }
                  UnityEngine_Debug__LogWarning(uVar10,0);
                }
                else {
                  uVar3 = CakeOrder_Home_Journey_UIHomeTabPageJourneyCards__IsHidden(local_80);
                  if ((uVar3 & 1) == 0) {
                    uVar10 = *(undefined8 *)(param_1 + 0xa8);
                    uVar11 = *(undefined8 *)(param_1 + 0xb0);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    lVar5 = FUN_04c35338(uVar11,uVar10,DAT_091d4cf8);
                    uStack_98 = uStack_78;
                    local_a0 = local_80;
                    uStack_88 = uStack_68;
                    uStack_90 = uStack_70;
                    uVar10 = CakeOrder_Home_Journey_UIHomeTabPageJourneyCards__GetChapterName
                                       (local_80);
                    lVar6 = CakeOrder_Home_Journey_UIHomeTabPageJourneyCards__FindChapterArt
                                      (param_1,local_80);
                    if (lVar6 == 0) {
                      uVar11 = 0;
                    }
                    else {
                      uVar11 = *(undefined8 *)(lVar6 + 0x18);
                    }
                    uVar2 = CakeOrder_Home_Journey_UIHomeTabPageJourneyCards__IsPreviewOnly
                                      (local_80);
                    if (lVar5 == 0) goto LAB_04359dbc;
                    uStack_b8 = uStack_98;
                    local_c0 = local_a0;
                    uStack_a8 = uStack_88;
                    uStack_b0 = uStack_90;
                    CakeOrder_Home_Journey_UIJourneyRestaurantCard__SetUp
                              (lVar5,&local_c0,uVar10,uVar11,uVar2 & 1);
                    uVar10 = thunk_FUN_03f9944c(DAT_09174ad0);
                    FUN_070a8c30(uVar10,param_1,DAT_091dca88,0);
                    CakeOrder_Home_Journey_UIJourneyRestaurantCard__add_onClickView(lVar5,uVar10);
                    lVar6 = DAT_091b1558;
                    lVar7 = *(long *)(param_1 + 0xc0);
                    if (lVar7 == 0) goto LAB_04359dbc;
                    lVar8 = *(long *)(lVar7 + 0x10);
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_04359dbc;
                    uVar2 = *(uint *)(lVar7 + 0x18);
                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                      plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                      *plVar9 = lVar5;
                      thunk_FUN_03f5d7b8(plVar9,lVar5);
                    }
                    else {
                      FUN_057e0c68(lVar7,lVar5,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                  }
                }
              }
            } while (0 < iVar1);
          }
          if (*(long *)(param_1 + 0xc0) != 0) {
            FUN_057e2674(*(long *)(param_1 + 0xc0),DAT_091b1568);
            return;
          }
        }
LAB_04359dbc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return;
}

