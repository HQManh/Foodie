// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimpleTMP$$PrepareBuffers
// address: 0x43b41c8
// body: available
// range: 0x43b41c8-0x43b448b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b4484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b4488 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool ChocDino_UIFX_MotionBlurSimpleTMP__PrepareBuffers(long param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  undefined8 uVar15;
  
  if ((DAT_09517b29 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188410);
    FUN_03f5c2a4(&DAT_09192a48);
    DAT_09517b29 = 1;
  }
  if (param_2 == 0) goto LAB_043b4484;
  uVar2 = *(uint *)(param_2 + 0x34);
  if ((int)uVar2 < 1) {
    iVar14 = 0;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x60);
    iVar14 = 0;
    uVar6 = 0;
    piVar10 = (int *)(lVar8 + 0x28);
    do {
      if (lVar8 == 0) goto LAB_043b4484;
      if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_043b4488;
      uVar6 = uVar6 + 1;
      iVar14 = *piVar10 + iVar14;
      piVar10 = piVar10 + 0x14;
    } while ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar6);
  }
  plVar11 = (long *)(param_1 + 0x48);
  if (*plVar11 == 0) {
LAB_043b42a0:
    uVar5 = thunk_FUN_03f9944c(DAT_09192a48);
    ChocDino_UIFX_MotionBlurSimpleTMP_VertexData___ctor(uVar5,iVar14);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    thunk_FUN_03f5d7b8(plVar11,uVar5);
    uVar5 = thunk_FUN_03f9944c(DAT_09192a48);
    ChocDino_UIFX_MotionBlurSimpleTMP_VertexData___ctor(uVar5,iVar14);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar5);
    bVar4 = false;
    *(int *)(param_1 + 0x44) = iVar14;
  }
  else {
    lVar8 = *(long *)(*plVar11 + 0x10);
    if (lVar8 == 0) goto LAB_043b4484;
    if (iVar14 != *(int *)(lVar8 + 0x18)) goto LAB_043b42a0;
    iVar14 = *(int *)(param_1 + 0x44);
    bVar4 = *(char *)(param_1 + 0x40) != '\0';
  }
  plVar13 = (long *)(param_1 + 0x58);
  iVar14 = *(int *)(param_1 + 0x24) * iVar14;
  if (*plVar13 != 0) {
    lVar8 = *(long *)(*plVar13 + 0x10);
    if (lVar8 == 0) {
LAB_043b4484:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (iVar14 == *(int *)(lVar8 + 0x18)) goto LAB_043b4340;
  }
  lVar8 = thunk_FUN_03f9944c(DAT_09192a48);
  ChocDino_UIFX_MotionBlurSimpleTMP_VertexData___ctor(lVar8,iVar14);
  *plVar13 = lVar8;
  thunk_FUN_03f5d7b8(plVar13,lVar8);
  bVar4 = false;
LAB_043b4340:
  iVar14 = *(int *)(param_2 + 0x34);
  if (0 < iVar14) {
    lVar8 = 0;
    uVar6 = 0;
    iVar12 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x60);
      if (lVar9 == 0) goto LAB_043b4484;
      if (*(uint *)(lVar9 + 0x18) <= uVar6) {
LAB_043b4488:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar9 = lVar9 + lVar8;
      iVar3 = *(int *)(lVar9 + 0x28);
      if (0 < iVar3) {
        if (*plVar11 == 0) goto LAB_043b4484;
        uVar5 = *(undefined8 *)(lVar9 + 0x48);
        uVar1 = *(undefined8 *)(lVar9 + 0x50);
        uVar15 = *(undefined8 *)(lVar9 + 0x58);
        System_Array__Copy(*(undefined8 *)(lVar9 + 0x30),0,*(undefined8 *)(*plVar11 + 0x10),iVar12,
                           iVar3,0);
        if (*(int *)(DAT_09188410 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = *plVar11;
        if (**(char **)(DAT_09188410 + 0xb8) == '\0') {
          if (lVar9 == 0) goto LAB_043b4484;
          puVar7 = (undefined8 *)(lVar9 + 0x18);
        }
        else {
          if (lVar9 == 0) goto LAB_043b4484;
          puVar7 = (undefined8 *)(lVar9 + 0x20);
        }
        System_Array__Copy(uVar5,0,*puVar7,iVar12,iVar3,0);
        if (*plVar11 == 0) goto LAB_043b4484;
        System_Array__Copy(uVar1,0,*(undefined8 *)(*plVar11 + 0x28),iVar12,iVar3,0);
        if (*plVar11 == 0) goto LAB_043b4484;
        System_Array__Copy(uVar15,0,*(undefined8 *)(*plVar11 + 0x30),iVar12,iVar3,0);
        iVar14 = *(int *)(param_2 + 0x34);
        iVar12 = iVar3 + iVar12;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x50;
    } while ((long)uVar6 < (long)iVar14);
  }
  return bVar4;
}

