// rea decompile_all
// name: CakeOrder.InGame.GridSpawner$$PrecalculateGrid
// address: 0x42b1970
// body: available
// range: 0x42b1970-0x42b2023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b1c04 to 0x85f70f4 UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42b2020 to 0x89db060 FUN_089db060 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_GridSpawner__PrecalculateGrid(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  float *pfVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  
  if ((DAT_095172bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180d98);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919d2c0);
    FUN_03f5c2a4(&DAT_0919d2d0);
    FUN_03f5c2a4(&DAT_0919d2d8);
    FUN_03f5c2a4(&DAT_09176350);
    FUN_03f5c2a4(&DAT_09180da0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091b19b8);
    FUN_03f5c2a4(&DAT_091b19a0);
    FUN_03f5c2a4(&DAT_0917d050);
    FUN_03f5c2a4(&DAT_091b8d68);
    FUN_03f5c2a4(&DAT_091b8d70);
    FUN_03f5c2a4(&DAT_091b8d60);
    FUN_03f5c2a4(&DAT_091b8d78);
    FUN_03f5c2a4(&DAT_0917e390);
    FUN_03f5c2a4(&DAT_091807f0);
    FUN_03f5c2a4(&DAT_0920aa60);
    DAT_095172bb = 1;
  }
  if ((((param_3 == 0) || (param_2 == 0)) || (*(int *)(param_3 + 0x18) < 3)) ||
     (*(long *)(param_2 + 0x18) == 0)) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_0920aa60,0);
    return;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_09176350);
  FUN_06eef750(lVar4,DAT_0919d2c0);
  plVar20 = (long *)(param_1 + 0x18);
  *plVar20 = lVar4;
  thunk_FUN_03f5d7b8(plVar20,lVar4);
  if (0 < *(int *)(param_2 + 0x18)) {
    iVar12 = 0;
    do {
      lVar4 = *plVar20;
      uVar5 = thunk_FUN_03f9944c(DAT_0917d050);
      FUN_058abd7c(uVar5,DAT_091b19a0);
      if (lVar4 == 0) goto LAB_042b244c;
      FUN_06ef04f8(lVar4,iVar12,uVar5,DAT_0919d2d8);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_2 + 0x18));
  }
  iVar12 = (int)*(ulong *)(param_3 + 0x18);
  if (iVar12 != 0) {
    fVar24 = *(float *)(param_3 + 0x20);
    fVar26 = *(float *)(param_3 + 0x24);
    fVar25 = fVar24;
    fVar22 = fVar26;
    if (0 < iVar12) {
      uVar14 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
      pfVar17 = (float *)(param_3 + 0x24);
      fVar27 = fVar24;
      do {
        fVar24 = pfVar17[-1];
        fVar23 = *pfVar17;
        pfVar17 = pfVar17 + 2;
        fVar3 = fVar24;
        if (fVar25 <= fVar24) {
          fVar3 = fVar25;
        }
        fVar25 = fVar3;
        if (fVar24 <= fVar27) {
          fVar24 = fVar27;
        }
        fVar27 = fVar23;
        if (fVar26 <= fVar23) {
          fVar27 = fVar26;
        }
        fVar26 = fVar27;
        if (fVar23 <= fVar22) {
          fVar23 = fVar22;
        }
        fVar22 = fVar23;
        uVar14 = uVar14 - 1;
        fVar27 = fVar24;
      } while (uVar14 != 0);
    }
    fVar27 = *(float *)(param_1 + 0x10);
    if (DAT_095163ce == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    fVar27 = (fVar24 - fVar25) / fVar27;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
      cVar11 = DAT_095163ce;
    }
    else {
      cVar11 = '\x01';
    }
    fVar24 = *(float *)(param_1 + 0x10);
    uVar1 = 0x80000000;
    if ((float)(int)fVar27 != INFINITY) {
      uVar1 = (int)fVar27;
    }
    if (cVar11 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    fVar24 = (fVar22 - fVar26) / fVar24;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = 0x80000000;
    if ((float)(int)fVar24 != INFINITY) {
      uVar2 = (int)fVar24;
    }
    local_a0 = (long)(int)uVar1;
    lStack_98 = (long)(int)uVar2;
    lVar4 = FUN_03f5c39c(DAT_09180da0,&local_a0);
    local_b0 = (long)(int)uVar1;
    lStack_a8 = (long)(int)uVar2;
    uVar14 = FUN_03f5c39c(DAT_09180d98,&local_b0);
    if (0 < (int)uVar1) {
      uVar19 = 0;
      uVar6 = uVar14;
      do {
        if (0 < (int)uVar2) {
          if (lVar4 == 0) goto LAB_042b244c;
          uVar21 = 0;
          do {
            if ((**(uint **)(lVar4 + 0x10) <= uVar19) ||
               (uVar15 = *(ulong *)(*(uint **)(lVar4 + 0x10) + 4), (uVar15 & 0xffffffff) <= uVar21))
            goto LAB_042b2448;
            fVar22 = *(float *)(param_1 + 0x10);
            *(undefined4 *)(lVar4 + (uVar21 + uVar19 * uVar15) * 4 + 0x20) = 0xffffffff;
            uVar6 = CakeOrder_InGame_GridSpawner__IsPointInPolygon
                              (fVar22 * 0.5 + fVar25 + fVar22 * (float)(int)uVar19,
                               fVar22 * 0.5 + fVar26 + fVar22 * (float)(int)uVar21,uVar6,param_3);
            if ((uVar6 & 1) != 0) {
              if (uVar14 == 0) goto LAB_042b244c;
              if ((**(uint **)(uVar14 + 0x10) <= uVar19) ||
                 (uVar15 = *(ulong *)(*(uint **)(uVar14 + 0x10) + 4),
                 (uVar15 & 0xffffffff) <= uVar21)) goto LAB_042b2448;
              *(undefined1 *)(uVar14 + 0x20 + uVar19 * uVar15 + uVar21) = 1;
            }
            uVar21 = uVar21 + 1;
          } while (uVar2 != uVar21);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar1);
    }
    lVar7 = thunk_FUN_03f9944c(DAT_0917e390);
    FUN_05e2e0d8(lVar7,DAT_091b8d60);
    lVar8 = FUN_03f5c394(DAT_091801b8);
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar19 = 0;
      uVar6 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      pfVar17 = (float *)(param_2 + 0x20);
      do {
        if (uVar6 <= uVar19) goto LAB_042b2448;
        lVar9 = CakeOrder_InGame_GridSpawner__GetNearestValidGridPos
                          (*pfVar17,pfVar17[1],fVar25,fVar26,param_1,uVar14,(ulong)uVar1,uVar2);
        uVar10 = (uint)lVar9;
        if (uVar10 != 0xffffffff) {
          if (*(uint *)(param_2 + 0x18) <= uVar19) goto LAB_042b2448;
          fVar24 = *(float *)(param_1 + 0x10);
          uVar13 = (uint)((ulong)lVar9 >> 0x20);
          fVar22 = pfVar17[2];
          fVar27 = fVar24 * 0.5 + fVar25 + fVar24 * (float)(int)uVar10;
          fVar24 = fVar24 * 0.5 + fVar26 + fVar24 * (float)(int)uVar13;
          if ((fVar22 <= 0.0) ||
             ((fVar27 - *pfVar17) * (fVar27 - *pfVar17) +
              (fVar24 - pfVar17[1]) * (fVar24 - pfVar17[1]) <= fVar22 * fVar22)) {
            if (lVar4 == 0) {
LAB_042b244c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((**(uint **)(lVar4 + 0x10) <= uVar10) ||
               (lVar18 = *(long *)(*(uint **)(lVar4 + 0x10) + 4), (uint)lVar18 <= uVar13))
            goto LAB_042b2448;
            *(int *)(lVar4 + ((lVar9 >> 0x20) + lVar18 * (int)uVar10) * 4 + 0x20) = (int)uVar19;
            if ((lVar7 == 0) || (FUN_05e2e65c(lVar7,lVar9,DAT_091b8d70), lVar8 == 0))
            goto LAB_042b244c;
            if (*(uint *)(lVar8 + 0x18) <= uVar19) goto LAB_042b2448;
            lVar9 = *plVar20;
            *(int *)(lVar8 + 0x20 + uVar19 * 4) = *(int *)(lVar8 + 0x20 + uVar19 * 4) + 1;
            if ((lVar9 == 0) ||
               (lVar18 = FUN_06ef046c(lVar9,uVar19 & 0xffffffff,DAT_0919d2d0), lVar9 = DAT_091b19b8,
               lVar18 == 0)) goto LAB_042b244c;
            lVar16 = *(long *)(lVar18 + 0x10);
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_042b244c;
            uVar10 = *(uint *)(lVar18 + 0x18);
            if (uVar10 < *(uint *)(lVar16 + 0x18)) {
              lVar16 = lVar16 + (long)(int)uVar10 * 8;
              *(uint *)(lVar18 + 0x18) = uVar10 + 1;
              *(float *)(lVar16 + 0x20) = fVar27;
              *(float *)(lVar16 + 0x24) = fVar24;
            }
            else {
              FUN_058ac614(fVar27,fVar24,lVar18,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        uVar19 = uVar19 + 1;
        pfVar17 = pfVar17 + 7;
        uVar6 = (ulong)*(uint *)(param_2 + 0x18);
      } while ((long)uVar19 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    FUN_03f5c394(DAT_091807f0,4);
    FUN_089db060();
    return;
  }
LAB_042b2448:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

