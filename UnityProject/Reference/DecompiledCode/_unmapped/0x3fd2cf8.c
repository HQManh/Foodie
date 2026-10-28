// rea decompile_all
// name: FUN_03fd2cf8
// address: 0x3fd2cf8
// body: available
// range: 0x3fd2cf8-0x3fd2e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd2cf8(ulong *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  uVar5 = param_1[1];
  if (uVar5 != 0xffffffffffffffff) {
    bVar1 = false;
    uVar6 = 0;
    do {
      puVar4 = *(ulong **)(*param_1 + uVar6 * 8);
      if (puVar4 != (ulong *)0x0) {
        puVar7 = (ulong *)0x0;
        do {
          lVar3 = FUN_03fcaf44(~*puVar4);
          if ((lVar3 == 0) || (iVar2 = FUN_03fd1084(), iVar2 != 0)) {
            puVar7 = puVar4;
            puVar4 = (ulong *)puVar4[1];
          }
          else {
            FUN_03fd37d8(puVar4);
            iVar2 = DAT_097480f0;
            puVar8 = (ulong *)puVar4[1];
            if (puVar7 == (ulong *)0x0) {
              bVar1 = true;
              *(ulong **)(*param_1 + uVar6 * 8) = puVar8;
            }
            else {
              puVar7[1] = (ulong)puVar8;
              if (iVar2 != 0) {
                FUN_0404c050(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                             &DAT_0957c0c8 + ((ulong)puVar7 >> 0x12 & 0x7fff) * 8);
              }
            }
            FUN_03fd37d8(puVar4);
            param_1[2] = param_1[2] - 1;
            puVar4 = puVar8;
          }
        } while (puVar4 != (ulong *)0x0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 >> (uVar5 & 0x3f) == 0);
    if ((bVar1) && (DAT_097480f0 != 0)) {
      FUN_0404c050(1L << (*param_1 >> 0xc & 0x3f),&DAT_0957c0c8 + (*param_1 >> 0x12 & 0x7fff) * 8);
    }
  }
  return;
}

