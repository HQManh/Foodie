// rea decompile_all
// name: Mono.Math.BigInteger.Kernel$$Subtract
// address: 0x740d5b4
// body: available
// range: 0x740d5b4-0x740d75f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740d758 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740d75c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Math_BigInteger_Kernel__Subtract(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  
  if ((DAT_09520f03 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b68);
    DAT_09520f03 = 1;
  }
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    auVar13 = thunk_FUN_03f9944c(DAT_09181b68);
    lVar7 = auVar13._0_8_;
    Mono_Math_BigInteger___ctor(lVar7,auVar13._8_8_,uVar2);
    if (((lVar7 != 0) && (param_2 != 0)) && (lVar11 = *(long *)(param_2 + 0x18), lVar11 != 0)) {
      lVar8 = *(long *)(lVar7 + 0x18);
      lVar9 = *(long *)(param_1 + 0x18);
      uVar10 = 0;
      uVar3 = *(uint *)(lVar11 + 0x18);
      uVar12 = 0;
      do {
        if (uVar3 == uVar10) goto LAB_0740d758;
        if (lVar9 == 0) goto LAB_0740d75c;
        uVar4 = *(uint *)(lVar9 + 0x18);
        if (uVar4 <= uVar10) goto LAB_0740d758;
        if (lVar8 == 0) goto LAB_0740d75c;
        uVar5 = *(uint *)(lVar8 + 0x18);
        if (uVar5 <= uVar10) goto LAB_0740d758;
        uVar1 = *(int *)(lVar11 + 0x20 + uVar10 * 4) + uVar12;
        uVar6 = *(int *)(lVar9 + 0x20 + uVar10 * 4) - uVar1;
        *(uint *)(lVar8 + 0x20 + uVar10 * 4) = uVar6;
        uVar10 = uVar10 + 1;
        uVar12 = (uint)(CARRY4(uVar1,uVar6) || uVar1 < uVar12);
      } while (uVar10 < *(uint *)(param_2 + 0x10));
      if (*(int *)(param_1 + 0x10) != (int)uVar10) {
        if (uVar12 != 0) {
          do {
            if ((uVar4 == uVar10) || (uVar5 == uVar10)) goto LAB_0740d758;
            *(int *)(lVar8 + 0x20 + uVar10 * 4) = *(int *)(lVar9 + 0x20 + uVar10 * 4) + -1;
            lVar11 = uVar10 * 4;
            uVar10 = uVar10 + 1;
          } while ((*(int *)(lVar9 + 0x20 + lVar11) == 0) && (uVar10 < *(uint *)(param_1 + 0x10)));
          if ((uint)uVar10 == *(uint *)(param_1 + 0x10)) goto LAB_0740d73c;
          uVar10 = uVar10 & 0xffffffff;
        }
        uVar12 = (uint)uVar10;
        uVar10 = uVar10 & 0xffffffff;
        uVar3 = uVar12;
        if (uVar12 <= uVar4) {
          uVar3 = uVar4;
        }
        if (uVar12 <= uVar5) {
          uVar12 = uVar5;
        }
        do {
          if ((uVar3 == uVar10) || (uVar12 == uVar10)) {
LAB_0740d758:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined4 *)(lVar8 + 0x20 + uVar10 * 4) = *(undefined4 *)(lVar9 + 0x20 + uVar10 * 4);
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(param_1 + 0x10));
      }
LAB_0740d73c:
      Mono_Math_BigInteger__Normalize(lVar7);
      return lVar7;
    }
  }
LAB_0740d75c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

