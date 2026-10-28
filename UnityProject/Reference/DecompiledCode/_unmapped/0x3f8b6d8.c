// rea decompile_all
// name: FUN_03f8b6d8
// address: 0x3f8b6d8
// body: available
// range: 0x3f8b6d8-0x3f8b78f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_03f8b6d8(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  
  *param_2 = 0;
  do {
    iVar4 = accept(*(int *)(param_1 + 4),(sockaddr *)0x0,(socklen_t *)0x0);
    if (iVar4 != -1) {
      pvVar6 = operator_new(0x10);
      FUN_03f88330(pvVar6,*(undefined8 *)(param_1 + 0x20));
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      *param_2 = pvVar6;
      iVar4 = FUN_03f883d8(pvVar6,(long)iVar4,uVar1,uVar2,uVar3);
      if (iVar4 == 0) {
        return 0;
      }
      pvVar6 = (void *)*param_2;
      if (pvVar6 != (void *)0x0) {
        FUN_03f88380(pvVar6);
        operator_delete(pvVar6);
      }
      *param_2 = 0;
      return iVar4;
    }
    piVar5 = (int *)__errno();
  } while (*piVar5 == 4);
  FUN_03f8aea4(param_1);
  return -3;
}

