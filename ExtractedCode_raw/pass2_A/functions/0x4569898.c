// rea decompile_all
// name: DG.Tweening.Plugins.StringPlugin$$SetFrom
// address: 0x4569898
// body: available
// range: 0x4569898-0x456997f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456997c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_StringPlugin__SetFrom
               (undefined8 param_1,long param_2,long param_3,ulong param_4,uint param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((DAT_0951885f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_0951885f = 1;
  }
  lVar2 = DAT_091f5700;
  if (param_3 != 0) {
    lVar2 = param_3;
  }
  if ((param_5 & 1) == 0) {
    if (param_2 == 0) goto LAB_0456997c;
  }
  else {
    if ((param_2 == 0) || (lVar3 = *(long *)(param_2 + 0x158), lVar3 == 0)) goto LAB_0456997c;
    uVar1 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
    ;
    lVar2 = System_String__Concat(lVar2,uVar1,0);
  }
  *(long *)(param_2 + 0x128) = lVar2;
  thunk_FUN_03f5d7b8(param_2 + 0x128,lVar2);
  if ((param_4 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_2 + 0x160);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04569964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),lVar2,*(undefined8 *)(lVar3 + 0x28));
    return;
  }
LAB_0456997c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

