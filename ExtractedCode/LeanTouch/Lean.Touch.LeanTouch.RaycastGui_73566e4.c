// rea decompile_all
// name: Lean.Touch.LeanTouch$$RaycastGui
// address: 0x73566e4
// body: available
// range: 0x73566e4-0x7356a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7356a8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Lean_Touch_LeanTouch__RaycastGui(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_c0 [14];
  
  if ((DAT_095207e0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09187728);
    FUN_03f5c2a4(&DAT_091af5b0);
    FUN_03f5c2a4(&DAT_091af5c0);
    FUN_03f5c2a4(&DAT_091af5d0);
    FUN_03f5c2a4(&DAT_091af5d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091893a8);
    FUN_03f5c2a4(&DAT_09202328);
    DAT_095207e0 = 1;
  }
  if (*(int *)(DAT_09187728 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x60);
  if (lVar6 != 0) {
    iVar9 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar9) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar9,0);
    }
    lVar6 = Lean_Touch_LeanTouch__GetEventSystem();
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar6,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(DAT_09202328,0);
LAB_07356a54:
      if (*(int *)(DAT_09187728 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      return *(undefined8 *)(*(long *)(DAT_09187728 + 0xb8) + 0x60);
    }
    if (*(int *)(DAT_09187728 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = *(undefined8 *)(*(long *)(DAT_09187728 + 0xb8) + 0x78);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar6,uVar10,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_09187728 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)(*(long *)(DAT_09187728 + 0xb8) + 0x78);
      *plVar4 = lVar6;
      thunk_FUN_03f5d7b8(plVar4,lVar6);
      lVar8 = *(long *)(DAT_09187728 + 0xb8);
      plVar4 = *(long **)(lVar8 + 0x70);
      if (plVar4 == (long *)0x0) {
        if (*(int *)(DAT_09187728 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar8 = *(long *)(DAT_09187728 + 0xb8);
        }
        uVar11 = *(undefined8 *)(lVar8 + 0x78);
        uVar10 = thunk_FUN_03f9944c(DAT_091893a8);
        UnityEngine_EventSystems_PointerEventData___ctor(uVar10,uVar11,0);
        puVar5 = (undefined8 *)(*(long *)(DAT_09187728 + 0xb8) + 0x70);
        *puVar5 = uVar10;
        thunk_FUN_03f5d7b8(puVar5,uVar10);
      }
      else {
        if (*(int *)(DAT_09187728 + 0xe4) == 0) {
          FUN_03f5c424();
          plVar4 = *(long **)(*(long *)(DAT_09187728 + 0xb8) + 0x70);
          if (plVar4 == (long *)0x0) goto LAB_07356a8c;
        }
        (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
      }
    }
    if (*(int *)(DAT_09187728 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = DAT_09187728;
    lVar7 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x70);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0x144) = param_1;
      *(undefined4 *)(lVar7 + 0x148) = param_2;
      if (lVar6 != 0) {
        UnityEngine_EventSystems_EventSystem__RaycastAll
                  (lVar6,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x70),
                   *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x60),0);
        lVar6 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x60);
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x18) < 1) goto LAB_07356a54;
          if (*(int *)(DAT_09187728 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar6 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x60);
            if (lVar6 == 0) goto LAB_07356a8c;
          }
          iVar9 = *(int *)(lVar6 + 0x18);
          if (-1 < iVar9 + -1) {
            do {
              if (*(int *)(DAT_09187728 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar6 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x60);
              if (lVar6 == 0) goto LAB_07356a8c;
              iVar9 = iVar9 + -1;
              FUN_05842518(local_c0,lVar6,iVar9,DAT_091af5d8);
              if (local_c0[0] == 0) goto LAB_07356a8c;
              uVar1 = UnityEngine_GameObject__get_layer(local_c0[0],0);
              uVar2 = UnityEngine_LayerMask__op_Implicit(param_3,0);
              if ((uVar2 >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
                if (*(int *)(DAT_09187728 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar6 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x60);
                if (lVar6 == 0) goto LAB_07356a8c;
                FUN_058445cc(lVar6,iVar9,DAT_091af5c0);
              }
            } while (0 < iVar9);
          }
          goto LAB_07356a54;
        }
      }
    }
  }
LAB_07356a8c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

