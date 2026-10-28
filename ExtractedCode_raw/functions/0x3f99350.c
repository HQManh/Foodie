// rea decompile_all
// name: FUN_03f99350
// address: 0x3f99350
// body: available
// range: 0x3f99350-0x3f9944b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_03f99350(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *local_28;
  
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    uVar2 = FUN_03fbf4c4(param_2,lVar3);
    if ((uVar2 & 1) == 0) {
      if ((*(ushort *)(lVar3 + 0x135) >> 0xc & 1) == 0) {
        param_1 = (long *)0x0;
      }
      else {
        if (((((*(byte *)(param_2 + 0x118) >> 5 & 1) != 0) || (*(char *)(param_2 + 0x2a) == '\x1e'))
            || (*(char *)(param_2 + 0x2a) == '\x13')) &&
           ((*(long *)(param_2 + 0x70) != 0 &&
            (lVar3 = *(long *)(*(long *)(param_2 + 0x70) + 0x28), lVar3 != 0)))) {
          local_28 = (long *)FUN_03fa8d98(param_1,lVar3);
          if (local_28 != (long *)0x0) {
            return param_1;
          }
          iVar1 = (*(code *)**(undefined8 **)param_1[2])((undefined8 *)param_1[2],lVar3,&local_28);
          if (-1 < iVar1) {
            uVar2 = FUN_03fa8e28(param_1,lVar3,local_28);
            if ((uVar2 & 1) == 0) {
              (**(code **)(*local_28 + 0x10))();
              local_28 = (long *)FUN_03fa8d98(param_1,lVar3);
            }
            if (local_28 != (long *)0x0) {
              return param_1;
            }
          }
        }
        if (DAT_095353e8 != param_2) {
          param_1 = (long *)0x0;
        }
      }
    }
  }
  return param_1;
}

