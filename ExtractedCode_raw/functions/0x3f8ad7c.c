// rea decompile_all
// name: FUN_03f8ad7c
// address: 0x3f8ad7c
// body: available
// range: 0x3f8ad7c-0x3f8aea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f8ad7c(undefined1 *param_1,uint param_2,uint param_3,uint param_4)

{
  int __domain;
  int iVar1;
  undefined4 local_14;
  
  iVar1 = -1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 1;
  __domain = -1;
  if (param_2 < 9) {
    __domain = *(int *)(&DAT_023abc00 + (ulong)param_2 * 4);
  }
  if (param_3 < 5) {
    iVar1 = param_3 + 1;
  }
  *(int *)(param_1 + 8) = __domain;
  *(int *)(param_1 + 0xc) = iVar1;
  if ((0x29 < param_4) || ((1L << ((ulong)param_4 & 0x3f) & 0x2000042104fU) == 0)) {
    param_4 = 0xffffffff;
  }
  *(uint *)(param_1 + 0x10) = param_4;
  iVar1 = socket(__domain,iVar1,param_4);
  *(int *)(param_1 + 4) = iVar1;
  if ((((iVar1 == -1) && (*(int *)(param_1 + 8) == 2)) && (*(int *)(param_1 + 0xc) == 3)) &&
     (*(int *)(param_1 + 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 4;
    iVar1 = socket(2,3,4);
    *(int *)(param_1 + 4) = iVar1;
  }
  if (iVar1 != -1) {
    local_14 = 1;
    iVar1 = setsockopt(iVar1,1,2,&local_14,4);
    if (iVar1 != -1) {
      *param_1 = 1;
      return 0;
    }
    iVar1 = close(*(int *)(param_1 + 4));
    if (iVar1 != -1) {
      return 0xfffffffd;
    }
  }
  FUN_03f8aea4(param_1);
  return 0xfffffffd;
}

