// rea decompile_all
// name: Mono.Math.BigInteger.Kernel$$RightShift
// address: 0x740df70
// body: available
// range: 0x740df70-0x740df73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Math_BigInteger_Kernel__RightShift(long param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  
  if ((DAT_09520f07 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b68);
    FUN_03f5c2a4(&DAT_091e61f0);
    DAT_09520f07 = 1;
  }
  if (param_2 == 0) {
    lVar7 = thunk_FUN_03f9944c(DAT_09181b68);
    Mono_Math_BigInteger___ctor(lVar7,param_1);
    return lVar7;
  }
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar2 = (int)param_2 >> 5;
    auVar13 = thunk_FUN_03f9944c(DAT_09181b68);
    lVar7 = auVar13._0_8_;
    Mono_Math_BigInteger___ctor(lVar7,auVar13._8_8_,(iVar3 - iVar2) + 1);
    if ((lVar7 != 0) && (lVar8 = *(long *)(lVar7 + 0x18), lVar8 != 0)) {
      iVar3 = *(int *)(lVar8 + 0x18);
      uVar9 = iVar3 - 2;
      if ((param_2 & 0x1f) == 0) {
        if (iVar3 != 1) {
          lVar11 = *(long *)(param_1 + 0x18);
          if (lVar11 == 0) goto LAB_0740e0e0;
          uVar4 = *(uint *)(lVar11 + 0x18);
          do {
            uVar1 = (ulong)uVar9;
            if ((uVar4 <= (uint)((long)iVar2 + uVar1)) || (iVar3 == 0)) goto LAB_0740e0dc;
            uVar10 = (ulong)uVar9;
            uVar9 = uVar9 - 1;
            *(undefined4 *)(lVar8 + uVar10 * 4 + 0x20) =
                 *(undefined4 *)(lVar11 + ((long)iVar2 + uVar1) * 4 + 0x20);
          } while (uVar9 != 0xffffffff);
        }
      }
      else if (iVar3 != 1) {
        lVar11 = *(long *)(param_1 + 0x18);
        if (lVar11 == 0) goto LAB_0740e0e0;
        uVar4 = *(uint *)(lVar11 + 0x18);
        uVar12 = 0;
        do {
          uVar1 = (ulong)uVar9;
          if ((uVar4 <= (uint)((long)iVar2 + uVar1)) || (iVar3 == 0)) {
LAB_0740e0dc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar10 = (ulong)uVar9;
          uVar9 = uVar9 - 1;
          uVar5 = *(uint *)(lVar11 + ((long)iVar2 + uVar1) * 4 + 0x20);
          uVar6 = uVar5 >> (ulong)(param_2 & 0x1f) | uVar12;
          uVar12 = uVar5 << (ulong)(-param_2 & 0x1f);
          *(uint *)(lVar8 + uVar10 * 4 + 0x20) = uVar6;
        } while (uVar9 != 0xffffffff);
      }
      Mono_Math_BigInteger__Normalize(lVar7);
      return lVar7;
    }
  }
LAB_0740e0e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

