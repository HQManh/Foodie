// rea decompile_all
// name: FUN_03fabdb8
// address: 0x3fabdb8
// body: available
// range: 0x3fabdb8-0x3fabe63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fabdb8(undefined8 *param_1,long param_2,uint param_3)

{
  long lVar1;
  void *pvVar2;
  ulong local_28;
  
  local_28 = (ulong)param_3;
  pvVar2 = bsearch(&local_28,
                   (void *)(DAT_09535218 + *(int *)(DAT_09535220 + 0x134) +
                           (long)*(int *)(*(long *)(param_2 + 0x28) + 8) * 8),
                   (ulong)*(uint *)(param_2 + 0x20),8,(__compar_fn_t)&LAB_03fabda8);
  if (pvVar2 == (void *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  else {
    lVar1 = DAT_09535218 + *(int *)(DAT_09535220 + 0x128);
    FUN_03f76318(param_1,param_2,lVar1 + (ulong)*(uint *)((long)pvVar2 + 4),
                 lVar1 + (ulong)*(uint *)((long)pvVar2 + 0xc));
  }
  return;
}

