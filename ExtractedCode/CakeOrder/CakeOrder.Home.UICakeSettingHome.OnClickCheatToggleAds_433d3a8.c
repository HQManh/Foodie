// rea decompile_all
// name: CakeOrder.Home.UICakeSettingHome$$OnClickCheatToggleAds
// address: 0x433d3a8
// body: available
// range: 0x433d3a8-0x433d4cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433d4cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UICakeSettingHome__OnClickCheatToggleAds(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_0951772d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4988);
    FUN_03f5c2a4(&DAT_091fb640);
    FUN_03f5c2a4(&DAT_091fb638);
    DAT_0951772d = 1;
  }
  lVar2 = *(long *)(DAT_091b4988 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if ((**(long **)(lVar2 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x20), lVar2 != 0)) {
    lVar3 = *(long *)(DAT_091b4988 + 0x20);
    *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) ^ 1;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      plVar4 = (long *)(**(long **)(lVar3 + 0xb8) + 0x20);
      *plVar4 = lVar2;
      thunk_FUN_03f5d7b8(plVar4,lVar2);
      plVar4 = *(long **)(param_1 + 0x170);
      if (plVar4 != (long *)0x0) {
        puVar1 = &DAT_091fb638;
        if (*(char *)(lVar2 + 0x10) != '\0') {
          puVar1 = &DAT_091fb640;
        }
                    /* WARNING: Could not recover jumptable at 0x0433d4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x558))(plVar4,*puVar1,*(undefined8 *)(*plVar4 + 0x560));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

