// rea decompile_all
// name: FUN_03fcf85c
// address: 0x3fcf85c
// body: available
// range: 0x3fcf85c-0x3fcf99f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcf99c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcf85c(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  
  if (DAT_097486f8 < 1) {
    iVar6 = 0;
    bVar3 = false;
  }
  else {
    lVar7 = 0;
    bVar3 = false;
    iVar6 = 0;
    do {
      uVar5 = *(ulong *)(DAT_097486f0 + lVar7 * 8);
      if ((uVar5 & 1) != 0) {
        uVar5 = ~uVar5;
      }
      if ((uVar5 != 0) && (iVar4 = (*DAT_097486e8)(uVar5), iVar4 != 0)) {
        if (iVar4 == 2) {
          *(ulong *)(DAT_097486f0 + (long)iVar6 * 8) = ~uVar5;
        }
        else {
          if (iVar4 != 1) {
            (*(code *)PTR_FUN_09515620)("Bad toggle-ref status returned by callback");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar3 = true;
          *(ulong *)(DAT_097486f0 + (long)iVar6 * 8) = uVar5;
        }
        iVar6 = iVar6 + 1;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < DAT_097486f8);
  }
  uVar1 = DAT_097486f8 - iVar6;
  if (uVar1 != 0 && iVar6 <= DAT_097486f8) {
    memset((void *)(DAT_097486f0 + (long)iVar6 * 8),0,
           -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
    DAT_097486f8 = iVar6;
  }
  bVar2 = false;
  if (DAT_097480f0 != 0) {
    bVar2 = bVar3;
  }
  if (bVar2) {
    FUN_0404c050(1L << (DAT_097486f0 >> 0xc & 0x3f),
                 &DAT_0957c0c8 + (DAT_097486f0 >> 0x12 & 0x7fff) * 8);
  }
  return;
}

