// rea decompile_all
// name: ChocDino.UIFX.TrailEffectTMP$$PrepareMesh
// address: 0x43b9a80
// body: available
// range: 0x43b9a80-0x43b9c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b9c8c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b9c90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffectTMP__PrepareMesh(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  if ((DAT_09517b44 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09188058);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b44 = 1;
  }
  plVar9 = (long *)(param_1 + 0xb0);
  lVar10 = *plVar9;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(lVar10,0,0);
  if ((uVar4 & 1) != 0) {
    lVar10 = thunk_FUN_03f9944c(DAT_09188058);
    UnityEngine_Mesh___ctor(lVar10,0);
    *plVar9 = lVar10;
    thunk_FUN_03f5d7b8(plVar9,lVar10);
  }
  if ((param_2 != 0) && (lVar10 = *(long *)(param_2 + 0x60), lVar10 != 0)) {
    if (*(int *)(lVar10 + 0x18) == 0) {
LAB_043b9c8c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    iVar1 = *(int *)(lVar10 + 0x28);
    plVar8 = (long *)(param_1 + 0xa8);
    iVar7 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar7 = iVar1;
    }
    uVar3 = (*(int *)(param_1 + 0x20) + (*(byte *)(param_1 + 0x54) ^ 1)) * (iVar7 >> 2);
    if ((*plVar8 != 0) && (uVar3 * 6 == *(int *)(*plVar8 + 0x18))) {
      return;
    }
    if (*plVar9 != 0) {
      UnityEngine_Mesh__Clear(*plVar9,0);
      if (*plVar9 != 0) {
        UnityEngine_Mesh__MarkDynamic(*plVar9,0);
        lVar10 = FUN_03f5c394(DAT_091801b8,uVar3 * 6);
        *plVar8 = lVar10;
        thunk_FUN_03f5d7b8(plVar8,lVar10);
        if (0 < (int)uVar3) {
          lVar10 = *plVar8;
          if (lVar10 == 0) goto LAB_043b9c90;
          uVar2 = *(uint *)(lVar10 + 0x18);
          lVar6 = 0;
          iVar7 = 3;
          do {
            uVar5 = (uint)lVar6;
            if (uVar2 <= uVar5) goto LAB_043b9c8c;
            iVar1 = iVar7 + -3;
            *(int *)(lVar10 + (long)(int)uVar5 * 4 + 0x20) = iVar1;
            if (uVar2 <= uVar5 + 1) goto LAB_043b9c8c;
            *(int *)(lVar10 + (long)(int)(uVar5 + 1) * 4 + 0x20) = iVar7 + -2;
            if (uVar2 <= uVar5 + 2) goto LAB_043b9c8c;
            *(int *)(lVar10 + (long)(int)(uVar5 + 2) * 4 + 0x20) = iVar7 + -1;
            if (uVar2 <= uVar5 + 3) goto LAB_043b9c8c;
            *(int *)(lVar10 + (long)(int)(uVar5 + 3) * 4 + 0x20) = iVar7 + -1;
            if (uVar2 <= uVar5 + 4) goto LAB_043b9c8c;
            *(int *)(lVar10 + (long)(int)(uVar5 + 4) * 4 + 0x20) = iVar7;
            if (uVar2 <= uVar5 + 5) goto LAB_043b9c8c;
            lVar6 = lVar6 + 6;
            iVar7 = iVar7 + 4;
            *(int *)(lVar10 + (long)(int)(uVar5 + 5) * 4 + 0x20) = iVar1;
          } while ((ulong)uVar3 * 6 - lVar6 != 0);
        }
        return;
      }
    }
  }
LAB_043b9c90:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

