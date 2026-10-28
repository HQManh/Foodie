// rea decompile_all
// name: ChocDino.UIFX.TrailEffectTMP$$GenerateTrailGeometry
// address: 0x43b8294
// body: available
// range: 0x43b8294-0x43b8b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b8b60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b8b64 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffectTMP__GenerateTrailGeometry(long param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  uint uVar28;
  float fVar29;
  float fVar31;
  undefined8 uVar30;
  float fVar32;
  float fVar34;
  undefined8 uVar33;
  float fVar35;
  float fVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  float local_1d0;
  float fStack_1cc;
  float local_1c0;
  float fStack_1bc;
  float local_1a8;
  float local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [8];
  float local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float fVar36;
  float fVar39;
  
  if ((DAT_09517b41 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182738);
    FUN_03f5c2a4(&DAT_091951e0);
    FUN_03f5c2a4(&DAT_091b3f30);
    FUN_03f5c2a4(&DAT_0918bff0);
    DAT_09517b41 = 1;
  }
  if ((*(long *)(param_1 + 0x88) == 0) ||
     (lVar17 = *(long *)(*(long *)(param_1 + 0x88) + 0x10), lVar17 == 0)) goto LAB_043b8b60;
  uVar21 = *(ulong *)(lVar17 + 0x18);
  plVar23 = (long *)(param_1 + 0x90);
  iVar20 = (int)uVar21;
  iVar3 = iVar20;
  if (*(char *)(param_1 + 0x54) != '\0') {
    iVar3 = 0;
  }
  iVar3 = iVar3 + *(int *)(param_1 + 0x20) * iVar20;
  if (*plVar23 == 0) {
LAB_043b8370:
    lVar17 = thunk_FUN_03f9944c(DAT_091951e0);
    ChocDino_UIFX_TrailEffectTMP_LayerVertices___ctor(lVar17,iVar3);
    *plVar23 = lVar17;
    thunk_FUN_03f5d7b8(plVar23,lVar17);
  }
  else {
    lVar17 = *(long *)(*plVar23 + 0x10);
    if (lVar17 == 0) goto LAB_043b8b60;
    if (iVar3 != *(int *)(lVar17 + 0x18)) {
      *plVar23 = 0;
      thunk_FUN_03f5d7b8(plVar23,0);
      if (*plVar23 == 0) goto LAB_043b8370;
    }
  }
  lVar17 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar17 != 0) {
    uVar26 = uVar21 & 0xffffffff;
    UnityEngine_Transform__get_worldToLocalMatrix(&local_e0,lVar17,0);
    uVar12 = uStack_a8;
    uVar11 = local_b0;
    uVar10 = uStack_b8;
    uVar9 = local_c0;
    uVar8 = local_c8;
    uVar7 = local_d0;
    uVar6 = uStack_d8;
    uVar5 = local_e0;
    iVar3 = *(int *)(param_1 + 0x20) + -1;
    fVar37 = (float)local_e0;
    fVar31 = (float)((ulong)local_e0 >> 0x20);
    fVar35 = (float)local_d0;
    fVar34 = (float)((ulong)local_d0 >> 0x20);
    fVar38 = (float)uStack_d8;
    fVar39 = (float)local_c8;
    fVar42 = (float)uStack_b8;
    fVar36 = (float)uStack_a8;
    if (iVar3 < 0) {
      iVar22 = 0;
      iVar27 = 0;
    }
    else {
      iVar27 = 0;
      iVar22 = 0;
      do {
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_043b8b60;
        lVar17 = FUN_057e0998(*(long *)(param_1 + 0x98),iVar3,DAT_091b3f30);
        uVar14 = ChocDino_UIFX_TrailEffectBase__IsTrackingTransform(param_1,0);
        if ((uVar14 & 1) == 0) {
          if (iVar20 < 1) {
            if (lVar17 == 0) goto LAB_043b8b60;
          }
          else {
            if (lVar17 == 0) goto LAB_043b8b60;
            uVar14 = 0;
            do {
              if ((*(long *)(lVar17 + 0x10) == 0) ||
                 (lVar25 = *(long *)(*(long *)(lVar17 + 0x10) + 0x30), lVar25 == 0))
              goto LAB_043b8b60;
              if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_043b8b64;
              uVar43 = *(undefined4 *)(lVar17 + 0x58);
              uVar44 = *(undefined4 *)(lVar17 + 0x5c);
              uVar45 = *(undefined4 *)(lVar17 + 0x60);
              uVar46 = *(undefined4 *)(lVar17 + 100);
              uVar28 = *(uint *)(lVar25 + uVar14 * 4 + 0x20);
              uVar13 = *(undefined4 *)(param_1 + 0x58);
              if (*(int *)(DAT_09182738 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              ChocDino_UIFX_ColorUtils__Blend
                        ((float)(uVar28 & 0xff) / 255.0,(float)(uVar28 >> 8 & 0xff) / 255.0,
                         (float)(uVar28 >> 0x10 & 0xff) / 255.0,(float)(uVar28 >> 0x18) / 255.0,
                         uVar43,uVar44,uVar45,uVar46,uVar13,0);
              if (*plVar23 == 0) goto LAB_043b8b60;
              lVar25 = *(long *)(*plVar23 + 0x30);
              uVar13 = FUN_043b2fc4(0);
              if (lVar25 == 0) goto LAB_043b8b60;
              uVar28 = iVar27 + (int)uVar14;
              if (*(uint *)(lVar25 + 0x18) <= uVar28) goto LAB_043b8b64;
              uVar14 = uVar14 + 1;
              *(undefined4 *)(lVar25 + (long)(int)uVar28 * 4 + 0x20) = uVar13;
            } while (uVar26 != uVar14);
            iVar27 = iVar27 + (int)uVar14;
          }
          if ((*(long *)(lVar17 + 0x10) == 0) || (*plVar23 == 0)) goto LAB_043b8b60;
          System_Array__Copy(*(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x10),0,
                             *(undefined8 *)(*plVar23 + 0x10),iVar22,uVar21 & 0xffffffff,0);
          if (*(int *)(DAT_0918bff0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar25 = *(long *)(lVar17 + 0x10);
          if (**(char **)(DAT_0918bff0 + 0xb8) == '\0') {
            if ((lVar25 == 0) || (*plVar23 == 0)) goto LAB_043b8b60;
            puVar16 = (undefined8 *)(lVar25 + 0x18);
            puVar19 = (undefined8 *)(*plVar23 + 0x18);
          }
          else {
            if ((lVar25 == 0) || (*plVar23 == 0)) goto LAB_043b8b60;
            puVar16 = (undefined8 *)(lVar25 + 0x20);
            puVar19 = (undefined8 *)(*plVar23 + 0x20);
          }
          System_Array__Copy(*puVar16,0,*puVar19,iVar22,uVar21 & 0xffffffff,0);
          lVar25 = *(long *)(lVar17 + 0x10);
          if (lVar25 == 0) goto LAB_043b8b60;
        }
        else {
          if (lVar17 == 0) goto LAB_043b8b60;
          lVar25 = *(long *)(lVar17 + 0x10);
          uVar14 = ChocDino_UIFX_TrailEffectBase__IsTrackingVertices(param_1,0);
          uVar47 = uVar9;
          uVar48 = uVar11;
          fVar29 = fVar42;
          fVar32 = fVar36;
          local_1a8 = fVar39;
          local_1a4 = fVar38;
          local_1c0 = fVar37;
          fStack_1bc = fVar34;
          local_1d0 = fVar35;
          fStack_1cc = fVar31;
          if ((uVar14 & 1) == 0) {
            uStack_198 = *(undefined8 *)(lVar17 + 0x20);
            local_1a0 = *(undefined8 *)(lVar17 + 0x18);
            local_160 = uVar5;
            uStack_158 = uVar6;
            uStack_188 = *(undefined8 *)(lVar17 + 0x30);
            uStack_190 = *(undefined8 *)(lVar17 + 0x28);
            uStack_178 = *(undefined8 *)(lVar17 + 0x40);
            local_180 = *(undefined8 *)(lVar17 + 0x38);
            uStack_168 = *(undefined8 *)(lVar17 + 0x50);
            uStack_170 = *(undefined8 *)(lVar17 + 0x48);
            local_150 = uVar7;
            uStack_148 = uVar8;
            local_140 = uVar9;
            uStack_138 = uVar10;
            local_130 = uVar11;
            uStack_128 = uVar12;
            local_e0 = local_1a0;
            uStack_d8 = uStack_198;
            local_d0 = uStack_190;
            local_c8 = uStack_188;
            local_c0 = local_180;
            uStack_b8 = uStack_178;
            local_b0 = uStack_170;
            uStack_a8 = uStack_168;
            FUN_04125f68(local_120,&local_160,&local_1a0,0);
            lVar25 = *(long *)(param_1 + 0x88);
            local_1a8 = local_108;
            local_1a4 = local_118;
            uVar47 = local_100;
            uVar48 = local_f0;
            fVar29 = local_f8;
            fVar32 = local_e8;
            local_1c0 = local_120._0_4_;
            fStack_1bc = fStack_10c;
            local_1d0 = local_110;
            fStack_1cc = *(float *)((ulong)local_120 | 4);
          }
          if (0 < iVar20) {
            if (lVar25 == 0) goto LAB_043b8b60;
            uVar14 = 0;
            lVar24 = 0x20;
            do {
              lVar18 = *(long *)(lVar25 + 0x10);
              if (lVar18 == 0) goto LAB_043b8b60;
              if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_043b8b64;
              if ((*plVar23 == 0) || (lVar15 = *(long *)(*plVar23 + 0x10), lVar15 == 0))
              goto LAB_043b8b60;
              uVar28 = iVar27 + (int)uVar14;
              if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_043b8b64;
              uVar30 = *(undefined8 *)(lVar18 + lVar24);
              uVar33 = NEON_rev64(uVar30,4);
              fVar41 = (float)((ulong)uVar30 >> 0x20);
              fVar40 = *(float *)((undefined8 *)(lVar18 + lVar24) + 1);
              lVar15 = lVar15 + (long)(int)uVar28 * 0xc;
              *(ulong *)(lVar15 + 0x20) =
                   CONCAT44((float)((ulong)uVar48 >> 0x20) +
                            fStack_1cc * (float)((ulong)uVar33 >> 0x20) + fStack_1bc * fVar41 +
                            (float)((ulong)uVar47 >> 0x20) * fVar40,
                            (float)uVar48 +
                            local_1d0 * (float)uVar33 + local_1c0 * (float)uVar30 +
                            (float)uVar47 * fVar40);
              *(float *)(lVar15 + 0x28) =
                   fVar32 + local_1a4 * (float)uVar30 + local_1a8 * fVar41 + fVar29 * fVar40;
              lVar18 = *(long *)(lVar25 + 0x30);
              if (lVar18 == 0) goto LAB_043b8b60;
              if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_043b8b64;
              uVar43 = *(undefined4 *)(lVar17 + 0x58);
              uVar44 = *(undefined4 *)(lVar17 + 0x5c);
              uVar45 = *(undefined4 *)(lVar17 + 0x60);
              uVar46 = *(undefined4 *)(lVar17 + 100);
              uVar4 = *(uint *)(lVar18 + uVar14 * 4 + 0x20);
              uVar13 = *(undefined4 *)(param_1 + 0x58);
              if (*(int *)(DAT_09182738 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              ChocDino_UIFX_ColorUtils__Blend
                        ((float)(uVar4 & 0xff) / 255.0,(float)(uVar4 >> 8 & 0xff) / 255.0,
                         (float)(uVar4 >> 0x10 & 0xff) / 255.0,(float)(uVar4 >> 0x18) / 255.0,uVar43
                         ,uVar44,uVar45,uVar46,uVar13,0);
              if (*plVar23 == 0) goto LAB_043b8b60;
              lVar18 = *(long *)(*plVar23 + 0x30);
              uVar13 = FUN_043b2fc4(0);
              if (lVar18 == 0) goto LAB_043b8b60;
              if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_043b8b64;
              uVar14 = uVar14 + 1;
              lVar24 = lVar24 + 0xc;
              *(undefined4 *)(lVar18 + (long)(int)uVar28 * 4 + 0x20) = uVar13;
            } while (uVar26 != uVar14);
            iVar27 = iVar27 + (int)uVar14;
          }
          if (*(int *)(DAT_0918bff0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (**(char **)(DAT_0918bff0 + 0xb8) == '\0') {
            if ((lVar25 == 0) || (*plVar23 == 0)) goto LAB_043b8b60;
            puVar16 = (undefined8 *)(lVar25 + 0x18);
            puVar19 = (undefined8 *)(*plVar23 + 0x18);
          }
          else {
            if ((lVar25 == 0) || (*plVar23 == 0)) goto LAB_043b8b60;
            puVar16 = (undefined8 *)(lVar25 + 0x20);
            puVar19 = (undefined8 *)(*plVar23 + 0x20);
          }
          System_Array__Copy(*puVar16,0,*puVar19,iVar22,uVar21 & 0xffffffff,0);
        }
        if (*plVar23 == 0) goto LAB_043b8b60;
        System_Array__Copy(*(undefined8 *)(lVar25 + 0x28),0,*(undefined8 *)(*plVar23 + 0x28),iVar22,
                           uVar21 & 0xffffffff,0);
        iVar22 = iVar22 + iVar20;
        bVar1 = 0 < iVar3;
        iVar3 = iVar3 + -1;
      } while (bVar1);
    }
    if (*(char *)(param_1 + 0x54) != '\0') {
      return;
    }
    uVar21 = ChocDino_UIFX_TrailEffectBase__IsTrackingTransform(param_1,0);
    if (((uVar21 & 1) == 0) ||
       (uVar21 = ChocDino_UIFX_TrailEffectBase__IsTrackingVertices(param_1,0), (uVar21 & 1) == 0)) {
      if ((*(long *)(param_1 + 0x88) == 0) || (*plVar23 == 0)) goto LAB_043b8b60;
      System_Array__Copy(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10),0,
                         *(undefined8 *)(*plVar23 + 0x10),iVar22,iVar20,0);
    }
    else if (0 < iVar20) {
      uVar21 = 0;
      lVar17 = 0x20;
      do {
        if (((*plVar23 == 0) || (*(long *)(param_1 + 0x88) == 0)) ||
           (lVar25 = *(long *)(*(long *)(param_1 + 0x88) + 0x10), lVar25 == 0)) goto LAB_043b8b60;
        if (*(uint *)(lVar25 + 0x18) <= uVar21) {
LAB_043b8b64:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar24 = *(long *)(*plVar23 + 0x10);
        if (lVar24 == 0) goto LAB_043b8b60;
        uVar28 = iVar27 + (int)uVar21;
        if (*(uint *)(lVar24 + 0x18) <= uVar28) goto LAB_043b8b64;
        pfVar2 = (float *)(lVar25 + lVar17);
        lVar24 = lVar24 + (long)(int)uVar28 * 0xc;
        fVar29 = *pfVar2;
        fVar32 = pfVar2[1];
        uVar21 = uVar21 + 1;
        lVar17 = lVar17 + 0xc;
        fVar41 = pfVar2[2];
        *(ulong *)(lVar24 + 0x20) =
             CONCAT44((float)((ulong)uVar11 >> 0x20) +
                      fVar31 * fVar29 + fVar34 * fVar32 + (float)((ulong)uVar9 >> 0x20) * fVar41,
                      (float)uVar11 + fVar37 * fVar29 + fVar35 * fVar32 + (float)uVar9 * fVar41);
        *(float *)(lVar24 + 0x28) = fVar36 + fVar38 * fVar29 + fVar39 * fVar32 + fVar42 * fVar41;
      } while (uVar26 != uVar21);
    }
    if (*(int *)(DAT_0918bff0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar17 = *(long *)(param_1 + 0x88);
    if (**(char **)(DAT_0918bff0 + 0xb8) == '\0') {
      if ((lVar17 == 0) || (*plVar23 == 0)) goto LAB_043b8b60;
      puVar16 = (undefined8 *)(lVar17 + 0x18);
      puVar19 = (undefined8 *)(*plVar23 + 0x18);
    }
    else {
      if ((lVar17 == 0) || (*plVar23 == 0)) goto LAB_043b8b60;
      puVar16 = (undefined8 *)(lVar17 + 0x20);
      puVar19 = (undefined8 *)(*plVar23 + 0x20);
    }
    System_Array__Copy(*puVar16,0,*puVar19,iVar22,iVar20,0);
    if ((*(long *)(param_1 + 0x88) != 0) && (*plVar23 != 0)) {
      System_Array__Copy(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x28),0,
                         *(undefined8 *)(*plVar23 + 0x28),iVar22,iVar20,0);
      if ((*(long *)(param_1 + 0x88) != 0) && (*plVar23 != 0)) {
        System_Array__Copy(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x30),0,
                           *(undefined8 *)(*plVar23 + 0x30),iVar22,iVar20,0);
        return;
      }
    }
  }
LAB_043b8b60:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

