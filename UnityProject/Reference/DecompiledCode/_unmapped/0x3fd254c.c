// rea decompile_all
// name: FUN_03fd254c
// address: 0x3fd254c
// body: available
// range: 0x3fd254c-0x3fd2683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd254c(ulong *param_1)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  uVar4 = param_1[1];
  if (uVar4 != 0xffffffffffffffff) {
    uVar5 = 0;
    bVar1 = false;
    do {
      puVar3 = *(ulong **)(*param_1 + uVar5 * 8);
      if (puVar3 != (ulong *)0x0) {
        puVar6 = (ulong *)0x0;
        do {
          iVar2 = FUN_03fd1084(~puVar3[2]);
          if (iVar2 == 0) {
            *(undefined8 *)~*puVar3 = 0;
            FUN_03fd37d8(puVar3);
            iVar2 = DAT_097480f0;
            puVar7 = (ulong *)puVar3[1];
            if (puVar6 == (ulong *)0x0) {
              bVar1 = true;
              *(ulong **)(*param_1 + uVar5 * 8) = puVar7;
            }
            else {
              puVar6[1] = (ulong)puVar7;
              if (iVar2 != 0) {
                FUN_0404c050(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                             &DAT_0957c0c8 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8);
              }
            }
            FUN_03fd37d8(puVar3);
            param_1[2] = param_1[2] - 1;
            puVar3 = puVar7;
          }
          else {
            puVar6 = puVar3;
            puVar3 = (ulong *)puVar3[1];
          }
        } while (puVar3 != (ulong *)0x0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 >> (uVar4 & 0x3f) == 0);
    if ((bVar1) && (DAT_097480f0 != 0)) {
      FUN_0404c050(1L << (*param_1 >> 0xc & 0x3f),&DAT_0957c0c8 + (*param_1 >> 0x12 & 0x7fff) * 8);
    }
  }
  return;
}

