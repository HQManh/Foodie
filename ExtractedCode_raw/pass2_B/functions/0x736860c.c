// rea decompile_all
// name: Lofelt.NiceVibrations.LofeltHaptics$$lofeltHapticsLoadDirect
// address: 0x736860c
// body: available
// range: 0x736860c-0x73686af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Lofelt_NiceVibrations_LofeltHaptics__lofeltHapticsLoadDirect
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  char *local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (DAT_095208c0 == (code *)0x0) {
    local_60 = "lofelt_sdk";
    uStack_58 = 10;
    local_50 = "lofeltHapticsLoadDirect";
    uStack_48 = 0x17;
    local_40 = 0x200000000;
    local_38 = 0x18;
    local_34 = 0;
    DAT_095208c0 = (code *)thunk_FUN_03f996ec(&local_60);
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x20;
  }
  iVar2 = (*DAT_095208c0)(param_1,lVar1,param_3);
  return iVar2 != 0;
}

