// rea decompile_all
// name: Mono.Math.BigInteger.Kernel$$LeftShift
// address: 0x740dd9c
// body: available
// range: 0x740dd9c-0x740dd9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Math_BigInteger_Kernel__LeftShift(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  
  if ((DAT_09520f06 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b68);
    FUN_03f5c2a4(&DAT_091e61e8);
    DAT_09520f06 = 1;
  }
  if (param_2 == 0) {
    if (param_1 == 0) goto LAB_0740df6c;
    iVar2 = *(int *)(param_1 + 0x10);
    lVar4 = thunk_FUN_03f9944c(DAT_09181b68);
    Mono_Math_BigInteger___ctor(lVar4,param_1,iVar2 + 1);
  }
  else {
    if (param_1 == 0) {
LAB_0740df6c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = *(int *)(param_1 + 0x10);
    uVar14 = (int)param_2 >> 5;
    auVar15 = thunk_FUN_03f9944c(DAT_09181b68);
    lVar4 = auVar15._0_8_;
    Mono_Math_BigInteger___ctor(lVar4,auVar15._8_8_,uVar14 + iVar2 + 1);
    uVar6 = *(uint *)(param_1 + 0x10);
    uVar5 = (ulong)uVar6;
    if ((param_2 & 0x1f) == 0) {
      if (uVar6 != 0) {
        if ((lVar4 == 0) || (lVar11 = *(long *)(param_1 + 0x18), lVar11 == 0)) goto LAB_0740df6c;
        lVar7 = *(long *)(lVar4 + 0x18);
        uVar8 = (ulong)*(uint *)(lVar11 + 0x18);
        puVar10 = (undefined4 *)(lVar11 + 0x20);
        puVar13 = (undefined4 *)(lVar7 + (long)(int)uVar14 * 4 + 0x20);
        do {
          if (uVar8 == 0) goto LAB_0740df68;
          if (lVar7 == 0) goto LAB_0740df6c;
          if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_0740df68;
          uVar5 = uVar5 - 1;
          uVar8 = uVar8 - 1;
          uVar14 = uVar14 + 1;
          *puVar13 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar5 != 0);
      }
      if (lVar4 == 0) goto LAB_0740df6c;
    }
    else {
      if (uVar6 == 0) {
        if (lVar4 == 0) goto LAB_0740df6c;
        uVar5 = 0;
        uVar6 = 0;
      }
      else {
        lVar11 = *(long *)(param_1 + 0x18);
        if (lVar11 == 0) goto LAB_0740df6c;
        uVar6 = 0;
        uVar9 = (ulong)*(uint *)(lVar11 + 0x18);
        lVar7 = (long)(int)uVar14 * 4 + 0x20;
        puVar12 = (uint *)(lVar11 + 0x20);
        uVar8 = uVar5;
        uVar1 = uVar14;
        do {
          if (uVar9 == 0) goto LAB_0740df68;
          if ((lVar4 == 0) || (lVar11 = *(long *)(lVar4 + 0x18), lVar11 == 0)) goto LAB_0740df6c;
          if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0740df68;
          uVar3 = *puVar12;
          uVar9 = uVar9 - 1;
          uVar8 = uVar8 - 1;
          uVar1 = uVar1 + 1;
          *(uint *)(lVar11 + lVar7) = uVar3 << (ulong)(param_2 & 0x1f) | uVar6;
          lVar7 = lVar7 + 4;
          uVar6 = uVar3 >> (ulong)(-param_2 & 0x1f);
          puVar12 = puVar12 + 1;
        } while (uVar8 != 0);
      }
      lVar11 = *(long *)(lVar4 + 0x18);
      if (lVar11 == 0) goto LAB_0740df6c;
      if (*(uint *)(lVar11 + 0x18) <= (uint)(uVar5 + (long)(int)uVar14)) {
LAB_0740df68:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(uint *)(lVar11 + (uVar5 + (long)(int)uVar14) * 4 + 0x20) = uVar6;
    }
    Mono_Math_BigInteger__Normalize(lVar4);
  }
  return lVar4;
}

