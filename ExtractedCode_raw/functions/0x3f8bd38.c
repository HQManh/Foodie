// rea decompile_all
// name: FUN_03f8bd38
// address: 0x3f8bd38
// body: available
// range: 0x3f8bd38-0x3f8be3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_03f8bd38(long param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5,
            undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  void *__ptr;
  ulong uVar2;
  uint uVar3;
  int local_44;
  
  *param_6 = 0;
  local_44 = 0;
  __ptr = (void *)FUN_03f8b040(param_2,&local_44);
  if (param_5 == 0) {
    uVar3 = 0;
  }
  else {
    if ((param_5 & 0xffff7fe8) != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0x273d;
      goto LAB_03f8bde0;
    }
    uVar3 = param_5 & 7;
    if (0x7fff < param_5) {
      uVar3 = param_5 & 7 | 0x8000;
    }
  }
  iVar1 = FUN_03f8b864(param_1,param_3,(long)param_4,uVar3,param_6,__ptr,&local_44);
  if (iVar1 == 0) {
    if ((local_44 == 0) || (uVar2 = FUN_03f8b454(__ptr,local_44,param_7), (uVar2 & 1) != 0)) {
      free(__ptr);
      return 0;
    }
    *param_7 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x14) = 0x273f;
  }
  else {
    *param_7 = 0xffffffff;
  }
LAB_03f8bde0:
  free(__ptr);
  return 0xfffffffd;
}

