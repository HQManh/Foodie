// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimpleTMP$$PrepareMesh
// address: 0x43b6ae8
// body: available
// range: 0x43b6ae8-0x43b6d07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b6d00 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b6d04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurSimpleTMP__PrepareMesh(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  
  if ((DAT_09517b30 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09188058);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b30 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x110);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    uVar9 = thunk_FUN_03f9944c(DAT_09188058);
    UnityEngine_Mesh___ctor(uVar9,0);
    *(undefined8 *)(param_1 + 0x110) = uVar9;
    thunk_FUN_03f5d7b8(param_1 + 0x110,uVar9);
  }
  iVar3 = *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x44);
  iVar8 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar8 = iVar3;
  }
  uVar2 = iVar8 >> 2;
  if ((*(long *)(param_1 + 0x108) != 0) &&
     (uVar2 * 6 == *(int *)(*(long *)(param_1 + 0x108) + 0x18))) {
    return;
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    UnityEngine_Mesh__Clear(*(long *)(param_1 + 0x110),0);
    if (*(long *)(param_1 + 0x110) != 0) {
      UnityEngine_Mesh__MarkDynamic(*(long *)(param_1 + 0x110),0);
      uVar9 = FUN_03f5c394(DAT_091801b8,uVar2 * 6);
      *(undefined8 *)(param_1 + 0x108) = uVar9;
      thunk_FUN_03f5d7b8(param_1 + 0x108,uVar9);
      if (3 < iVar3) {
        lVar5 = *(long *)(param_1 + 0x108);
        if (lVar5 == 0) goto LAB_043b6d04;
        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar4 = 0;
        lVar7 = 0;
        iVar8 = 3;
        do {
          if (uVar6 <= uVar4) {
LAB_043b6d00:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          iVar3 = iVar8 + -3;
          *(int *)(lVar5 + (lVar7 >> 0x1e) + 0x20) = iVar3;
          if ((uVar6 <= uVar4 + 1) ||
             (*(int *)(lVar5 + (lVar7 + 0x100000000 >> 0x1e) + 0x20) = iVar8 + -2,
             uVar6 <= uVar4 + 2)) goto LAB_043b6d00;
          *(int *)(lVar5 + (lVar7 + 0x200000000 >> 0x1e) + 0x20) = iVar8 + -1;
          if ((uVar6 <= uVar4 + 3) ||
             ((*(int *)(lVar5 + (lVar7 + 0x300000000 >> 0x1e) + 0x20) = iVar8 + -1,
              uVar6 <= uVar4 + 4 ||
              (*(int *)(lVar5 + (lVar7 + 0x400000000 >> 0x1e) + 0x20) = iVar8, uVar6 <= uVar4 + 5)))
             ) goto LAB_043b6d00;
          lVar1 = lVar7 + 0x500000000;
          uVar4 = uVar4 + 6;
          lVar7 = lVar7 + 0x600000000;
          iVar8 = iVar8 + 4;
          *(int *)(lVar5 + (lVar1 >> 0x1e) + 0x20) = iVar3;
        } while ((ulong)uVar2 * 6 - uVar4 != 0);
      }
      return;
    }
  }
LAB_043b6d04:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

