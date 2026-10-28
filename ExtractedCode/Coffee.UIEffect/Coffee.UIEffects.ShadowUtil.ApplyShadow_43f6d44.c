// rea decompile_all
// name: Coffee.UIEffects.ShadowUtil$$ApplyShadow
// address: 0x43f6d44
// body: available
// range: 0x43f6d44-0x43f6df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f6dec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f6df0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_ShadowUtil__ApplyShadow
               (float param_1,float param_2,undefined4 param_3,undefined8 param_4,long param_5,
               undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < (int)*(ulong *)(param_5 + 0x18)) {
    uVar2 = 0;
    uVar1 = *(ulong *)(param_5 + 0x18) & 0xffffffff;
    pfVar3 = (float *)(param_5 + 0x24);
    do {
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      Coffee_UIEffects_ShadowUtil__ApplyShadowZeroAlloc
                (param_1 * pfVar3[-1],param_2 * *pfVar3,param_3,param_4,param_6,param_7);
      uVar1 = (ulong)*(uint *)(param_5 + 0x18);
      uVar2 = uVar2 + 1;
      pfVar3 = pfVar3 + 2;
    } while ((long)uVar2 < (long)(int)*(uint *)(param_5 + 0x18));
  }
  return;
}

