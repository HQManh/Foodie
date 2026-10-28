// rea decompile_all
// name: ChocDino.UIFX.TrailEffectTMP$$StoreOriginalVertices
// address: 0x43b789c
// body: available
// range: 0x43b789c-0x43b7c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b7c14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b7c18 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffectTMP__StoreOriginalVertices(long param_1,long param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  float local_68;
  
  if ((DAT_09517b39 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091951e0);
    DAT_09517b39 = 1;
  }
  if (param_2 == 0) goto LAB_043b7c14;
  uVar4 = *(uint *)(param_2 + 0x34);
  if ((int)uVar4 < 1) {
    iVar12 = 0;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x60);
    iVar12 = 0;
    uVar7 = 0;
    piVar10 = (int *)(lVar8 + 0x28);
    do {
      if (lVar8 == 0) goto LAB_043b7c14;
      if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_043b7c18;
      uVar7 = uVar7 + 1;
      iVar12 = *piVar10 + iVar12;
      piVar10 = piVar10 + 0x14;
    } while ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar7);
  }
  plVar11 = (long *)(param_1 + 0x88);
  if (*plVar11 == 0) {
LAB_043b7968:
    lVar8 = thunk_FUN_03f9944c(DAT_091951e0);
    ChocDino_UIFX_TrailEffectTMP_LayerVertices___ctor(lVar8,iVar12);
    *plVar11 = lVar8;
    thunk_FUN_03f5d7b8(plVar11,lVar8);
  }
  else {
    lVar8 = *(long *)(*plVar11 + 0x10);
    if (lVar8 == 0) goto LAB_043b7c14;
    if (iVar12 != *(int *)(lVar8 + 0x18)) {
      *plVar11 = 0;
      thunk_FUN_03f5d7b8(plVar11,0);
      if (*plVar11 == 0) goto LAB_043b7968;
    }
  }
  iVar12 = *(int *)(param_2 + 0x34);
  if (0 < iVar12) {
    lVar8 = 0;
    uVar7 = 0;
    iVar13 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x60);
      if (lVar9 == 0) goto LAB_043b7c14;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_043b7c18;
      lVar9 = lVar9 + lVar8;
      iVar5 = *(int *)(lVar9 + 0x28);
      if (0 < iVar5) {
        uVar2 = *(undefined8 *)(lVar9 + 0x48);
        uVar3 = *(undefined8 *)(lVar9 + 0x50);
        if (*(int *)(param_1 + 0xa4) == 0) {
          if (*plVar11 == 0) goto LAB_043b7c14;
          uVar6 = *(undefined8 *)(lVar9 + 0x58);
          System_Array__Copy(*(undefined8 *)(lVar9 + 0x30),0,*(undefined8 *)(*plVar11 + 0x10),iVar13
                             ,iVar5,0);
          lVar9 = *plVar11;
        }
        else {
          lVar9 = *(long *)(lVar9 + 0x20);
          if (lVar9 == 0) goto LAB_043b7c14;
          uVar6 = UnityEngine_Mesh__get_vertices(lVar9,0);
          if (*plVar11 == 0) goto LAB_043b7c14;
          System_Array__Copy(uVar6,0,*(undefined8 *)(*plVar11 + 0x10),iVar13,iVar5,0);
          uVar6 = UnityEngine_Mesh__get_colors32(lVar9,0);
          lVar9 = *plVar11;
        }
        if (lVar9 == 0) goto LAB_043b7c14;
        System_Array__Copy(uVar6,0,*(undefined8 *)(lVar9 + 0x30),iVar13,iVar5,0);
        lVar9 = *plVar11;
        if (lVar9 == 0) goto LAB_043b7c14;
        if (*(long *)(lVar9 + 0x18) != 0) {
          System_Array__Copy(uVar2,0,*(long *)(lVar9 + 0x18),iVar13,iVar5,0);
          lVar9 = *plVar11;
          if (lVar9 == 0) goto LAB_043b7c14;
        }
        if (*(long *)(lVar9 + 0x20) != 0) {
          System_Array__Copy(uVar2,0,*(long *)(lVar9 + 0x20),iVar13,iVar5,0);
          lVar9 = *plVar11;
          if (lVar9 == 0) goto LAB_043b7c14;
        }
        System_Array__Copy(uVar3,0,*(undefined8 *)(lVar9 + 0x28),iVar13,iVar5,0);
        iVar12 = *(int *)(param_2 + 0x34);
        iVar13 = iVar5 + iVar13;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x50;
    } while ((long)uVar7 < (long)iVar12);
  }
  uVar7 = ChocDino_UIFX_TrailEffectBase__IsTrackingTransform(param_1,0);
  if (((uVar7 & 1) == 0) ||
     (uVar7 = ChocDino_UIFX_TrailEffectBase__IsTrackingVertices(param_1,0), (uVar7 & 1) == 0)) {
    return;
  }
  if ((*plVar11 != 0) && (lVar8 = *(long *)(*plVar11 + 0x10), lVar8 != 0)) {
    uVar4 = *(uint *)(lVar8 + 0x18);
    lVar8 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar8 != 0) {
      UnityEngine_Transform__get_localToWorldMatrix(&local_a0,lVar8,0);
      if ((int)uVar4 < 1) {
        return;
      }
      uVar7 = 0;
      lVar8 = 0x20;
      while ((*plVar11 != 0 && (lVar9 = *(long *)(*plVar11 + 0x10), lVar9 != 0))) {
        if (*(uint *)(lVar9 + 0x18) <= uVar7) {
LAB_043b7c18:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        pfVar1 = (float *)(lVar9 + lVar8);
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0xc;
        fVar14 = *pfVar1;
        fVar15 = pfVar1[1];
        fVar16 = pfVar1[2];
        *(ulong *)pfVar1 =
             CONCAT44((float)((ulong)local_70 >> 0x20) +
                      (float)((ulong)local_a0 >> 0x20) * fVar14 +
                      (float)((ulong)local_90 >> 0x20) * fVar15 +
                      (float)((ulong)local_80 >> 0x20) * fVar16,
                      (float)local_70 +
                      (float)local_a0 * fVar14 + (float)local_90 * fVar15 + (float)local_80 * fVar16
                     );
        pfVar1[2] = local_68 + local_98 * fVar14 + local_88 * fVar15 + local_78 * fVar16;
        if (uVar4 == uVar7) {
          return;
        }
      }
    }
  }
LAB_043b7c14:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

