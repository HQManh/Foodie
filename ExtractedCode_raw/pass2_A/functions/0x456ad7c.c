// rea decompile_all
// name: DG.Tweening.Plugins.StringPluginExtensions$$ScrambleChars
// address: 0x456ad7c
// body: available
// range: 0x456ad7c-0x456ae1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456ae14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x456ae18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_StringPluginExtensions__ScrambleChars(long param_1)

{
  long lVar1;
  undefined2 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = *(ulong *)(param_1 + 0x18);
  if (0 < (int)uVar5) {
    uVar6 = 0;
    uVar4 = uVar5 & 0xffffffff;
    do {
      if (uVar4 <= uVar6) {
LAB_0456ae14:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar2 = *(undefined2 *)(param_1 + 0x20 + uVar6 * 2);
      uVar3 = UnityEngine_Random__Range(uVar6 & 0xffffffff,uVar5 & 0xffffffff,0);
      if (((uint)*(ulong *)(param_1 + 0x18) <= uVar3) ||
         (uVar4 = *(ulong *)(param_1 + 0x18) & 0xffffffff, uVar4 <= uVar6)) goto LAB_0456ae14;
      lVar1 = param_1 + (long)(int)uVar3 * 2;
      *(undefined2 *)(param_1 + 0x20 + uVar6 * 2) = *(undefined2 *)(lVar1 + 0x20);
      uVar6 = uVar6 + 1;
      *(undefined2 *)(lVar1 + 0x20) = uVar2;
    } while ((uVar5 & 0xffffffff) != uVar6);
  }
  return;
}

