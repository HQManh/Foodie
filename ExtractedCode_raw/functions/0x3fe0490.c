// rea decompile_all
// name: FUN_03fe0490
// address: 0x3fe0490
// body: available
// range: 0x3fe0490-0x3fe05a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fe0490(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  puVar2 = PTR_s_<argument_name_stripped>_09515918;
  iVar1 = *(int *)(param_3 + 5);
  if ((param_1 == -100) && (iVar1 == 0)) {
    uVar4 = 0x3e;
  }
  else {
    if (param_2 != 0) {
      if (iVar1 != 0) {
        return 0;
      }
      dlerror();
      lVar3 = dlsym(param_1,param_2);
      if (lVar3 != 0) {
        return lVar3;
      }
      lVar3 = dlerror();
      if (lVar3 == 0) {
        return 0;
      }
      FUN_03fe0850(&local_28,"dlerror() = %s",lVar3);
      if (*(int *)(param_3 + 5) != 0) {
        return 0;
      }
      *param_3 = 
      "External/il2cpp/builds/external/baselib/Source/Posix/Baselib_DynamicLibrary_PosixApi.inl.h";
      param_3[1] = "Baselib_DynamicLibrary_GetFunction";
      *(undefined4 *)(param_3 + 2) = 99;
      param_3[3] = 0;
      param_3[4] = local_28;
      param_3[5] = 0x20006000001;
      return 0;
    }
    if (iVar1 != 0) {
      return 0;
    }
    uVar4 = 0x3f;
  }
  param_3[3] = 0;
  param_3[4] = puVar2;
  *param_3 = 
  "External/il2cpp/builds/external/baselib/Source/CProxy/Baselib_DynamicLibrary_CProxy.inl.h";
  param_3[1] = "Baselib_DynamicLibrary_GetFunction";
  param_3[2] = uVar4;
  param_3[5] = 0x10001000003;
  return 0;
}

