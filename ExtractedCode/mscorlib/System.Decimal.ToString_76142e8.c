// rea decompile_all
// name: System.Decimal$$ToString
// address: 0x76142e8
// body: available
// range: 0x76142e8-0x76143bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76143bc to 0x75b8910 System.Number$$FormatDecimal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Decimal__ToString(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((DAT_0952207a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_0952207a = 1;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
  }
  if (param_2 == 0) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = System_String__GetRawStringData(param_2,0);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
  }
  uVar4 = System_Globalization_NumberFormatInfo__GetInstance(param_3,0);
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188a70);
  }
  System_Number__FormatDecimal(uVar1,uVar2,uVar3,uVar5,uVar4,0);
  return;
}

