// rea decompile_all
// name: System.Array$$SortImpl
// address: 0x75dcac4
// body: available
// range: 0x75dcac4-0x75dcbbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array__SortImpl
               (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09521eb0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09521eb0 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  lVar1 = thunk_FUN_03f99350(param_1,DAT_09180318);
  if ((lVar1 == 0) ||
     ((lVar2 = thunk_FUN_03f99350(param_2,DAT_09180318), param_2 != 0 && (lVar2 == 0)))) {
    System_Array_SorterGenericArray___ctor(&local_70,param_1,param_2,param_5,0);
    System_Array_SorterGenericArray__IntrospectiveSort(&local_70,param_3,param_4,0);
  }
  else {
    System_Array_SorterObjectArray___ctor(&local_58,lVar1,lVar2,param_5,0);
    System_Array_SorterObjectArray__IntrospectiveSort(&local_58,param_3,param_4,0);
  }
  return;
}

