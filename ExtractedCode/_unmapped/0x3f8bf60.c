// rea decompile_all
// name: FUN_03f8bf60
// address: 0x3f8bf60
// body: available
// range: 0x3f8bf60-0x3f8c09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_03f8bf60(long param_1,uint param_2,undefined4 *param_3,uint param_4,void *param_5,uint param_6,
            uint *param_7)

{
  int iVar1;
  void *__dest;
  undefined4 local_54;
  
  if (param_2 == 0x98000004) {
    if (0xb < param_4) {
      local_54 = *param_3;
      iVar1 = setsockopt(*(int *)(param_1 + 4),1,9,&local_54,4);
      if (-1 < iVar1) {
        return 0;
      }
    }
    FUN_03f8aea4(param_1);
  }
  else {
    if ((int)param_4 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = malloc((ulong)param_4);
      memcpy(__dest,param_3,(ulong)param_4);
    }
    iVar1 = ioctl(*(int *)(param_1 + 4),(ulong)param_2,__dest);
    if (iVar1 != -1) {
      if (__dest != (void *)0x0) {
        if ((int)param_6 <= (int)param_4) {
          param_4 = param_6;
        }
        if ((param_5 != (void *)0x0) && (0 < (int)param_4)) {
          memcpy(param_5,__dest,(ulong)param_4);
        }
        free(__dest);
        *param_7 = param_4;
        return 0;
      }
      *param_7 = 0;
      return 0;
    }
    FUN_03f8aea4(param_1);
    free(__dest);
  }
  return 0xfffffffd;
}

