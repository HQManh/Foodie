// rea decompile_all
// name: Mono.Math.BigInteger.Kernel$$PlusEq
// address: 0x740f78c
// body: available
// range: 0x740f78c-0x740f917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740f8e8 to 0x740d318 Mono.Math.BigInteger$$Normalize (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x740f910 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740f914 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Math_BigInteger_Kernel__PlusEq(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar9 = *(uint *)(param_2 + 0x10);
    lVar6 = param_1;
    if (uVar9 <= uVar3) {
      lVar6 = param_2;
      param_2 = param_1;
    }
    lVar7 = *(long *)(param_2 + 0x18);
    uVar2 = uVar3;
    if (uVar3 <= uVar9) {
      uVar2 = uVar9;
    }
    if (lVar7 != 0) {
      uVar10 = *(ulong *)(lVar7 + 0x18);
      lVar6 = *(long *)(lVar6 + 0x18);
      uVar12 = uVar3;
      if (uVar9 <= uVar3) {
        uVar12 = uVar9;
      }
      lVar8 = *(long *)(param_1 + 0x18);
      uVar11 = 0;
      uVar5 = 0;
      uVar13 = uVar10 & 0xffffffff;
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      do {
        if (uVar13 == uVar11) goto LAB_0740f910;
        if (lVar6 == 0) goto LAB_0740f914;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_0740f910;
        if (lVar8 == 0) goto LAB_0740f914;
        uVar4 = *(uint *)(lVar8 + 0x18);
        if (uVar4 <= uVar11) goto LAB_0740f910;
        uVar5 = uVar5 + *(uint *)(lVar7 + 0x20 + uVar11 * 4) +
                (ulong)*(uint *)(lVar6 + 0x20 + uVar11 * 4);
        *(int *)(lVar8 + 0x20 + uVar11 * 4) = (int)uVar5;
        uVar11 = uVar11 + 1;
        uVar5 = uVar5 >> 0x20;
      } while (uVar12 != uVar11);
      if (uVar5 == 0) {
LAB_0740f888:
        if ((uVar3 < uVar9) && (uVar12 < uVar2 - 1)) {
          uVar9 = (uint)uVar10;
          uVar10 = (ulong)uVar12;
          uVar3 = uVar12;
          if (uVar12 <= uVar9) {
            uVar3 = uVar9;
          }
          if (uVar12 <= uVar4) {
            uVar12 = uVar4;
          }
          do {
            if ((uVar3 == uVar10) || (uVar12 == uVar10)) goto LAB_0740f910;
            *(undefined4 *)(lVar8 + 0x20 + uVar10 * 4) = *(undefined4 *)(lVar7 + 0x20 + uVar10 * 4);
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar2);
        }
        *(uint *)(param_1 + 0x10) = uVar2 + 1;
        Mono_Math_BigInteger__Normalize();
        return;
      }
      if (uVar12 < uVar2) {
        do {
          if ((uVar13 <= uVar11) || (uVar4 == uVar11)) goto LAB_0740f910;
          uVar12 = *(uint *)(lVar7 + 0x20 + uVar11 * 4);
          iVar1 = uVar12 + 1;
          *(int *)(lVar8 + 0x20 + uVar11 * 4) = iVar1;
          uVar11 = uVar11 + 1;
        } while ((uVar11 < uVar2) && (0xfffffffe < uVar12));
        uVar12 = (uint)uVar11;
        if (iVar1 != 0) goto LAB_0740f888;
      }
      if (uVar12 < uVar4) {
        *(undefined4 *)(lVar8 + (ulong)uVar12 * 4 + 0x20) = 1;
        *(uint *)(param_1 + 0x10) = uVar12 + 1;
        return;
      }
LAB_0740f910:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_0740f914:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

