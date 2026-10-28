// rea decompile_all
// name: IapAdsSystem.AdsCampaignRoute$$IsMatch
// address: 0x72f99cc
// body: available
// range: 0x72f99cc-0x72f9aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72f9aa4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x72f9aa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 IapAdsSystem_AdsCampaignRoute__IsMatch(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_0952042c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a86c8);
    DAT_0952042c = 1;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  uVar1 = 0;
  if (((lVar5 != 0) && (param_2 != 0)) && (0 < (int)*(ulong *)(lVar5 + 0x18))) {
    uVar6 = 0;
    uVar3 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558(uVar1);
      }
      lVar4 = *(long *)(lVar5 + 0x20 + uVar6 * 8);
      uVar1 = System_String__IsNullOrWhiteSpace(lVar4,0);
      if ((uVar1 & 1) == 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = System_String__Trim(lVar4,0);
        uVar1 = FUN_053ebc3c(param_2,uVar2,DAT_091a86c8);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
      }
      uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  return 0;
}

