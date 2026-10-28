// rea decompile_all
// name: ChocDino.UIFX.MotionBlurReal$$PrepareBuffers
// address: 0x43a8ac4
// body: available
// range: 0x43a8ac4-0x43a8e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a8dfc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43a8e00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool ChocDino_UIFX_MotionBlurReal__PrepareBuffers(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  long *plVar14;
  
  if ((DAT_09517ad9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fce0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091b16f8);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_0917cfe8);
    FUN_03f5c2a4(&DAT_091807a0);
    FUN_03f5c2a4(&DAT_091807e8);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09517ad9 = 1;
  }
  plVar14 = (long *)(param_1 + 0x48);
  if (*plVar14 == 0) {
    if (param_2 == 0) goto LAB_043a8e00;
LAB_043a8bb4:
    uVar6 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
    uVar7 = thunk_FUN_03f9944c(DAT_0917cfe8);
    FUN_058941e8(uVar7,uVar6,DAT_091b16f8);
    *(undefined8 *)(param_1 + 0x48) = uVar7;
    thunk_FUN_03f5d7b8(plVar14,uVar7);
    uVar6 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
    uVar7 = FUN_03f5c394(DAT_091807a0,uVar6);
    *(undefined8 *)(param_1 + 0x50) = uVar7;
    thunk_FUN_03f5d7b8();
LAB_043a8c34:
    uVar6 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
    bVar4 = false;
    *(undefined4 *)(param_1 + 0x44) = uVar6;
    *(byte *)(param_1 + 0x1c0) = *(byte *)(param_1 + 0x1c0) | 2;
  }
  else {
    if (param_2 == 0) goto LAB_043a8e00;
    cVar2 = *(char *)(param_1 + 0x40);
    iVar5 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
    if (*plVar14 == 0) goto LAB_043a8e00;
    if (*(int *)(*plVar14 + 0x18) < iVar5) goto LAB_043a8bb4;
    iVar5 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
    if (*plVar14 == 0) goto LAB_043a8e00;
    bVar4 = cVar2 != '\0';
    if (iVar5 < *(int *)(*plVar14 + 0x18)) goto LAB_043a8c34;
  }
  UnityEngine_UI_VertexHelper__GetUIVertexStream(param_2,*(undefined8 *)(param_1 + 0x48),0);
  lVar8 = *(long *)(param_1 + 0xe8);
  uVar3 = *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x44);
  uVar13 = (ulong)uVar3;
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) < (int)uVar3)) {
    uVar7 = FUN_03f5c394(DAT_091807f8,uVar13);
    *(undefined8 *)(param_1 + 0xe8) = uVar7;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0xe8),uVar7);
    uVar7 = FUN_03f5c394(DAT_091807e8,uVar13);
    *(undefined8 *)(param_1 + 0xf0) = uVar7;
    thunk_FUN_03f5d7b8();
    uVar7 = FUN_03f5c394(DAT_0917fce0,uVar13);
    *(undefined8 *)(param_1 + 0xf8) = uVar7;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xf8),uVar7);
    uVar7 = FUN_03f5c394(DAT_091801b8,uVar13);
    *(undefined8 *)(param_1 + 0x100) = uVar7;
    thunk_FUN_03f5d7b8(param_1 + 0x100,uVar7);
    if (0 < (int)uVar3) {
      lVar8 = *(long *)(param_1 + 0x100);
      if (lVar8 == 0) goto LAB_043a8e00;
      uVar10 = *(uint *)(lVar8 + 0x18);
      uVar9 = 0;
      do {
        if (uVar10 == uVar9) goto LAB_043a8dfc;
        *(int *)(lVar8 + 0x20 + uVar9 * 4) = (int)uVar9;
        uVar9 = uVar9 + 1;
      } while (uVar13 != uVar9);
    }
    bVar4 = false;
    *(uint *)(param_1 + 0xe0) = uVar3;
  }
  else {
    uVar10 = *(uint *)(param_1 + 0xe0);
    if ((int)uVar3 < (int)uVar10) {
      lVar8 = *(long *)(param_1 + 0x100);
      if (lVar8 == 0) {
LAB_043a8e00:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar10 = *(uint *)(lVar8 + 0x18);
      lVar11 = (long)(int)uVar3;
      do {
        if (uVar10 <= (uint)lVar11) {
LAB_043a8dfc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined4 *)(lVar8 + 0x20 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)*(uint *)(param_1 + 0xe0));
    }
    else if ((int)uVar10 < (int)uVar3) {
      lVar8 = *(long *)(param_1 + 0x100);
      if (lVar8 == 0) goto LAB_043a8e00;
      uVar1 = *(uint *)(lVar8 + 0x18);
      lVar11 = (long)(int)uVar3 - (long)(int)uVar10;
      puVar12 = (uint *)(lVar8 + (long)(int)uVar10 * 4 + 0x20);
      do {
        if (uVar1 <= uVar10) goto LAB_043a8dfc;
        lVar11 = lVar11 + -1;
        *puVar12 = uVar10;
        uVar10 = uVar10 + 1;
        puVar12 = puVar12 + 1;
      } while (lVar11 != 0);
    }
  }
  *(uint *)(param_1 + 0xe0) = uVar3;
  return bVar4;
}

