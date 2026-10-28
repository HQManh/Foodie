// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupBlurBackdrop$$<HideForCapture>g__Hide|72_0
// address: 0x42ced3c
// body: available
// range: 0x42ced3c-0x42ceef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ceef4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIPopupBlurBackdrop__<HideForCapture>g__Hide_72_0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_09517392 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5308);
    FUN_03f5c2a4(&DAT_091cd608);
    FUN_03f5c2a4(&DAT_091aa988);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bec08);
    DAT_09517392 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (param_2 != 0) {
    lVar4 = FUN_04a6a14c(param_2,DAT_091c5308);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Equality(lVar4,0,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = UnityEngine_Component__get_gameObject(param_2,0);
      if (lVar4 == 0) goto LAB_042ceef4;
      lVar4 = FUN_04b7c294(lVar4,DAT_091cd608);
    }
    if (lVar4 != 0) {
      lVar7 = *(long *)(param_1 + 0x120);
      UnityEngine_CanvasGroup__get_alpha(lVar4,0);
      local_40 = 0;
      uStack_38 = 0;
      FUN_066d0a08(&local_40,lVar4,DAT_091bec08);
      lVar2 = DAT_091aa988;
      if (lVar7 != 0) {
        lVar6 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            puVar5 = (undefined8 *)(lVar6 + 0x20);
            *puVar5 = local_40;
            *(undefined8 *)(lVar6 + 0x28) = uStack_38;
            thunk_FUN_03f5d7b8(puVar5,0);
          }
          else {
            FUN_056c100c(lVar7,local_40,uStack_38,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          UnityEngine_CanvasGroup__set_alpha(0,lVar4,0);
          return;
        }
      }
    }
  }
LAB_042ceef4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

