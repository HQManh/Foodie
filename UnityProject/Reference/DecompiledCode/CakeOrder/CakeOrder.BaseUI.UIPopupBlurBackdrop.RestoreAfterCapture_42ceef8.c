// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupBlurBackdrop$$RestoreAfterCapture
// address: 0x42ceef8
// body: available
// range: 0x42ceef8-0x42cf05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42cf054 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42cf058 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIPopupBlurBackdrop__RestoreAfterCapture(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  ulong local_48;
  
  if ((DAT_09517388 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1f00);
    FUN_03f5c2a4(&DAT_091a1f08);
    FUN_03f5c2a4(&DAT_091a1f10);
    FUN_03f5c2a4(&DAT_091aa990);
    FUN_03f5c2a4(&DAT_091aa998);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517388 = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  if (*(long *)(param_1 + 0x120) != 0) {
    FUN_056c1c50(&local_60,*(long *)(param_1 + 0x120),DAT_091aa998);
    while (uVar3 = FUN_0718949c(&local_60,DAT_091a1f08), uVar2 = local_48, lVar4 = local_50,
          (uVar3 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_CanvasGroup__set_alpha(uVar2 & 0xffffffff,lVar4,0);
      }
    }
    FUN_07189498(&local_60,DAT_091a1f00);
    lVar4 = *(long *)(param_1 + 0x120);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

