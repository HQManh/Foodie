// rea decompile_all
// name: FUN_03f89340
// address: 0x3f89340
// body: available
// range: 0x3f89340-0x3f893db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_03f89340(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  
  if (-2 < param_2) {
    iVar6 = 0;
    do {
      lVar1 = *param_1;
      lVar2 = param_1[1];
      if (0 < (int)((ulong)(lVar2 - lVar1) >> 3)) {
        uVar5 = 0;
        do {
          plVar3 = *(long **)(*param_1 + uVar5 * 8);
          uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0);
          if ((uVar4 & 1) != 0) goto LAB_03f893c8;
          uVar5 = uVar5 + 1;
        } while (((ulong)(lVar2 - lVar1) >> 3 & 0xffffffff) != uVar5);
      }
      thunk_FUN_03f8a1a4(10,1);
      iVar6 = iVar6 + 10;
    } while ((param_2 == -1) || (iVar6 <= param_2));
  }
  uVar5 = 0x102;
LAB_03f893c8:
  return uVar5 & 0xffffffff;
}

