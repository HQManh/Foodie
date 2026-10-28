// rea decompile_all
// name: AnhPD.PopupMinigame.TowelDrag$$GetRandomTargetPoints
// address: 0x41cfc2c
// body: available
// range: 0x41cfc2c-0x41cfe1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41cfe1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_PopupMinigame_TowelDrag__GetRandomTargetPoints(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_98;
  float fStack_94;
  float local_8c;
  float fStack_88;
  
  if ((DAT_09516a2b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b19b8);
    FUN_03f5c2a4(&DAT_091b19b0);
    FUN_03f5c2a4(&DAT_0917d050);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516a2b = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917d050);
  FUN_058abdf4(lVar3,param_2,DAT_091b19b0);
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0xe8) == 0) {
LAB_041cfe1c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Collider2D__get_bounds(&local_98,*(long *)(param_1 + 0xe8),0);
    if (0 < param_2) {
      iVar7 = 0;
      do {
        iVar8 = 0x14;
        do {
          fVar9 = (float)UnityEngine_Random__Range(local_98 - local_8c,local_98 + local_8c,0);
          fVar10 = (float)UnityEngine_Random__Range(fStack_94 - fStack_88,fStack_94 + fStack_88,0);
          if (*(long *)(param_1 + 0xe8) == 0) goto LAB_041cfe1c;
          uVar4 = UnityEngine_Collider2D__OverlapPoint(fVar9,fVar10,*(long *)(param_1 + 0xe8),0);
          lVar2 = DAT_091b19b8;
        } while (((uVar4 & 1) == 0) &&
                (iVar8 = iVar8 + -1, fVar9 = local_98, fVar10 = fStack_94, iVar8 != 0));
        if (lVar3 == 0) goto LAB_041cfe1c;
        lVar5 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_041cfe1c;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar1 * 8;
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(float *)(lVar5 + 0x20) = fVar9;
          *(float *)(lVar5 + 0x24) = fVar10;
        }
        else {
          FUN_058ac614(fVar9,fVar10,lVar3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != param_2);
    }
  }
  return lVar3;
}

