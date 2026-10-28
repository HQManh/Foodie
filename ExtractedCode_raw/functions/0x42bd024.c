// rea decompile_all
// name: CakeOrder.UI.UIPopupListRewardClaimed$$CaptureBaseHeights
// address: 0x42bd024
// body: available
// range: 0x42bd024-0x42bd1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42bd1c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bd1c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIPopupListRewardClaimed__CaptureBaseHeights(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 in_s3;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((DAT_095172fe & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09180528);
    DAT_095172fe = 1;
  }
  if (*(char *)(param_1 + 0x120) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x120) = 1;
  if (param_2 != 0) {
    UnityEngine_RectTransform__get_rect(param_2,0);
    uVar6 = in_s3;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(undefined4 *)(param_1 + 0x110) = in_s3;
    if (*(long *)(param_1 + 0x108) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x18);
    }
    uVar1 = FUN_03f5c394(DAT_09180528,uVar7);
    *(undefined8 *)(param_1 + 0x118) = uVar1;
    thunk_FUN_03f5d7b8(param_1 + 0x118,uVar1);
    lVar4 = *(long *)(param_1 + 0x118);
    if (lVar4 != 0) {
      uVar5 = 0;
      do {
        if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar5) {
          return;
        }
        lVar3 = *(long *)(param_1 + 0x108);
        if (lVar3 == 0) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_042bd1c4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar1 = *(undefined8 *)(lVar3 + uVar5 * 8 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
        uVar7 = 0;
        if ((uVar2 & 1) != 0) {
          lVar3 = *(long *)(param_1 + 0x108);
          if (lVar3 == 0) break;
          if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_042bd1c4;
          lVar3 = *(long *)(lVar3 + uVar5 * 8 + 0x20);
          if (lVar3 == 0) break;
          UnityEngine_RectTransform__get_rect(lVar3,0);
          uVar7 = uVar6;
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_042bd1c4;
        lVar3 = lVar4 + uVar5 * 4;
        lVar4 = *(long *)(param_1 + 0x118);
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar3 + 0x20) = uVar7;
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

