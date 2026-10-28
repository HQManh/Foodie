// rea decompile_all
// name: Mono.Globalization.Unicode.MSCompatUnicodeTable$$FillCJK
// address: 0x7416cc0
// body: available
// range: 0x7416cc0-0x7416de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7416de4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07416de0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Mono_Globalization_Unicode_MSCompatUnicodeTable__FillCJK
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char local_54 [4];
  
  if ((DAT_09520f51 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d38);
    DAT_09520f51 = 1;
  }
  local_54[0] = '\0';
  if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  pcVar4 = local_54;
  local_54[0] = '\0';
  uVar3 = 0;
  uVar1 = *(undefined8 *)(*(long *)(DAT_09187d38 + 0xb8) + 0x88);
  System_Threading_Monitor__Enter(uVar1,local_54,0);
  uVar2 = extraout_x1;
  if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
    FUN_03f5c424();
    uVar2 = extraout_x1_00;
  }
  Mono_Globalization_Unicode_MSCompatUnicodeTable__FillCJKCore(param_1,uVar2,param_3,param_4);
  Mono_Globalization_Unicode_MSCompatUnicodeTable__SetCJKReferences
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar3,pcVar4);
  if (local_54[0] != '\0') {
    System_Threading_Monitor__Exit(uVar1,0);
  }
  return;
}

