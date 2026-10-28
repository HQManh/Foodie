// rea decompile_all
// name: UniRx.ObservableWWW$$MergeHash
// address: 0x40a8540
// body: available
// range: 0x40a8540-0x40a865b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40a8654 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a8658 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long UniRx_ObservableWWW__MergeHash(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09515e77 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fed0);
    FUN_03f5c2a4(&DAT_0919ff00);
    FUN_03f5c2a4(&DAT_091a6888);
    FUN_03f5c2a4(&DAT_091a6890);
    FUN_03f5c2a4(&DAT_091a6898);
    FUN_03f5c2a4(&DAT_091a98e8);
    FUN_03f5c2a4(&DAT_091a98f0);
    DAT_09515e77 = 1;
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  if (param_2 != 0) {
    FUN_06fd8888(&local_60,param_2,DAT_0919fed0);
    while( true ) {
      uVar1 = FUN_072753d4(&local_60,DAT_091a6890);
      if ((uVar1 & 1) == 0) {
        FUN_072754f4(&local_60,DAT_091a6888);
        return param_1;
      }
      if (param_1 == 0) break;
      FUN_06fd8440(param_1,local_50,uStack_48,DAT_0919ff00);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

