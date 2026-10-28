// rea decompile_all
// name: System.Globalization.UmAlQuraCalendar$$ConvertHijriToGregorian
// address: 0x7539ee4
// body: available
// range: 0x7539ee4-0x753a037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x753a030 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x753a034 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_UmAlQuraCalendar__ConvertHijriToGregorian
               (int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
               undefined4 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 local_48;
  
  if ((DAT_095218bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918c5c0);
    DAT_095218bc = 1;
  }
  local_48 = 0;
  if (*(int *)(DAT_0918c5c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = **(long **)(DAT_0918c5c0 + 0xb8);
  if (lVar3 != 0) {
    uVar4 = param_1 - 0x526;
    if (uVar4 < *(uint *)(lVar3 + 0x18)) {
      param_3 = param_3 + -1;
      local_48 = *(undefined8 *)(lVar3 + 0x20 + (long)(int)uVar4 * 0x10 + 8);
      if (1 < param_2) {
        uVar4 = *(uint *)(lVar3 + 0x20 + (long)(int)uVar4 * 0x10);
        param_2 = param_2 + -1;
        do {
          uVar1 = uVar4 & 1;
          uVar4 = (int)uVar4 >> 1;
          param_2 = param_2 + -1;
          param_3 = param_3 + uVar1 + 0x1d;
        } while (param_2 != 0);
      }
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_48 = System_DateTime__AddDays((double)param_3,&local_48,0);
      uVar2 = System_DateTime__get_Year(&local_48,0);
      *param_4 = uVar2;
      uVar2 = System_DateTime__get_Month(&local_48,0);
      *param_5 = uVar2;
      uVar2 = System_DateTime__get_Day(&local_48,0);
      *param_6 = uVar2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

