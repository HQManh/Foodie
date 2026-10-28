// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$TryParseHebrewNumber
// address: 0x7506778
// body: available
// range: 0x7506778-0x75068cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75068c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Globalization_DateTimeFormatInfo__TryParseHebrewNumber
          (long *param_1,undefined1 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 local_38;
  
  if ((DAT_095216a6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185068);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_095216a6 = 1;
  }
  local_38 = 0;
  *param_3 = 0xffffffff;
  *param_2 = 0;
  uVar6 = *(uint *)(param_1 + 2);
  if (*(uint *)(param_1 + 1) <= uVar6) {
LAB_075068c8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar2 = *(undefined2 *)(*param_1 + (long)(int)uVar6 * 2);
  if (*(int *)(DAT_09185068 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Globalization_HebrewNumber__IsDigit(uVar2);
  if ((uVar5 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 1);
    local_38 = (local_38 >> 8 & 0xffffff) << 8;
    do {
      if (uVar1 <= uVar6) goto LAB_075068c8;
      uVar2 = *(undefined2 *)(*param_1 + (long)(int)uVar6 * 2);
      if (*(int *)(DAT_09185068 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_HebrewNumber__ParseByChar(uVar2,&local_38);
      if (uVar4 < 2) {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar4 != 2) && (uVar1 = *(uint *)(param_1 + 1), (int)uVar6 < (int)uVar1));
    if (uVar4 == 2) {
      lVar3 = param_1[2];
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System___DTString__Advance(param_1,uVar6 - (int)lVar3,0);
      *param_3 = local_38._4_4_;
      return 1;
    }
  }
  return 0;
}

