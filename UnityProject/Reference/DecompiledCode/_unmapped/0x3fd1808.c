// rea decompile_all
// name: FUN_03fd1808
// address: 0x3fd1808
// body: available
// range: 0x3fd1808-0x3fd1aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd1848 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fd1808(ulong param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  if ((param_1 & 7) != 0) {
    (*(code *)PTR_FUN_09515620)("Bad arg to GC_general_register_disappearing_link");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (DAT_09748510 == 0) {
    if ((DAT_097480e0 != 0) && (iVar2 = FUN_0404be40(1,&DAT_097480e8), iVar2 != 0)) {
      FUN_03fcbfa4();
    }
    if (((DAT_095156a8 == 0xffffffffffffffff) ||
        ((ulong)(1L << (DAT_095156a8 & 0x3f)) < DAT_095156b0)) &&
       (FUN_03fd16a4(&DAT_095156a0,&DAT_095156a8), DAT_09535be0 != 0)) {
      FUN_03fcb51c("Grew %s table to %u entries\n",&DAT_01a5ff5c,
                   1 << (ulong)((uint)DAT_095156a8 & 0x1f));
    }
    iVar2 = DAT_097480e0;
    uVar6 = (param_1 >> (DAT_095156a8 + 3 & 0x3f) ^ param_1 >> 3) &
            (-1L << (DAT_095156a8 & 0x3f) ^ 0xffffffffffffffffU);
    for (puVar3 = *(ulong **)(DAT_095156a0 + uVar6 * 8); puVar3 != (ulong *)0x0;
        puVar3 = (ulong *)puVar3[1]) {
      if ((*puVar3 ^ param_1) == 0xffffffffffffffff) {
        puVar3[2] = ~param_2;
        if (iVar2 == 0) {
          return 1;
        }
        DAT_097480e8 = 0;
        return 1;
      }
    }
    puVar3 = (ulong *)FUN_03fcc3a4(0x18,1);
    if (puVar3 == (ulong *)0x0) {
      if (DAT_097480e0 != 0) {
        DAT_097480e8 = 0;
      }
      puVar3 = (ulong *)(*(code *)PTR_FUN_09515640)(0x18);
      if (puVar3 == (ulong *)0x0) {
        return 2;
      }
      if ((DAT_097480e0 != 0) && (iVar2 = FUN_0404be40(1,&DAT_097480e8), iVar2 != 0)) {
        FUN_03fcbfa4();
      }
      iVar2 = DAT_097480e0;
      uVar6 = (param_1 >> (DAT_095156a8 + 3 & 0x3f) ^ param_1 >> 3) &
              (-1L << (DAT_095156a8 & 0x3f) ^ 0xffffffffffffffffU);
      puVar4 = *(ulong **)(DAT_095156a0 + uVar6 * 8);
      for (puVar5 = puVar4; puVar5 != (ulong *)0x0; puVar5 = (ulong *)puVar5[1]) {
        if ((*puVar5 ^ param_1) == 0xffffffffffffffff) {
          puVar5[2] = ~param_2;
          if (iVar2 != 0) {
            DAT_097480e8 = 0;
          }
          FUN_03fd1308(puVar3);
          return 1;
        }
      }
    }
    else {
      puVar4 = *(ulong **)(DAT_095156a0 + uVar6 * 8);
    }
    lVar1 = DAT_095156a0;
    puVar3[2] = ~param_2;
    iVar2 = DAT_097480f0;
    *puVar3 = ~param_1;
    puVar3[1] = (ulong)puVar4;
    *(ulong **)(lVar1 + uVar6 * 8) = puVar3;
    DAT_095156b0 = DAT_095156b0 + 1;
    if (iVar2 != 0) {
      uVar6 = DAT_095156a0 + uVar6 * 8;
      FUN_0404c050(1L << (uVar6 >> 0xc & 0x3f),&DAT_0957c0c8 + (uVar6 >> 0x12 & 0x7fff) * 8);
    }
    if (DAT_097480e0 != 0) {
      DAT_097480e8 = 0;
    }
    if (iVar2 != 0) {
      FUN_0404c050(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                   &DAT_0957c0c8 + ((ulong)puVar3 >> 0x12 & 0x7fff) * 8);
    }
    return 0;
  }
  return 3;
}

