// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SkewItem$$CheckEqualTarget
// address: 0x41c0c98
// body: available
// range: 0x41c0c98-0x41c0e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c0e28 to 0x4ab300c FUN_04ab300c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c0e40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Datpt_Cook_Order_Level_SimpleBBQ_SkewItem__CheckEqualTarget(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09516997 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9230);
    FUN_03f5c2a4(&DAT_091c9e08);
    FUN_03f5c2a4(&DAT_09178018);
    FUN_03f5c2a4(&DAT_09178870);
    FUN_03f5c2a4(&DAT_091ac800);
    FUN_03f5c2a4(&DAT_091d9400);
    FUN_03f5c2a4(&DAT_091f0110);
    FUN_03f5c2a4(&DAT_091948e0);
    DAT_09516997 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x120) != 0)) {
    if (*(int *)(param_2 + 0x18) == *(int *)(*(long *)(param_1 + 0x120) + 0x18)) {
      if (*(int *)(DAT_091948e0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar3 = *(undefined8 **)(DAT_091948e0 + 0xb8);
      lVar4 = puVar3[1];
      if (lVar4 == 0) {
        if (*(int *)(DAT_091948e0 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar3 = *(undefined8 **)(DAT_091948e0 + 0xb8);
        }
        uVar5 = *puVar3;
        lVar4 = thunk_FUN_03f9944c(DAT_09178870);
        FUN_05316f3c(lVar4,uVar5,DAT_091f0110,0);
        plVar1 = (long *)(*(long *)(DAT_091948e0 + 0xb8) + 8);
        *plVar1 = lVar4;
        thunk_FUN_03f5d7b8(plVar1,lVar4);
      }
      uVar5 = FUN_04ae6d64(param_2,lVar4,DAT_091c9e08);
      uVar2 = thunk_FUN_03f9944c(DAT_09178018);
      FUN_05322d94(uVar2,param_1,DAT_091d9400,0);
      uVar5 = FUN_04ab300c(uVar5,uVar2,DAT_091c9230);
      return uVar5;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

