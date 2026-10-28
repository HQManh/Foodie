// rea decompile_all
// name: FUN_03fc6c34
// address: 0x3fc6c34
// body: available
// range: 0x3fc6c34-0x3fc6cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc6c34(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  do {
    do {
      if (((((param_1[1] == param_1[5]) && (param_1[2] == param_1[6])) && (param_1[3] == param_1[7])
           ) && ((param_1[3] == param_1[2] || (param_1[4] == param_1[8])))) ||
         ((lVar4 = *param_1, *(long *)(lVar4 + 0x38) == 0 ||
          (uVar3 = FUN_03fc56ac(lVar4 + 0x20,lVar4 + 0x28,param_1[4]), (uVar3 & 1) == 0)))) {
        return;
      }
      plVar1 = (long *)param_1[3];
      lVar4 = param_1[4];
      lVar5 = *plVar1;
      uVar2 = *(ushort *)(plVar1 + 1);
      param_1[4] = lVar4 + 0x10;
    } while (lVar4 + 0x10 != lVar5 + (ulong)uVar2 * 0x10);
    do {
      plVar7 = plVar1 + 2;
      plVar6 = (long *)param_1[2];
      if (plVar7 == (long *)param_1[2]) break;
      lVar4 = plVar1[3];
      param_1[4] = *plVar7;
      plVar6 = plVar7;
      plVar1 = plVar7;
    } while ((short)lVar4 == 0);
    param_1[3] = (long)plVar6;
  } while( true );
}

