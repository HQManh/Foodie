// rea decompile_all
// name: FUN_03fa8e28
// address: 0x3fa8e28
// body: available
// range: 0x3fa8e28-0x3fa8f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03fa8e28(long param_1,long param_2,long param_3)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  
  FUN_03fae000();
  uVar1 = *(uint *)(param_1 + 0xa0);
  if ((int)uVar1 < 1) {
LAB_03fa8ed4:
    lVar5 = param_1 + (long)(int)uVar1 * 0x10;
    *(long *)(lVar5 + 0x18) = param_2;
    *(long *)(lVar5 + 0x20) = param_3;
    *(uint *)(param_1 + 0xa0) = uVar1 + 1;
  }
  else {
    lVar5 = 0;
    do {
      if (*(long *)(param_1 + lVar5 + 0x18) == param_2) goto LAB_03fa8ef0;
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 * 0x10 - lVar5 != 0);
    if (uVar1 != 8) goto LAB_03fa8ed4;
    uVar1 = *(uint *)(param_1 + 0xa4);
    uVar3 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      plVar4 = *(long **)(param_1 + 0x98);
      do {
        if (*plVar4 == param_2) goto LAB_03fa8ef0;
        uVar3 = uVar3 - 1;
        plVar4 = plVar4 + 2;
      } while (uVar3 != 0);
    }
    if (uVar1 == *(uint *)(param_1 + 0xa8)) {
      pvVar2 = realloc(*(void **)(param_1 + 0x98),
                       -(ulong)((uVar1 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                       (ulong)(uVar1 << 1) << 4);
      *(void **)(param_1 + 0x98) = pvVar2;
      *(uint *)(param_1 + 0xa8) = uVar1 << 1;
    }
    else {
      pvVar2 = *(void **)(param_1 + 0x98);
    }
    plVar4 = (long *)((long)pvVar2 + (long)(int)uVar1 * 0x10);
    *plVar4 = param_2;
    plVar4[1] = param_3;
    *(uint *)(param_1 + 0xa4) = uVar1 + 1;
  }
  uVar6 = 1;
LAB_03fa8ef4:
  FUN_03fae338(param_1);
  return uVar6;
LAB_03fa8ef0:
  uVar6 = 0;
  goto LAB_03fa8ef4;
}

