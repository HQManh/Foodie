// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$remove_onLevelEnded
// address: 0x4396554
// body: available
// range: 0x4396554-0x4396623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4396620 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl__remove_onLevelEnded(undefined8 param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_09517a5b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174588);
    FUN_03f5c2a4(&DAT_09187828);
    DAT_09517a5b = 1;
  }
  lVar5 = *(long *)(*(long *)(DAT_09187828 + 0xb8) + 8);
  do {
    lVar3 = System_Delegate__Remove(lVar5,param_1,0);
    uVar1 = DAT_09174588;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_03f99350(lVar3,DAT_09174588);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar3,uVar1);
      }
    }
    lVar3 = FUN_03f955cc(*(long *)(DAT_09187828 + 0xb8) + 8,lVar4,lVar5);
    bVar2 = lVar3 != lVar5;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}

