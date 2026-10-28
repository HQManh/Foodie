// rea decompile_all
// name: CreateZStream
// address: 0x3f7fb90
// body: available
// range: 0x3f7fb90-0x3f7fc83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * CreateZStream(int param_1,char param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  void *__ptr;
  undefined8 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  if (param_3 != 0) {
    __ptr = calloc(1,0x70);
    uVar4 = 0xfffffff1;
    if (param_2 != '\0') {
      uVar4 = 0x1f;
    }
    if (param_1 == 0) {
      iVar1 = FUN_03fd8b7c(__ptr,uVar4,"1.3.1-unity",0x70);
    }
    else {
      iVar1 = FUN_03fdad34(__ptr,0xffffffff,8,uVar4,8,0,"1.3.1-unity",0x70);
    }
    if (iVar1 == 0) {
      *(undefined **)((long)__ptr + 0x40) = &UNK_03f7fc84;
      *(undefined **)((long)__ptr + 0x48) = &UNK_03f7fc90;
      puVar2 = calloc(1,0x28);
      *puVar2 = __ptr;
      puVar2[2] = param_3;
      puVar2[3] = param_4;
      *(char *)(puVar2 + 4) = (char)param_1;
      pvVar3 = malloc(0x1000);
      *(undefined4 *)((long)__ptr + 0x20) = 0x1000;
      puVar2[1] = pvVar3;
      *(undefined8 *)((long)__ptr + 0x10) = 0;
      *(void **)((long)__ptr + 0x18) = pvVar3;
      return puVar2;
    }
    free(__ptr);
  }
  return (undefined8 *)0x0;
}

