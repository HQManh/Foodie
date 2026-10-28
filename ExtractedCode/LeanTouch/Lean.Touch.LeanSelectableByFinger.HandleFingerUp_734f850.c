// rea decompile_all
// name: Lean.Touch.LeanSelectableByFinger$$HandleFingerUp
// address: 0x734f850
// body: available
// range: 0x734f850-0x734f973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x734f958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanSelectableByFinger__HandleFingerUp(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_0952075b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b3250);
    FUN_03f5c2a4(&DAT_091b3258);
    FUN_03f5c2a4(&DAT_091b3260);
    FUN_03f5c2a4(&DAT_091be070);
    FUN_03f5c2a4(&DAT_091be1c0);
    DAT_0952075b = 1;
  }
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    iVar2 = 0;
    do {
      if (*(int *)(lVar1 + 0x18) <= iVar2) {
        return;
      }
      auVar3 = FUN_0595933c(lVar1,iVar2,DAT_091b3260);
      if (auVar3._8_8_ == param_2) {
        if (*(long *)(param_1 + 0x68) == 0) break;
        FUN_0595af5c(*(long *)(param_1 + 0x68),iVar2,DAT_091b3250);
        if (*(long *)(param_1 + 0x50) != 0) {
          FUN_0647fad4(*(long *)(param_1 + 0x50),param_2,DAT_091be070);
        }
        if (*(long *)(param_1 + 0x60) != 0) {
          FUN_06481f2c(*(long *)(param_1 + 0x60),auVar3._0_8_,param_2,DAT_091be1c0);
        }
      }
      lVar1 = *(long *)(param_1 + 0x68);
      iVar2 = iVar2 + 1;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

