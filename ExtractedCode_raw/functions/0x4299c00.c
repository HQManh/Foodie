// rea decompile_all
// name: CakeOrder.InGame.UIEndGameBase$$CollectAnimHeaderElements
// address: 0x4299c00
// body: available
// range: 0x4299c00-0x4299d27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4299d20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4299d24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIEndGameBase__CollectAnimHeaderElements(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  if ((DAT_095171ef & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4a60);
    FUN_03f5c2a4(&DAT_091a4a68);
    FUN_03f5c2a4(&DAT_091a4a70);
    FUN_03f5c2a4(&DAT_091b1288);
    FUN_03f5c2a4(&DAT_091b1298);
    FUN_03f5c2a4(&DAT_091b12a0);
    DAT_095171ef = 1;
  }
  lVar1 = *(long *)(param_1 + 0xd8);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (long *)0x0;
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x18))) {
    FUN_057e185c(&local_48,lVar1,DAT_091b1298);
    while (uVar2 = FUN_071bd28c(&local_48,DAT_091a4a68), (uVar2 & 1) != 0) {
      if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*local_38 + 0x1a8))(local_38,*(undefined8 *)(*local_38 + 0x1b0));
    }
    FUN_071bd288(&local_48,DAT_091a4a60);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e0e78(param_2,*(undefined8 *)(param_1 + 0xd8),DAT_091b1288);
  }
  return;
}

