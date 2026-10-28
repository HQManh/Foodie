// rea decompile_all
// name: System.String$$InitializeProbabilisticMap
// address: 0x7434418
// body: available
// range: 0x7434418-0x74344ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_String__InitializeProbabilisticMap(uint *param_1,long param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((DAT_09521033 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521033 = 1;
  }
  if (0 < (int)param_3) {
    uVar4 = 0;
    bVar2 = false;
    do {
      while( true ) {
        uVar1 = *(ushort *)(param_2 + uVar4 * 2);
        param_1[(ulong)uVar1 & 7] = 1 << (ulong)(uVar1 >> 3 & 0x1f) | param_1[(ulong)uVar1 & 7];
        if (uVar1 < 0x100) break;
        uVar4 = uVar4 + 1;
        uVar5 = (ulong)(uVar1 >> 6) & 0x1c;
        *(uint *)(uVar5 + (long)param_1) =
             *(uint *)(uVar5 + (long)param_1) | 1 << (ulong)(uVar1 >> 0xb);
        if (param_3 == uVar4) {
          if (!bVar2) {
            return;
          }
          goto LAB_074344d4;
        }
      }
      bVar3 = (ulong)param_3 - 1 != uVar4;
      uVar4 = uVar4 + 1;
      bVar2 = true;
    } while (bVar3);
LAB_074344d4:
    *param_1 = *param_1 | 1;
  }
  return;
}

