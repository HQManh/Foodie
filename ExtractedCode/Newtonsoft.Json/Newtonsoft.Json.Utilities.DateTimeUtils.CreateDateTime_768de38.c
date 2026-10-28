// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$CreateDateTime
// address: 0x768de38
// body: available
// range: 0x768de38-0x768df33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_DateTimeUtils__CreateDateTime(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 local_58;
  
  if ((DAT_09522585 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09522585 = 1;
  }
  iVar5 = param_1[3];
  local_58 = 0;
  iVar7 = iVar5;
  if (iVar5 == 0x18) {
    iVar7 = 0;
    param_1[3] = 0;
  }
  uVar6 = param_1[2];
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[4];
  uVar4 = param_1[5];
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_DateTime___ctor(&local_58,uVar1,uVar3,uVar6,iVar7,uVar2,uVar4,0);
  local_58 = System_DateTime__AddTicks(&local_58,(long)(int)param_1[6],0);
  if (iVar5 == 0x18) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_DateTime__AddDays(0x3ff0000000000000,&local_58,0);
  }
  return;
}

