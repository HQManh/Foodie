// rea decompile_all
// name: CakeOrder.CakeOrderCloudSaveController$$CreateUnifiedSaveData
// address: 0x425b76c
// body: available
// range: 0x425b76c-0x425b86b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425b868 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_CakeOrderCloudSaveController__CreateUnifiedSaveData(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_09516f4e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182c60);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_091b9db8);
    FUN_03f5c2a4(&DAT_091b9d48);
    DAT_09516f4e = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09182c60);
  PlatformServiceR1_UnifiedSaveDataAbstract___ctor(lVar1,0);
  if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar2 = FUN_06077228(*(long *)(param_1 + 0x40),DAT_091b9db8);
      *(undefined8 *)(lVar1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar2 = FUN_06077228(*(long *)(param_1 + 0x48),DAT_091b9d48);
        *(undefined8 *)(lVar1 + 0x20) = uVar2;
        thunk_FUN_03f5d7b8();
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

