// rea decompile_all
// name: System.Globalization.GregorianCalendarHelper$$ToDateTime
// address: 0x753314c
// body: available
// range: 0x753314c-0x753324f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Globalization_GregorianCalendarHelper__ToDateTime
          (undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_68;
  
  if ((DAT_09521875 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184eb8);
    DAT_09521875 = 1;
  }
  iVar1 = System_Globalization_GregorianCalendarHelper__GetYearOffset(param_1,param_2,param_9,1);
  if (*(int *)(DAT_09184eb8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09184eb8);
  }
  lVar2 = System_Globalization_GregorianCalendarHelper__DateToTicks(iVar1 + param_2,param_3,param_4)
  ;
  lVar3 = System_Globalization_GregorianCalendarHelper__TimeToTicks(param_5,param_6,param_7,param_8)
  ;
  System_Globalization_GregorianCalendarHelper__CheckTicksRange(param_1,lVar3 + lVar2);
  local_68 = 0;
  System_DateTime___ctor(&local_68,lVar3 + lVar2,0);
  return local_68;
}

