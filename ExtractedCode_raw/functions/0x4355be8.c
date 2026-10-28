// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourney$$BuildSections
// address: 0x4355be8
// body: available
// range: 0x4355be8-0x4356067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4356064 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIHomeTabPageJourney__BuildSections(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  undefined8 local_d8;
  undefined4 local_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  byte local_bc;
  undefined2 local_bb;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined4 local_b0;
  int iStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_9c;
  undefined2 local_9b;
  undefined1 local_99;
  int local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  int iStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined2 local_74;
  undefined1 local_72;
  undefined8 local_70;
  undefined4 local_68;
  
  if ((DAT_095177dc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174ab0);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b14f8);
    FUN_03f5c2a4(&DAT_091d4ce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dca68);
    FUN_03f5c2a4(&DAT_09213dc0);
    FUN_03f5c2a4(&DAT_092195f0);
    DAT_095177dc = 1;
  }
  local_68 = 0;
  local_70 = 0;
  local_74 = 0;
  local_72 = 0;
  if (*(char *)(param_1 + 0x130) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x130) = 1;
  lVar5 = CakeOrder_Home_Journey_JourneyLevelMap__get_Instance();
  CakeOrder_Home_Journey_UIHomeTabPageJourney__BuildMilestoneSource(param_1,lVar5);
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = FUN_04c35338(uVar9,uVar7,DAT_091d4ce8);
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182278);
  }
  uVar7 = CakeOrder_Localization_CakeLocalization__Tr(DAT_092195f0,0);
  if (lVar6 != 0) {
    CakeOrder_Home_Journey_UIJourneyChapterSection__SetUpComingSoon(lVar6,uVar7,0);
    lVar10 = DAT_091b14f8;
    lVar8 = *(long *)(param_1 + 0x120);
    if (lVar8 != 0) {
      lVar12 = *(long *)(lVar8 + 0x10);
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *plVar13 = lVar6;
          thunk_FUN_03f5d7b8(plVar13,lVar6);
        }
        else {
          FUN_057e0c68(lVar8,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
          iVar14 = *(int *)(*(long *)(lVar5 + 0x10) + 0x18);
          if (-1 < iVar14 + -1) {
            do {
              iVar14 = iVar14 + -1;
              CakeOrder_Home_Journey_JourneyLevelMap__GetRange(&local_98,lVar5,iVar14);
              bVar4 = local_7c;
              iVar3 = iStack_8c;
              uVar2 = local_90;
              local_70 = local_88;
              uVar7 = CONCAT44(uStack_94,local_98);
              local_68 = local_80;
              local_74 = local_7b;
              local_72 = local_79;
              if (0 < iStack_8c) {
                if (((local_7c & 1) == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
                  local_98 = iStack_8c;
                  uVar9 = FUN_03f5c42c(DAT_09535420,&local_98);
                  uVar7 = System_String__Format(DAT_09213dc0,uVar7,uVar9,0);
                  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_091835d0);
                  }
                  UnityEngine_Debug__LogWarning(uVar7,0);
                }
                else {
                  uVar9 = *(undefined8 *)(param_1 + 0xa8);
                  uVar11 = *(undefined8 *)(param_1 + 0xb0);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar6 = FUN_04c35338(uVar11,uVar9,DAT_091d4ce8);
                  uVar9 = CakeOrder_Home_Journey_UIHomeTabPageJourney__GetChapterName(param_1,uVar7)
                  ;
                  lVar10 = CakeOrder_Home_Journey_UIHomeTabPageJourney__FindChapterArt
                                     (param_1,uVar7);
                  if (lVar10 == 0) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = *(undefined8 *)(lVar10 + 0x18);
                  }
                  if (lVar6 == 0) goto LAB_04356064;
                  local_a8 = local_70;
                  local_a0 = local_68;
                  local_b0 = uVar2;
                  iStack_ac = iVar3;
                  local_9c = bVar4;
                  local_9b = local_74;
                  local_99 = local_72;
                  local_b8 = uVar7;
                  CakeOrder_Home_Journey_UIJourneyChapterSection__SetUpChapter
                            (lVar6,&local_b8,uVar9,uVar11,0);
                  uVar9 = thunk_FUN_03f9944c(DAT_09174ab0);
                  FUN_070a8c30(uVar9,param_1,DAT_091dca68,0);
                  CakeOrder_Home_Journey_UIJourneyChapterSection__add_onClickCard(lVar6,uVar9,0);
                  local_c8 = local_70;
                  local_c0 = local_68;
                  local_d0 = uVar2;
                  iStack_cc = iVar3;
                  local_bc = bVar4;
                  local_bb = local_74;
                  local_b9 = local_72;
                  local_d8 = uVar7;
                  CakeOrder_Home_Journey_UIHomeTabPageJourney__BuildMilestonesFor
                            (param_1,lVar6,&local_d8);
                  lVar10 = DAT_091b14f8;
                  lVar8 = *(long *)(param_1 + 0x120);
                  if (lVar8 == 0) goto LAB_04356064;
                  lVar12 = *(long *)(lVar8 + 0x10);
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar12 == 0) goto LAB_04356064;
                  uVar1 = *(uint *)(lVar8 + 0x18);
                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                    plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar13 = lVar6;
                    thunk_FUN_03f5d7b8(plVar13,lVar6);
                  }
                  else {
                    FUN_057e0c68(lVar8,lVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
            } while (0 < iVar14);
          }
          CakeOrder_Home_Journey_UIHomeTabPageJourney__ApplySiblingOrder(param_1);
          CakeOrder_Home_Journey_UIHomeTabPageJourney__ApplyLayout(param_1);
          lVar5 = *(long *)(param_1 + 0x138);
          if (lVar5 == 0) {
            return;
          }
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
          return;
        }
      }
    }
  }
LAB_04356064:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

