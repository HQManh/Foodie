// rea decompile_all
// name: System.Globalization.CultureNotFoundException$$get_FormatedInvalidCultureId
// address: 0x750145c
// body: available
// range: 0x750145c-0x7501597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_CultureNotFoundException__get_FormatedInvalidCultureId(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_34;
  ulong local_28;
  
  if ((DAT_0952167f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_091b6fc0);
    FUN_03f5c2a4(&DAT_09226078);
    DAT_0952167f = 1;
  }
  local_28 = 0;
  local_28 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
  if ((local_28 & 0xff) != 0) {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    local_28 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
    local_34 = FUN_05c307a4(&local_28,DAT_091b6fc0);
    uVar2 = FUN_03f5c42c(DAT_09535420,&local_34);
    System_String__Format(uVar1,DAT_09226078,uVar2,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x07501594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  return;
}

