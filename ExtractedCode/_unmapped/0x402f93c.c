// rea decompile_all
// name: FUN_0402f93c
// address: 0x402f93c
// body: available
// range: 0x402f93c-0x402f9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0402f93c(long param_1,long param_2,undefined8 *param_3)

{
  bool bVar1;
  long *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined7 uStack_38;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined8 uStack_29;
  
  if (*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
    local_70 = (long *)__dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                                      &__cxxabiv1::__class_type_info::typeinfo,0);
    bVar1 = false;
    if (local_70 != (long *)0x0) {
      uStack_68 = 0;
      uStack_58 = 0xffffffffffffffff;
      uStack_30 = 0;
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      local_31 = 0;
      local_40 = 0;
      uStack_29 = 0x100;
      local_60 = param_1;
      (**(code **)(*local_70 + 0x38))(local_70,&local_70,*param_3,1);
      bVar1 = (int)local_40 == 1;
      if (bVar1) {
        *param_3 = local_50;
      }
    }
    return bVar1;
  }
  return true;
}

