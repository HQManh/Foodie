// rea decompile_all
// name: FUN_03fd36d4
// address: 0x3fd36d4
// body: available
// range: 0x3fd36d4-0x3fd37d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_03fd36d4(ulong *param_1,long param_2,ulong param_3,int param_4,ulong *param_5,
                    long *param_6)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  size_t __n;
  long lVar4;
  ulong uVar5;
  
  if (param_4 == 0 && DAT_097480f4 == 0) {
    puVar1 = (ulong *)((long)param_1 + (0x1000 - param_3));
    if (puVar1 < param_1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar5 = 0;
      do {
        if ((*(ulong *)(param_2 + (uVar5 >> 6) * 8 + 0x40) >> (uVar5 & 0x3f) & 1) == 0) {
          lVar4 = lVar4 + param_3;
          *param_1 = (ulong)param_5;
          param_5 = param_1;
        }
        param_1 = (ulong *)((long)param_1 + param_3);
        uVar5 = uVar5 + (param_3 >> 4);
      } while (param_1 <= puVar1);
    }
    *param_6 = *param_6 + lVar4;
  }
  else {
    param_5 = (ulong *)FUN_03fd4e7c(param_1,param_2,param_3,param_5,param_6);
  }
  if (*(char *)(param_2 + 0x18) == '\x02') {
    uVar5 = *(ulong *)(param_2 + 0x20);
    if (uVar5 < 0x801) {
      uVar2 = 0;
      if ((uVar5 & 0xffff) != 0) {
        uVar2 = 0x1000 / ((uint)uVar5 & 0xffff);
      }
      __n = (size_t)((uVar2 * (uint)uVar5 >> 4 & 0xfff) + 0x40 >> 3 & 0x3f8);
    }
    else {
      __n = 0x28;
    }
    memset((void *)(param_2 + 0x40),0xff,__n);
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = 0x1000 / uVar5;
    }
    *(ulong *)(param_2 + 0x38) = uVar3;
  }
  return param_5;
}

