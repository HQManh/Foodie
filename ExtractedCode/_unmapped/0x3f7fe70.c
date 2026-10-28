// rea decompile_all
// name: WriteZStream
// address: 0x3f7fe70
// body: available
// range: 0x3f7fe70-0x3f7ff17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong WriteZStream(undefined8 *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = 0xfffffff6;
  if (((param_1 != (undefined8 *)0x0) && (param_2 != 0)) && (-1 < (int)param_3)) {
    if (*(char *)((long)param_1 + 0x21) == '\0') {
      plVar3 = (long *)*param_1;
      *plVar3 = param_2;
      *(uint *)(plVar3 + 1) = param_3;
      if (param_3 == 0) {
        uVar1 = 0;
      }
      else {
        do {
          if ((int)plVar3[4] == 0) {
            lVar2 = param_1[1];
            *(undefined4 *)(plVar3 + 4) = 0x1000;
            plVar3[3] = lVar2;
          }
          uVar1 = FUN_03fdb470(*param_1,0);
          if (1 < (uint)uVar1) {
            return uVar1;
          }
          if (((int)plVar3[4] == 0) && (uVar1 = FUN_03f7ff18(param_1), (int)uVar1 < 0)) {
            return uVar1;
          }
        } while ((int)plVar3[1] != 0);
        uVar1 = (ulong)param_3;
      }
    }
    else {
      uVar1 = 0xfffffff5;
    }
  }
  return uVar1;
}

