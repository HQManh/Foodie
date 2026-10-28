// rea decompile_all
// name: Mono.Math.BigInteger.Kernel$$MinusEq
// address: 0x740f688
// body: available
// range: 0x740f688-0x740f78b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740f784 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740f788 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Math_BigInteger_Kernel__MinusEq(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  
  if (((param_1 == 0) || (param_2 == 0)) || (lVar8 = *(long *)(param_2 + 0x18), lVar8 == 0)) {
LAB_0740f788:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = *(long *)(param_1 + 0x18);
  uVar3 = *(uint *)(lVar8 + 0x18);
  uVar9 = 0;
  uVar10 = 0;
  lVar1 = lVar7 + 0x20;
  do {
    if (uVar3 == uVar9) goto LAB_0740f784;
    if (lVar7 == 0) goto LAB_0740f788;
    uVar4 = *(uint *)(lVar7 + 0x18);
    if (uVar4 <= uVar9) goto LAB_0740f784;
    uVar2 = *(int *)(lVar8 + 0x20 + uVar9 * 4) + uVar10;
    uVar5 = *(int *)(lVar1 + uVar9 * 4) - uVar2;
    *(uint *)(lVar1 + uVar9 * 4) = uVar5;
    uVar9 = uVar9 + 1;
    uVar10 = (uint)(CARRY4(uVar2,uVar5) || uVar2 < uVar10);
  } while (uVar9 < *(uint *)(param_2 + 0x10));
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 != (uint)uVar9) && (uVar10 != 0)) {
    do {
      if (uVar4 == uVar9) goto LAB_0740f784;
      iVar6 = *(int *)(lVar1 + uVar9 * 4) + -1;
      *(int *)(lVar1 + uVar9 * 4) = iVar6;
      if (iVar6 != 0) {
        uVar3 = *(uint *)(param_1 + 0x10);
        break;
      }
      uVar3 = *(uint *)(param_1 + 0x10);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  if (uVar3 != 0) {
    uVar10 = uVar3 - 1;
    do {
      if (uVar4 <= uVar3 - 1) {
LAB_0740f784:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (*(int *)(lVar7 + (long)(int)uVar10 * 4 + 0x20) != 0) {
        return;
      }
      *(uint *)(param_1 + 0x10) = uVar10;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0xffffffff);
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}

