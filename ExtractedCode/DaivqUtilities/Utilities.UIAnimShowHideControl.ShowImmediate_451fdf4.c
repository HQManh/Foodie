// rea decompile_all
// name: Utilities.UIAnimShowHideControl$$ShowImmediate
// address: 0x451fdf4
// body: available
// range: 0x451fdf4-0x4520043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452003c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4520040 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIAnimShowHideControl__ShowImmediate(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((DAT_095185b6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1290);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095185b6 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,lVar4,0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x28),0);
  }
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
    }
    lVar4 = *(long *)(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x58) = 0;
    if ((lVar4 != 0) && (0 < (int)*(ulong *)(lVar4 + 0x18))) {
      uVar8 = 0;
      uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar8) goto LAB_04520040;
        lVar6 = *(long *)(lVar4 + 0x20 + uVar8 * 8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(lVar6,0);
        if ((uVar5 & 1) != 0) {
          if (lVar6 == 0) goto LAB_0452003c;
          UnityEngine_Behaviour__set_enabled(lVar6,1,0);
        }
        uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    lVar4 = *(long *)(param_1 + 0x40);
    if ((lVar4 != 0) && (uVar2 = *(uint *)(lVar4 + 0x18), 0 < (int)uVar2)) {
      lVar6 = 0;
      do {
        if (uVar2 <= (uint)lVar6) goto LAB_04520040;
        lVar9 = *(long *)(lVar4 + 0x20 + lVar6 * 8);
        if (lVar9 == 0) goto LAB_0452003c;
        uVar7 = *(undefined8 *)(lVar9 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar8 & 1) != 0) {
          plVar3 = *(long **)(lVar9 + 0x10);
          if (plVar3 == (long *)0x0) goto LAB_0452003c;
          (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
        }
        uVar2 = *(uint *)(lVar4 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar2);
    }
    lVar4 = *(long *)(param_1 + 0x48);
    if ((lVar4 != 0) && (uVar2 = *(uint *)(lVar4 + 0x18), 0 < (int)uVar2)) {
      lVar6 = 0;
      do {
        if (uVar2 <= (uint)lVar6) {
LAB_04520040:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar9 = *(long *)(lVar4 + 0x20 + lVar6 * 8);
        if (lVar9 == 0) goto LAB_0452003c;
        uVar7 = *(undefined8 *)(lVar9 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar8 & 1) != 0) {
          plVar3 = *(long **)(lVar9 + 0x10);
          if (plVar3 == (long *)0x0) goto LAB_0452003c;
          (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
        }
        uVar2 = *(uint *)(lVar4 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar2);
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      lVar4 = UnityEngine_Component__get_gameObject(param_1,0);
      if (lVar4 == 0) goto LAB_0452003c;
      UnityEngine_GameObject__SetActive(lVar4,1,0);
    }
    *(undefined4 *)(param_1 + 0x20) = 2;
    return;
  }
LAB_0452003c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

