// rea decompile_all
// name: System.Security.Cryptography.SHA1Internal$$ProcessBlock
// address: 0x7475d70
// body: available
// range: 0x7475d70-0x747626b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7476264 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7476268 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_SHA1Internal__ProcessBlock(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 0x40;
  System_Security_Cryptography_SHA1Internal__InitialiseBuff(lVar14);
  System_Security_Cryptography_SHA1Internal__FillBuff(lVar14);
  if (lVar2 != 0) {
    uVar13 = *(uint *)(lVar2 + 0x18);
    if ((((uVar13 != 0) && (uVar13 != 1)) && (2 < uVar13)) && ((uVar13 != 3 && (4 < uVar13)))) {
      if (lVar14 == 0) goto LAB_07476268;
      uVar9 = (ulong)*(uint *)(lVar14 + 0x18);
      piVar7 = (int *)(lVar14 + 0x30);
      uVar8 = 0;
      uVar13 = *(uint *)(lVar2 + 0x24);
      uVar12 = *(uint *)(lVar2 + 0x28);
      uVar11 = *(uint *)(lVar2 + 0x2c);
      uVar10 = *(uint *)(lVar2 + 0x30);
      uVar6 = *(uint *)(lVar2 + 0x20);
      do {
        if (((uVar9 <= uVar8) || (uVar9 <= uVar8 + 1)) ||
           ((uVar9 <= uVar8 + 2 || ((uVar9 <= uVar8 + 3 || (uVar9 <= uVar8 + 4))))))
        goto LAB_07476264;
        uVar3 = uVar13 >> 2 | uVar13 << 0x1e;
        uVar13 = uVar10 + 0x5a827999 + (uVar6 >> 0x1b | uVar6 << 5) +
                 (uVar12 & uVar13 | uVar11 & (uVar13 ^ 0xffffffff)) + piVar7[-4];
        uVar4 = uVar6 >> 2 | uVar6 << 0x1e;
        uVar10 = uVar13 >> 2 | uVar13 * 0x40000000;
        uVar6 = uVar11 + 0x5a827999 + (uVar3 & uVar6 | uVar12 & (uVar6 ^ 0xffffffff)) + piVar7[-3] +
                (uVar13 >> 0x1b | uVar13 * 0x20);
        uVar1 = uVar12 + 0x5a827999 + (uVar4 & uVar13 | uVar3 & (uVar13 ^ 0xffffffff)) + piVar7[-2]
                + (uVar6 >> 0x1b | uVar6 * 0x20);
        uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
        uVar13 = uVar3 + 0x5a827999 + (uVar10 & uVar6 | uVar4 & (uVar6 ^ 0xffffffff)) + piVar7[-1] +
                 (uVar1 >> 0x1b | uVar1 * 0x20);
        bVar5 = uVar8 < 0xf;
        uVar12 = uVar1 >> 2 | uVar1 * 0x40000000;
        uVar6 = uVar4 + 0x5a827999 + *piVar7 +
                (uVar1 & (uVar6 >> 2 | uVar6 * 0x40000000) | uVar10 & (uVar1 ^ 0xffffffff)) +
                (uVar13 >> 0x1b | uVar13 * 0x20);
        piVar7 = piVar7 + 5;
        uVar8 = uVar8 + 5;
      } while (bVar5);
      uVar8 = 0x14;
      piVar7 = (int *)(lVar14 + 0x80);
      do {
        if ((((uVar9 <= uVar8) || (uVar9 <= uVar8 + 1)) || (uVar9 <= uVar8 + 2)) ||
           ((uVar9 <= uVar8 + 3 || (uVar9 <= uVar8 + 4)))) goto LAB_07476264;
        uVar3 = uVar13 >> 2 | uVar13 << 0x1e;
        uVar4 = uVar6 >> 2 | uVar6 << 0x1e;
        uVar13 = uVar10 + 0x6ed9eba1 + (uVar6 >> 0x1b | uVar6 << 5) +
                 (uVar12 ^ uVar11 ^ uVar13) + piVar7[-4];
        uVar10 = uVar13 >> 2 | uVar13 * 0x40000000;
        uVar6 = uVar11 + 0x6ed9eba1 + (uVar3 ^ uVar12 ^ uVar6) + piVar7[-3] +
                (uVar13 >> 0x1b | uVar13 * 0x20);
        uVar1 = uVar12 + 0x6ed9eba1 + (uVar4 ^ uVar3 ^ uVar13) + piVar7[-2] +
                (uVar6 >> 0x1b | uVar6 * 0x20);
        uVar13 = uVar3 + 0x6ed9eba1 + (uVar10 ^ uVar4 ^ uVar6) + piVar7[-1] +
                 (uVar1 >> 0x1b | uVar1 * 0x20);
        uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
        uVar12 = uVar1 >> 2 | uVar1 * 0x40000000;
        bVar5 = uVar8 < 0x23;
        uVar6 = uVar4 + 0x6ed9eba1 + *piVar7 + (uVar10 ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^ uVar1)
                + (uVar13 >> 0x1b | uVar13 * 0x20);
        uVar8 = uVar8 + 5;
        piVar7 = piVar7 + 5;
      } while (bVar5);
      uVar8 = 0x28;
      piVar7 = (int *)(lVar14 + 0xd0);
      do {
        if (((uVar9 <= uVar8) || (uVar9 <= uVar8 + 1)) ||
           ((uVar9 <= uVar8 + 2 || ((uVar9 <= uVar8 + 3 || (uVar9 <= uVar8 + 4))))))
        goto LAB_07476264;
        uVar3 = uVar13 >> 2 | uVar13 << 0x1e;
        uVar4 = uVar6 >> 2 | uVar6 << 0x1e;
        uVar13 = uVar10 + 0x8f1bbcdc + (uVar6 >> 0x1b | uVar6 << 5) +
                 (uVar13 & (uVar12 | uVar11) | uVar12 & uVar11) + piVar7[-4];
        uVar6 = uVar11 + 0x8f1bbcdc + ((uVar3 | uVar12) & uVar6 | uVar3 & uVar12) + piVar7[-3] +
                (uVar13 >> 0x1b | uVar13 * 0x20);
        uVar10 = uVar13 >> 2 | uVar13 * 0x40000000;
        uVar1 = uVar12 + 0x8f1bbcdc + (uVar13 & (uVar4 | uVar3) | uVar4 & uVar3) + piVar7[-2] +
                (uVar6 >> 0x1b | uVar6 * 0x20);
        uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
        uVar13 = uVar3 + 0x8f1bbcdc + (uVar6 & (uVar10 | uVar4) | uVar10 & uVar4) + piVar7[-1] +
                 (uVar1 >> 0x1b | uVar1 * 0x20);
        uVar12 = uVar1 >> 2 | uVar1 * 0x40000000;
        bVar5 = uVar8 < 0x37;
        uVar6 = uVar4 + 0x8f1bbcdc + *piVar7 +
                (uVar1 & (uVar10 | uVar6 >> 2 | uVar6 * 0x40000000) |
                uVar10 & (uVar6 >> 2 | uVar6 * 0x40000000)) + (uVar13 >> 0x1b | uVar13 * 0x20);
        uVar8 = uVar8 + 5;
        piVar7 = piVar7 + 5;
      } while (bVar5);
      uVar8 = 0x3c;
      piVar7 = (int *)(lVar14 + 0x120);
      while ((((uVar8 < uVar9 && (uVar8 + 1 < uVar9)) && (uVar8 + 2 < uVar9)) &&
             ((uVar8 + 3 < uVar9 && (uVar8 + 4 < uVar9))))) {
        uVar3 = uVar13 >> 2 | uVar13 << 0x1e;
        uVar4 = uVar6 >> 2 | uVar6 << 0x1e;
        uVar13 = uVar10 + 0xca62c1d6 + (uVar6 >> 0x1b | uVar6 << 5) +
                 (uVar12 ^ uVar11 ^ uVar13) + piVar7[-4];
        uVar10 = uVar13 >> 2 | uVar13 * 0x40000000;
        uVar6 = uVar11 + 0xca62c1d6 + (uVar3 ^ uVar12 ^ uVar6) + piVar7[-3] +
                (uVar13 >> 0x1b | uVar13 * 0x20);
        uVar1 = uVar12 + 0xca62c1d6 + (uVar4 ^ uVar3 ^ uVar13) + piVar7[-2] +
                (uVar6 >> 0x1b | uVar6 * 0x20);
        uVar13 = uVar3 + 0xca62c1d6 + (uVar10 ^ uVar4 ^ uVar6) + piVar7[-1] +
                 (uVar1 >> 0x1b | uVar1 * 0x20);
        uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
        uVar12 = uVar1 >> 2 | uVar1 * 0x40000000;
        bVar5 = 0x4a < uVar8;
        uVar6 = uVar4 + 0xca62c1d6 + *piVar7 + (uVar10 ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^ uVar1)
                + (uVar13 >> 0x1b | uVar13 * 0x20);
        uVar8 = uVar8 + 5;
        piVar7 = piVar7 + 5;
        if (bVar5) {
          *(uint *)(lVar2 + 0x20) = uVar6 + *(uint *)(lVar2 + 0x20);
          *(uint *)(lVar2 + 0x24) = *(uint *)(lVar2 + 0x24) + uVar13;
          *(uint *)(lVar2 + 0x28) = *(uint *)(lVar2 + 0x28) + uVar12;
          *(uint *)(lVar2 + 0x2c) = *(uint *)(lVar2 + 0x2c) + uVar11;
          *(uint *)(lVar2 + 0x30) = *(uint *)(lVar2 + 0x30) + uVar10;
          return;
        }
      }
    }
LAB_07476264:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07476268:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

