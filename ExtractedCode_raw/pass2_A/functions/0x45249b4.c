// rea decompile_all
// name: Utilities.UIBonusMultiplierBar$$Awake
// address: 0x45249b4
// body: available
// range: 0x45249b4-0x4524a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4524a68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4524a80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIBonusMultiplierBar__Awake(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 local_34;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    uVar6 = 0;
    do {
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar6) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x48);
      if (lVar3 == 0) break;
      if ((long)uVar6 < (long)(int)*(uint *)(lVar3 + 0x18)) {
        if ((*(uint *)(lVar2 + 0x18) <= uVar6) || (*(uint *)(lVar3 + 0x18) <= uVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar5 = *(undefined8 *)(param_1 + 0x40);
        local_34 = *(undefined4 *)(lVar3 + uVar6 * 4 + 0x20);
        plVar4 = *(long **)(lVar2 + uVar6 * 8 + 0x20);
        uVar1 = FUN_03f5c42c(DAT_09535450,&local_34);
        uVar1 = System_String__Format(uVar5,uVar1,0);
        if (plVar4 == (long *)0x0) break;
        (**(code **)(*plVar4 + 0x558))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0x560));
        lVar2 = *(long *)(param_1 + 0x38);
      }
      uVar6 = uVar6 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

