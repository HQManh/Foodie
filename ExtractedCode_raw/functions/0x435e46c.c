// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyLevelSelectPopup$$BuildItems
// address: 0x435e46c
// body: available
// range: 0x435e46c-0x435e893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435e88c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435e890 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIJourneyLevelSelectPopup__BuildItems(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09517822 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174ab8);
    FUN_03f5c2a4(&DAT_091a4b68);
    FUN_03f5c2a4(&DAT_091a4b70);
    FUN_03f5c2a4(&DAT_091a4b78);
    FUN_03f5c2a4(&DAT_091b1520);
    FUN_03f5c2a4(&DAT_091b1528);
    FUN_03f5c2a4(&DAT_091b1530);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091d4cf0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcd40);
    DAT_09517822 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_057e185c(&local_98,*(long *)(param_1 + 0xd8),DAT_091b1530);
    local_70 = local_88;
    puStack_78 = puStack_90;
    local_80 = local_98;
    local_98 = 0;
    puStack_90 = &local_80;
    while (uVar5 = FUN_071bd28c(&local_80,DAT_091a4b70), lVar10 = local_70, (uVar5 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(lVar10,0);
      if ((uVar5 & 1) != 0) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = UnityEngine_Component__get_gameObject(lVar10,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Object__Destroy(uVar6,0);
      }
    }
    FUN_071bd288(&local_80,DAT_091a4b68);
    lVar10 = *(long *)(param_1 + 0xd8);
    if (lVar10 != 0) {
      iVar13 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar13) {
        System_Array__Clear(*(undefined8 *)(lVar10 + 0x10),0,iVar13,0);
      }
      uVar6 = *(undefined8 *)(param_1 + 0xd0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar5 & 1) != 0) {
        uVar6 = *(undefined8 *)(param_1 + 200);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar6,0);
        if (((uVar5 & 1) != 0) &&
           (uVar5 = CakeOrder_Home_Journey_JourneyLevelMap_MapRange__get_HasLevels(param_2,0),
           (uVar5 & 1) != 0)) {
          lVar10 = *(long *)(DAT_091b4a58 + 0x20);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03f95a6c();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03f95a6c();
          }
          if (0 < *(int *)((long)param_2 + 0xc)) {
            lVar10 = **(long **)(lVar10 + 0xb8);
            iVar13 = 0;
            do {
              uVar6 = *(undefined8 *)(param_1 + 200);
              uVar1 = *(undefined8 *)(param_1 + 0xd0);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar7 = FUN_04c35338(uVar1,uVar6,DAT_091d4cf0);
              if ((lVar7 == 0) ||
                 (lVar8 = UnityEngine_Component__get_gameObject(lVar7,0), lVar8 == 0))
              goto LAB_0435e890;
              UnityEngine_GameObject__SetActive(lVar8,1,0);
              iVar2 = *(int *)(param_2 + 2);
              uVar5 = UnityEngine_Object__op_Inequality(lVar10,0,0);
              if ((uVar5 & 1) == 0) {
                uVar3 = 0;
              }
              else {
                if (lVar10 == 0) goto LAB_0435e890;
                uVar3 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsLevelUnlocked
                                  (lVar10,*param_2,iVar13,0);
              }
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = UnityEngine_Object__op_Inequality(lVar10,0,0);
              if ((uVar5 & 1) == 0) {
                uVar4 = 0;
              }
              else {
                if (lVar10 == 0) goto LAB_0435e890;
                uVar4 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetLevelStars
                                  (lVar10,*param_2,iVar13,0);
              }
              CakeOrder_Home_Journey_UIJourneyLevelSelectItem__SetUp
                        (lVar7,iVar13,iVar13 + iVar2,uVar3 & 1,uVar4);
              uVar6 = thunk_FUN_03f9944c(DAT_09174ab8);
              FUN_070a8c30(uVar6,param_1,DAT_091dcd40,0);
              CakeOrder_Home_Journey_UIJourneyLevelSelectItem__add_onClick(lVar7,uVar6);
              lVar8 = DAT_091b1520;
              lVar9 = *(long *)(param_1 + 0xd8);
              if (lVar9 == 0) goto LAB_0435e890;
              lVar11 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_0435e890;
              uVar3 = *(uint *)(lVar9 + 0x18);
              if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                plVar12 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                *plVar12 = lVar7;
                thunk_FUN_03f5d7b8(plVar12,lVar7);
              }
              else {
                FUN_057e0c68(lVar9,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)((long)param_2 + 0xc));
          }
          *(undefined8 *)(param_1 + 0xe8) = *param_2;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xe8));
        }
      }
      return;
    }
  }
LAB_0435e890:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

