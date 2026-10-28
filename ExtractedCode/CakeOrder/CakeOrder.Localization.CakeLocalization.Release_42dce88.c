// rea decompile_all
// name: CakeOrder.Localization.CakeLocalization$$Release
// address: 0x42dce88
// body: available
// range: 0x42dce88-0x42dcf73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42dcf70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_CakeLocalization__Release(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((DAT_0951741c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b4540);
    FUN_03f5c2a4(&DAT_0918b890);
    DAT_0951741c = 1;
  }
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = CakeOrder_Localization_CakeLocalization__get_IsReady();
  if (((uVar1 & 1) != 0) && (uVar1 = System_String__IsNullOrEmpty(param_1,0), (uVar1 & 1) == 0)) {
    lVar2 = UnityEngine_Localization_Settings_LocalizationSettings__get_StringDatabase(0);
    if (*(int *)(DAT_0918b890 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918b890);
    }
    UnityEngine_Localization_Tables_TableReference__op_Implicit(&local_60,param_1,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uStack_38 = uStack_58;
    local_40 = local_60;
    uStack_28 = uStack_48;
    uStack_30 = uStack_50;
    FUN_05a12f50(lVar2,&local_40,0,DAT_091b4540);
  }
  return;
}

