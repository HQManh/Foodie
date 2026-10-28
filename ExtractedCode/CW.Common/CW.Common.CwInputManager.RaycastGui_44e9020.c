// rea decompile_all
// name: CW.Common.CwInputManager$$RaycastGui
// address: 0x44e9020
// body: available
// range: 0x44e9020-0x44e9393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e9390 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CW_Common_CwInputManager__RaycastGui(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_b0 [14];
  
  if ((DAT_095183c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183150);
    FUN_03f5c2a4(&DAT_09184280);
    FUN_03f5c2a4(&DAT_091af5b0);
    FUN_03f5c2a4(&DAT_091af5c0);
    FUN_03f5c2a4(&DAT_091af5d0);
    FUN_03f5c2a4(&DAT_091af5d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091893a8);
    DAT_095183c4 = 1;
  }
  if (*(int *)(DAT_09183150 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_09183150 + 0xb8) + 0x18);
  if (lVar5 != 0) {
    iVar8 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar8) {
      System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar8,0);
    }
    if (*(int *)(DAT_09184280 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = UnityEngine_EventSystems_EventSystem__get_current(0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Inequality(lVar5,0,0);
    if ((uVar2 & 1) == 0) {
LAB_044e9360:
      if (*(int *)(DAT_09183150 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      return *(undefined8 *)(*(long *)(DAT_09183150 + 0xb8) + 0x18);
    }
    if (*(int *)(DAT_09183150 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = *(undefined8 *)(*(long *)(DAT_09183150 + 0xb8) + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Inequality(lVar5,uVar9,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(DAT_09183150 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar3 = (long *)(*(long *)(DAT_09183150 + 0xb8) + 0x28);
      *plVar3 = lVar5;
      thunk_FUN_03f5d7b8(plVar3,lVar5);
      lVar7 = *(long *)(DAT_09183150 + 0xb8);
      plVar3 = *(long **)(lVar7 + 0x20);
      if (plVar3 == (long *)0x0) {
        if (*(int *)(DAT_09183150 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar7 = *(long *)(DAT_09183150 + 0xb8);
        }
        uVar10 = *(undefined8 *)(lVar7 + 0x28);
        uVar9 = thunk_FUN_03f9944c(DAT_091893a8);
        UnityEngine_EventSystems_PointerEventData___ctor(uVar9,uVar10,0);
        puVar4 = (undefined8 *)(*(long *)(DAT_09183150 + 0xb8) + 0x20);
        *puVar4 = uVar9;
        thunk_FUN_03f5d7b8(puVar4,uVar9);
      }
      else {
        if (*(int *)(DAT_09183150 + 0xe4) == 0) {
          FUN_03f5c424();
          plVar3 = *(long **)(*(long *)(DAT_09183150 + 0xb8) + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_044e9390;
        }
        (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      }
    }
    if (*(int *)(DAT_09183150 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = DAT_09183150;
    lVar6 = *(long *)(*(long *)(DAT_09183150 + 0xb8) + 0x20);
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x144) = param_1;
      *(undefined4 *)(lVar6 + 0x148) = param_2;
      if (lVar5 != 0) {
        UnityEngine_EventSystems_EventSystem__RaycastAll
                  (lVar5,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20),
                   *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18),0);
        lVar5 = *(long *)(*(long *)(DAT_09183150 + 0xb8) + 0x18);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) < 1) goto LAB_044e9360;
          if (*(int *)(DAT_09183150 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar5 = *(long *)(*(long *)(DAT_09183150 + 0xb8) + 0x18);
            if (lVar5 == 0) goto LAB_044e9390;
          }
          iVar8 = *(int *)(lVar5 + 0x18);
          if (-1 < iVar8 + -1) {
            do {
              if (*(int *)(DAT_09183150 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar5 = *(long *)(*(long *)(DAT_09183150 + 0xb8) + 0x18);
              if (lVar5 == 0) goto LAB_044e9390;
              iVar8 = iVar8 + -1;
              FUN_05842518(local_b0,lVar5,iVar8,DAT_091af5d8);
              if (local_b0[0] == 0) goto LAB_044e9390;
              uVar1 = UnityEngine_GameObject__get_layer(local_b0[0],0);
              if ((param_3 >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
                if (*(int *)(DAT_09183150 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar5 = *(long *)(*(long *)(DAT_09183150 + 0xb8) + 0x18);
                if (lVar5 == 0) goto LAB_044e9390;
                FUN_058445cc(lVar5,iVar8,DAT_091af5c0);
              }
            } while (0 < iVar8);
          }
          goto LAB_044e9360;
        }
      }
    }
  }
LAB_044e9390:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

