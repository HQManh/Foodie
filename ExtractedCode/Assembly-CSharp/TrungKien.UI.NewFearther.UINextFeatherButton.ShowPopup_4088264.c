// rea decompile_all
// name: TrungKien.UI.NewFearther.UINextFeatherButton$$ShowPopup
// address: 0x4088264
// body: available
// range: 0x4088264-0x408841b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40883bc to 0x44f6690 Utilities.AsyncExtension$$RunWithLogException (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4088414 to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4088418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKien_UI_NewFearther_UINextFeatherButton__ShowPopup(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_09515ca5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b4cf8);
    FUN_03f5c2a4(&DAT_091b4d00);
    FUN_03f5c2a4(&DAT_091d85c8);
    FUN_03f5c2a4(&DAT_091dce28);
    FUN_03f5c2a4(&DAT_091f9fe0);
    DAT_09515ca5 = 1;
  }
  uVar1 = FUN_05a8f088(DAT_091b4d00);
  if (((uVar1 & 1) != 0) && (plVar2 = *(long **)(param_1 + 0x28), plVar2 != (long *)0x0)) {
    uVar1 = (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250));
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(DAT_091b4cf8 + 0x20);
      *(undefined1 *)(param_1 + 0x81) = 1;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      lVar3 = **(long **)(lVar3 + 0xb8);
      uVar4 = thunk_FUN_03f9944c(DAT_09174a48);
      FUN_070a8c30(uVar4,param_1,DAT_091dce28,0);
      if (lVar3 != 0) {
        uVar4 = FUN_04d447b8(lVar3,uVar5,0,uVar4,0,DAT_091d85c8);
        Utilities_AsyncExtension__RunWithLogException(uVar4,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  uVar4 = UnityEngine_Object__GetName(param_1,0);
  uVar4 = System_String__Concat(uVar4,DAT_091f9fe0,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__LogWarning(uVar4,0);
  return;
}

