// rea decompile_all
// name: AssetKits.ParticleImage.ParticleImage$$Animate
// address: 0x772b388
// body: available
// range: 0x772b388-0x772b38b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AssetKits_ParticleImage_ParticleImage__Animate
               (undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_09522a41 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aee68);
    FUN_03f5c2a4(&DAT_091aee78);
    FUN_03f5c2a4(&DAT_091ab658);
    FUN_03f5c2a4(&DAT_091ab660);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09522a41 = 1;
  }
  if (*(char *)((long)param_4 + 0x805) != '\0') {
    lVar1 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar1 == 0) goto LAB_0772bb98;
    fVar9 = (float)UnityEngine_Transform__get_position(lVar1,0);
    lVar1 = DAT_09188ad0;
    lVar7 = param_4[0x20];
    param_2 = param_2 - *(float *)((long)param_4 + 0x834);
    param_3 = param_3 - *(float *)(param_4 + 0x107);
    *(float *)((long)param_4 + 0x83c) = fVar9 - *(float *)(param_4 + 0x106);
    *(float *)(param_4 + 0x108) = param_2;
    *(float *)((long)param_4 + 0x844) = param_3;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(lVar7,0);
    if (((uVar2 & 1) != 0) && ((char)param_4[0x1f] != '\0')) {
      if (((long *)param_4[0x20] == (long *)0x0) || (*(long *)param_4[0x20] != DAT_09189c98)) {
        lVar1 = AssetKits_ParticleImage_ParticleImage__get_camera(param_4);
        if ((param_4[0x20] == 0) ||
           (UnityEngine_Transform__get_position(param_4[0x20],0), lVar1 == 0)) goto LAB_0772bb98;
        uVar10 = UnityEngine_Camera__WorldToViewportPoint(lVar1,0);
        if (param_4[0x1d] == 0) goto LAB_0772bb98;
        UnityEngine_RectTransform__get_rect(param_4[0x1d],0);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar11 = 0;
        uVar10 = AssetKits_ParticleImage_Extensions__Remap(uVar10,0x3f000000,0x3fc00000,0,param_3,0)
        ;
        if (param_4[0x1d] == 0) goto LAB_0772bb98;
        UnityEngine_RectTransform__get_rect(param_4[0x1d],0);
        uVar11 = AssetKits_ParticleImage_Extensions__Remap(param_2,0x3f000000,0x3fc00000,0,uVar11,0)
        ;
        if ((param_4[0x1d] == 0) ||
           (lVar1 = UnityEngine_Component__get_transform(param_4[0x1d],0), lVar1 == 0))
        goto LAB_0772bb98;
        uVar13 = 0;
        uVar10 = UnityEngine_Transform__TransformPoint(uVar10,uVar11,0,lVar1,0);
        lVar1 = UnityEngine_Component__get_transform(param_4,0);
        if ((lVar1 == 0) || (lVar1 = UnityEngine_Transform__GetParent(lVar1,0), lVar1 == 0))
        goto LAB_0772bb98;
        uVar10 = UnityEngine_Transform__InverseTransformPoint(uVar10,uVar11,uVar13,lVar1,0);
        lVar1 = UnityEngine_Component__get_transform(param_4,0);
        if (lVar1 == 0) goto LAB_0772bb98;
        UnityEngine_Transform__set_localPosition(uVar10,uVar11,uVar13,lVar1,0);
      }
      else {
        lVar1 = UnityEngine_Component__get_transform(param_4,0);
        if ((param_4[0x20] == 0) ||
           (UnityEngine_Transform__get_position(param_4[0x20],0), lVar1 == 0)) goto LAB_0772bb98;
        UnityEngine_Transform__set_position(lVar1,0);
      }
    }
    uVar2 = AssetKits_ParticleImage_ParticleImage__get_isMain(param_4);
    if ((uVar2 & 1) == 0) {
      lVar1 = AssetKits_ParticleImage_ParticleImage__get_main(param_4);
      if (lVar1 == 0) goto LAB_0772bb98;
      fVar9 = *(float *)(lVar1 + 2000);
    }
    else {
      fVar9 = *(float *)(param_4 + 0xfa);
      if (*(int *)((long)param_4 + 0xf4) == 1) {
        fVar12 = (float)UnityEngine_Time__get_deltaTime(0);
      }
      else {
        fVar12 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
      }
      fVar9 = fVar9 + fVar12;
    }
    fVar12 = *(float *)((long)param_4 + 0x7d4);
    *(float *)(param_4 + 0xfa) = fVar9;
    if (*(int *)((long)param_4 + 0xf4) == 1) {
      fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
    }
    else {
      fVar9 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
    }
    fVar14 = *(float *)(param_4 + 0xfc);
    *(float *)((long)param_4 + 0x7d4) = fVar12 + fVar9;
    if (*(int *)((long)param_4 + 0xf4) == 1) {
      fVar9 = (float)UnityEngine_Time__get_deltaTime();
    }
    else {
      fVar9 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
    }
    pcVar5 = *(code **)(*param_4 + 0x2f8);
    uVar4 = *(undefined8 *)(*param_4 + 0x300);
    *(float *)(param_4 + 0xfc) = fVar14 + fVar9;
    (*pcVar5)(param_4,uVar4);
    (**(code **)(*param_4 + 0x308))(param_4,*(undefined8 *)(*param_4 + 0x310));
    uVar4 = AssetKits_ParticleImage_ParticleImage__get_particleTrailRenderer(param_4);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = (long *)AssetKits_ParticleImage_ParticleImage__get_particleTrailRenderer(param_4);
      if (plVar3 == (long *)0x0) goto LAB_0772bb98;
      (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
      plVar3 = (long *)AssetKits_ParticleImage_ParticleImage__get_particleTrailRenderer(param_4);
      if (plVar3 == (long *)0x0) goto LAB_0772bb98;
      (**(code **)(*plVar3 + 0x308))(plVar3,*(undefined8 *)(*plVar3 + 0x310));
    }
  }
  if (*(char *)((long)param_4 + 0x804) == '\0') goto LAB_0772bba0;
  if (0.0 < *(float *)(param_4 + 0xe1)) {
    fVar9 = *(float *)((long)param_4 + 0x114);
    fVar12 = *(float *)(param_4 + 0xfa);
    if (*(float *)(param_4 + 0x27) + fVar9 <= fVar12) {
      if ((fVar9 < fVar12) && (*(char *)((long)param_4 + 0x134) != '\0')) goto LAB_0772b7a0;
    }
    else if (fVar9 < fVar12) {
LAB_0772b7a0:
      fVar9 = *(float *)(param_4 + 0xfb);
      fVar12 = 1.0 / *(float *)(param_4 + 0xe1);
      if (*(int *)((long)param_4 + 0xf4) == 1) {
        fVar14 = (float)UnityEngine_Time__get_deltaTime(0);
      }
      else {
        fVar14 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
      }
      fVar9 = fVar9 + fVar14;
      *(float *)(param_4 + 0xfb) = fVar9;
      while (fVar12 <= fVar9) {
        lVar1 = param_4[0xe0];
        iVar6 = *(int *)((long)param_4 + 0x854) + 1;
        *(int *)((long)param_4 + 0x854) = iVar6;
        *(float *)(param_4 + 0xfb) = fVar9 - fVar12;
        uVar4 = AssetKits_ParticleImage_ParticleImage__GenerateParticle(param_4,iVar6,1,0);
        if (lVar1 == 0) goto LAB_0772bb98;
        FUN_057e1b20(lVar1,0,uVar4,DAT_091aee68);
        fVar9 = *(float *)(param_4 + 0xfb);
      }
    }
  }
  if (0.0 < *(float *)((long)param_4 + 0x70c)) {
    fVar9 = *(float *)((long)param_4 + 0x114);
    fVar12 = *(float *)(param_4 + 0xfa);
    if (*(float *)(param_4 + 0x27) + fVar9 <= fVar12) {
      if ((fVar9 < fVar12) && (*(char *)((long)param_4 + 0x134) != '\0')) goto LAB_0772b870;
    }
    else if (fVar9 < fVar12) {
LAB_0772b870:
      fVar12 = *(float *)(param_4 + 0x27) / *(float *)((long)param_4 + 0x70c);
      fVar9 = *(float *)((long)param_4 + 0x7dc);
      if (*(int *)((long)param_4 + 0xf4) == 1) {
        fVar14 = (float)UnityEngine_Time__get_deltaTime(0);
      }
      else {
        fVar14 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
      }
      fVar9 = fVar9 + fVar14;
      *(float *)((long)param_4 + 0x7dc) = fVar9;
      while (fVar12 <= fVar9) {
        lVar1 = param_4[0xe0];
        iVar6 = (int)param_4[0x10b] + 1;
        *(int *)(param_4 + 0x10b) = iVar6;
        *(float *)((long)param_4 + 0x7dc) = fVar9 - fVar12;
        uVar4 = AssetKits_ParticleImage_ParticleImage__GenerateParticle(param_4,iVar6,2,0);
        if (lVar1 == 0) goto LAB_0772bb98;
        FUN_057e1b20(lVar1,0,uVar4,DAT_091aee68);
        fVar9 = *(float *)((long)param_4 + 0x7dc);
      }
    }
  }
  if (0.0 < *(float *)(param_4 + 0xe2)) {
    if (DAT_0951690d == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_0951690d = '\x01';
    }
    fVar9 = *(float *)((long)param_4 + 0x83c);
    lVar1 = param_4[0x108];
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar15 = (float)lVar1;
    fVar16 = (float)((ulong)lVar1 >> 0x20);
    fVar14 = *(float *)(param_4 + 0xe2);
    fVar12 = 1.0 / fVar14;
    if (fVar12 < SQRT(fVar9 * fVar9 + fVar15 * fVar15 + fVar16 * fVar16)) {
      lVar1 = param_4[0xe0];
      iVar6 = *(int *)((long)param_4 + 0x85c) + 1;
      *(int *)((long)param_4 + 0x85c) = iVar6;
      uVar4 = AssetKits_ParticleImage_ParticleImage__GenerateParticle(param_4,iVar6,3,0);
      if (lVar1 == 0) goto LAB_0772bb98;
      FUN_057e1b20(lVar1,0,uVar4,DAT_091aee68);
      lVar1 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar1 == 0) goto LAB_0772bb98;
      uVar10 = UnityEngine_Transform__get_position(lVar1,0);
      *(undefined4 *)(param_4 + 0x106) = uVar10;
      *(float *)((long)param_4 + 0x834) = fVar12;
      *(float *)(param_4 + 0x107) = fVar14;
    }
  }
  lVar1 = param_4[0xe3];
  if (lVar1 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar1 + 0x18) <= iVar6) goto LAB_0772baf4;
      fVar9 = *(float *)(param_4 + 0xfc);
      lVar1 = FUN_057e0998(lVar1,iVar6,DAT_091ab660);
      if (lVar1 == 0) break;
      if (*(float *)(lVar1 + 0x10) + *(float *)((long)param_4 + 0x114) < fVar9) {
        if ((param_4[0xe3] == 0) ||
           (lVar1 = FUN_057e0998(param_4[0xe3],iVar6,DAT_091ab660), lVar1 == 0)) break;
        if (*(char *)(lVar1 + 0x18) == '\0') {
          lVar1 = param_4[0xe3];
          if (lVar1 == 0) break;
          iVar8 = 0;
          while( true ) {
            lVar1 = FUN_057e0998(lVar1,iVar6,DAT_091ab660);
            if (lVar1 == 0) goto LAB_0772bb98;
            if (*(int *)(lVar1 + 0x14) <= iVar8) break;
            if (param_4[0xe3] == 0) goto LAB_0772bb98;
            lVar1 = param_4[0xe0];
            uVar4 = FUN_057e0998(param_4[0xe3],iVar6,DAT_091ab660);
            uVar4 = AssetKits_ParticleImage_ParticleImage__GenerateParticle(param_4,iVar8,0,uVar4);
            if (lVar1 == 0) goto LAB_0772bb98;
            FUN_057e1b20(lVar1,0,uVar4,DAT_091aee68);
            lVar1 = param_4[0xe3];
            iVar8 = iVar8 + 1;
            if (lVar1 == 0) goto LAB_0772bb98;
          }
          if ((param_4[0xe3] == 0) ||
             (lVar1 = FUN_057e0998(param_4[0xe3],iVar6,DAT_091ab660), lVar1 == 0)) break;
          *(undefined1 *)(lVar1 + 0x18) = 1;
        }
      }
      lVar1 = param_4[0xe3];
      iVar6 = iVar6 + 1;
    } while (lVar1 != 0);
    goto LAB_0772bb98;
  }
