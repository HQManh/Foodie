// rea decompile_all
// name: System.IO.Stream$$BlockingBeginRead
// address: 0x757f928
// body: available
// range: 0x757f928-0x757f9f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_IO_Stream__BlockingBeginRead
               (long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,long param_5,
               undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((DAT_09521ad1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09194c08);
    DAT_09521ad1 = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x368))
                    (param_1,param_2,param_3,param_4,*(undefined8 *)(*param_1 + 0x370));
  lVar2 = thunk_FUN_03f9944c(DAT_09194c08);
  System_Object___ctor(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = param_6;
  *(undefined4 *)(lVar2 + 0x34) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10),param_6);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x18))
              (*(undefined8 *)(param_5 + 0x40),lVar2,*(undefined8 *)(param_5 + 0x28));
  }
  return lVar2;
}

