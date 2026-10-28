// rea decompile_all
// name: thunk_FUN_03fe0404
// address: 0x3f8e020
// body: available
// range: 0x3f8e020-0x3f8e023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long thunk_FUN_03fe0404(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 5) != 0) {
    return -100;
  }
  lVar1 = dlopen(0,1);
  if (lVar1 == 0) {
    uVar2 = dlerror();
    FUN_03fe0850(&uStack_18,"dlerror() = %s",uVar2);
    if (*(int *)(param_1 + 5) == 0) {
      *param_1 = 
      "External/il2cpp/builds/external/baselib/Source/Posix/Baselib_DynamicLibrary_PosixApi.inl.h";
      param_1[1] = "Baselib_DynamicLibrary_OpenUtf8";
      *(undefined4 *)(param_1 + 2) = 0x21;
      param_1[3] = 0;
      param_1[4] = uStack_18;
      param_1[5] = 0x20006000000;
    }
    lVar1 = -100;
  }
  return lVar1;
}

