// rea decompile_all
// name: Mono.Math.BigInteger.Kernel$$MultiplyMod2p32pmod
// address: 0x742ad54
// body: available
// range: 0x742ad54-0x742ae63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Math_BigInteger_Kernel__MultiplyMod2p32pmod
               (long param_1,int param_2,int param_3,long param_4,int param_5,int param_6,
               long param_7,int param_8,int param_9)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x20;
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x18) == 0)) {
    param_4 = 0;
  }
  else {
    param_4 = param_4 + 0x20;
  }
  if ((param_7 == 0) || (*(int *)(param_7 + 0x18) == 0)) {
    param_7 = 0;
  }
  else {
    param_7 = param_7 + 0x20;
  }
  puVar7 = (uint *)(param_1 + (long)param_2 * 4);
  puVar2 = (uint *)(param_1 + ((long)param_3 + (long)param_2) * 4);
  if (puVar7 < puVar2) {
    puVar1 = (uint *)(param_4 + (long)param_5 * 4);
    puVar3 = (uint *)(param_4 + ((long)param_6 + (long)param_5) * 4);
    puVar4 = (uint *)(param_7 + ((long)param_9 + (long)param_8) * 4);
    puVar8 = (uint *)(param_7 + (long)param_8 * 4);
    do {
      if (((*puVar7 != 0) && (puVar1 < puVar3)) && (puVar8 < puVar4)) {
        lVar11 = 0;
        uVar10 = 0;
        puVar9 = puVar8;
        do {
          puVar5 = (uint *)((long)puVar1 + lVar11);
          lVar11 = lVar11 + 4;
          uVar6 = uVar10 + *puVar9 + (ulong)*puVar5 * (ulong)*puVar7;
          uVar10 = uVar6 >> 0x20;
          *puVar9 = (uint)uVar6;
          puVar9 = (uint *)(lVar11 + (long)puVar8);
          if (puVar3 <= puVar5 + 1) break;
        } while (puVar9 < puVar4);
        if ((puVar9 < puVar4) && (uVar10 != 0)) {
          *puVar9 = (uint)(uVar6 >> 0x20);
        }
      }
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    } while (puVar7 < puVar2);
  }
  return;
}

