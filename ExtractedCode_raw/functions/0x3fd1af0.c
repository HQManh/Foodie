// rea decompile_all
// name: FUN_03fd1af0
// address: 0x3fd1af0
// body: available
// range: 0x3fd1af0-0x3fd1c3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03fd1af0(ulong param_1)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if ((param_1 & 7) != 0) {
    return false;
  }
  if ((DAT_097480e0 != 0) && (iVar1 = FUN_0404be40(1,&DAT_097480e8), iVar1 != 0)) {
    FUN_03fcbfa4();
  }
  iVar1 = DAT_097480f0;
  if (DAT_095156a8 == 0xffffffffffffffff) {
    puVar4 = (ulong *)0x0;
    goto LAB_03fd1c08;
  }
  uVar3 = (param_1 >> (DAT_095156a8 + 3 & 0x3f) ^ param_1 >> 3) &
          (-1L << (DAT_095156a8 & 0x3f) ^ 0xffffffffffffffffU);
  puVar4 = *(ulong **)(DAT_095156a0 + uVar3 * 8);
  if (puVar4 == (ulong *)0x0) goto LAB_03fd1c08;
  if ((*puVar4 ^ param_1) == 0xffffffffffffffff) {
    *(ulong *)(DAT_095156a0 + uVar3 * 8) = puVar4[1];
    if (iVar1 != 0) {
      puVar2 = (ulong *)(DAT_095156a0 + uVar3 * 8);
      goto LAB_03fd1bd0;
    }
  }
  else {
    do {
      puVar2 = puVar4;
      puVar4 = (ulong *)puVar2[1];
      if (puVar4 == (ulong *)0x0) goto LAB_03fd1c08;
    } while ((*puVar4 ^ param_1) != 0xffffffffffffffff);
    puVar2[1] = puVar4[1];
    if (iVar1 != 0) {
LAB_03fd1bd0:
      FUN_0404c050(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                   &DAT_0957c0c8 + ((ulong)puVar2 >> 0x12 & 0x7fff) * 8);
    }
  }
  DAT_095156b0 = DAT_095156b0 + -1;
LAB_03fd1c08:
  if (DAT_097480e0 != 0) {
    DAT_097480e8 = 0;
  }
  if (puVar4 != (ulong *)0x0) {
    FUN_03fd1308(puVar4);
  }
  return puVar4 != (ulong *)0x0;
}