LAB_0772baf4:
  if ((*(char *)((long)param_4 + 0x134) != '\0') &&
     (*(float *)(param_4 + 0x27) <= *(float *)(param_4 + 0xfc))) {
    *(undefined4 *)(param_4 + 0xfc) = 0;
    if (lVar1 != 0) {
      iVar6 = 0;
      do {
        if (*(int *)(lVar1 + 0x18) <= iVar6) goto LAB_0772bb0c;
        lVar7 = FUN_057e0998(lVar1,iVar6,DAT_091ab660);
        if (lVar7 == 0) break;
        lVar1 = param_4[0xe3];
        iVar6 = iVar6 + 1;
        *(undefined1 *)(lVar7 + 0x18) = 0;
      } while (lVar1 != 0);
    }
    goto LAB_0772bb98;
  }
LAB_0772bb0c:
  fVar9 = *(float *)(param_4 + 0x27) + *(float *)((long)param_4 + 0x114);
  if (fVar9 <= *(float *)(param_4 + 0xfa)) {
    if (*(char *)((long)param_4 + 0x134) != '\0') goto LAB_0772bb34;
    *(undefined1 *)((long)param_4 + 0x804) = 0;
  }
  else if (*(char *)((long)param_4 + 0x134) != '\0') {
LAB_0772bb34:
    if (fVar9 <= *(float *)((long)param_4 + 0x7d4)) {
      *(undefined4 *)((long)param_4 + 0x7d4) = 0;
      *(undefined4 *)((long)param_4 + 0x854) = 0;
      param_4[0x10b] = 0;
    }
  }
LAB_0772bba0:
  if (*(char *)((long)param_4 + 0x805) == '\0') {
    return;
  }
  if (param_4[0xe0] != 0) {
    if (0 < *(int *)(param_4[0xe0] + 0x18)) {
      return;
    }
    if (*(char *)((long)param_4 + 0x804) != '\0') {
      return;
    }
    uVar2 = AssetKits_ParticleImage_ParticleImage__get_isMain(param_4);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar2 = AssetKits_ParticleImage_ParticleImage__canStop(param_4);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (param_4[0x105] != 0) {
      UnityEngine_Events_UnityEvent__Invoke(param_4[0x105],0);
      AssetKits_ParticleImage_ParticleImage__Stop(param_4,1);
      return;
    }
  }
LAB_0772bb98:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

