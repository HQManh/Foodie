// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyMilestoneItem$$SpawnRewardIcons
// address: 0x435ef1c
// body: available
// range: 0x435ef1c-0x435f243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435f238 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435f23c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435f240 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIJourneyMilestoneItem__SpawnRewardIcons(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_0951782c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4bb0);
    FUN_03f5c2a4(&DAT_091a4bb8);
    FUN_03f5c2a4(&DAT_091a4bc0);
    FUN_03f5c2a4(&DAT_091b1580);
    FUN_03f5c2a4(&DAT_091b1588);
    FUN_03f5c2a4(&DAT_091b1590);
    FUN_03f5c2a4(&DAT_091d4d00);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951782c = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_057e185c(&local_98,*(long *)(param_1 + 0x88),DAT_091b1590);
    local_70 = local_88;
    puStack_78 = puStack_90;
    local_80 = local_98;
    local_98 = 0;
    puStack_90 = &local_80;
    while (uVar4 = FUN_071bd28c(&local_80,DAT_091a4bb8), lVar8 = local_70, (uVar4 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(lVar8,0);
      if ((uVar4 & 1) != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = UnityEngine_Component__get_gameObject(lVar8,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Object__Destroy(uVar5,0);
      }
    }
    FUN_071bd288(&local_80,DAT_091a4bb0);
    lVar8 = *(long *)(param_1 + 0x88);
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        if (*(long *)(*(long *)(param_1 + 0x98) + 0x18) != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x58);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
          if ((uVar4 & 1) != 0) {
            uVar5 = *(undefined8 *)(param_1 + 0x50);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
            if ((uVar4 & 1) != 0) {
              if ((*(long *)(param_1 + 0x98) == 0) ||
                 (lVar8 = *(long *)(*(long *)(param_1 + 0x98) + 0x18), lVar8 == 0))
              goto LAB_0435f23c;
              if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                uVar4 = 0;
                uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                do {
                  if (uVar9 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  lVar12 = *(long *)(lVar8 + 0x20 + uVar4 * 8);
                  if ((lVar12 != 0) &&
                     (uVar9 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar12 + 0x10),0),
                     (uVar9 & 1) == 0)) {
                    uVar5 = *(undefined8 *)(param_1 + 0x50);
                    uVar2 = *(undefined8 *)(param_1 + 0x58);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    lVar6 = FUN_04c35338(uVar2,uVar5,DAT_091d4d00);
                    if ((lVar6 == 0) ||
                       (lVar7 = UnityEngine_Component__get_gameObject(lVar6,0), lVar7 == 0))
                    goto LAB_0435f23c;
                    UnityEngine_GameObject__SetActive(lVar7,1,0);
                    CakeOrder_Home_Journey_UIJourneyRewardIcon__SetUp(lVar6,lVar12);
                    lVar12 = DAT_091b1580;
                    lVar7 = *(long *)(param_1 + 0x88);
                    if (lVar7 == 0) goto LAB_0435f23c;
                    lVar10 = *(long *)(lVar7 + 0x10);
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar10 == 0) goto LAB_0435f23c;
                    uVar3 = *(uint *)(lVar7 + 0x18);
                    if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                      plVar11 = (long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
                      *plVar11 = lVar6;
                      thunk_FUN_03f5d7b8(plVar11,lVar6);
                    }
                    else {
                      FUN_057e0c68(lVar7,lVar6,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                  uVar4 = uVar4 + 1;
                } while ((long)uVar4 < (long)(int)*(uint *)(lVar8 + 0x18));
              }
            }
          }
        }
        return;
      }
    }
  }
LAB_0435f23c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

