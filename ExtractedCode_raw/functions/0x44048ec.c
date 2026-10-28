// rea decompile_all
// name: Coffee.UIExtensions.UIParticleRenderer$$ResolveResolutionChange
// address: 0x44048ec
// body: available
// range: 0x44048ec-0x4404cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4404cd0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4404cd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticleRenderer__ResolveResolutionChange
               (float param_1,float param_2,float param_3,undefined4 param_4,float param_5,
               float param_6,long param_7)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  void *__src;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_124 [132];
  
  if ((DAT_09517e97 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188ee8);
    DAT_09517e97 = 1;
  }
  memset(auStack_124,0,0x84);
  uVar2 = UnityEngine_Screen__get_width(0);
  lVar3 = UnityEngine_Screen__get_height(0);
  uVar6 = *(undefined8 *)(param_7 + 0x118);
  if (*(int *)(DAT_09188ee8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ee8);
  }
  uVar1 = Coffee_UIParticleInternal_ParticleSystemExtensions__IsWorldSpace(uVar6);
  if (*(long *)(param_7 + 0x110) == 0) goto LAB_04404cd4;
  uVar6 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_7 + 0x110),0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
  fVar7 = 1.0;
  if ((uVar4 & 1) != 0) {
    if ((*(long *)(param_7 + 0x110) == 0) ||
       (lVar5 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_7 + 0x110),0), lVar5 == 0))
    goto LAB_04404cd4;
    fVar7 = (float)UnityEngine_Canvas__get_scaleFactor(lVar5,0);
  }
  uVar2 = uVar2 & 0xffffffff | lVar3 << 0x20;
  if (*(ulong *)(param_7 + 0x13c) == uVar2) {
    fVar14 = *(float *)(param_7 + 0x120);
    if (DAT_09515cee == '\0') {
      FUN_03f5c2a4(&DAT_09187e98);
      DAT_09515cee = '\x01';
    }
    fVar8 = ABS(fVar14);
    if (fVar8 <= ABS(fVar7)) {
      fVar8 = ABS(fVar7);
    }
    fVar12 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
    fVar9 = fVar8 * 1e-06;
    if (fVar8 * 1e-06 <= fVar12) {
      fVar9 = fVar12;
    }
    if (fVar9 <= ABS(fVar7 - fVar14)) goto LAB_04404ab4;
  }
  else {
LAB_04404ab4:
    if ((((uVar1 ^ 1) & 1) == 0) && (*(char *)(param_7 + 0xe0) != '\0')) {
      if (*(long *)(param_7 + 0x118) == 0) goto LAB_04404cd4;
      uVar1 = UnityEngine_ParticleSystem__get_particleCount(*(long *)(param_7 + 0x118),0);
      if (*(int *)(DAT_09188ee8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ee8);
      }
      lVar3 = Coffee_UIParticleInternal_ParticleSystemExtensions__GetParticleArray(uVar1);
      if (*(long *)(param_7 + 0x118) == 0) goto LAB_04404cd4;
      UnityEngine_ParticleSystem__GetParticles(*(long *)(param_7 + 0x118),lVar3,uVar1,0);
      fVar7 = param_5;
      fVar14 = param_6;
      fVar8 = (float)Coffee_UIParticleInternal_Vector3Extensions__Inverse(param_4,param_5,param_6);
      fVar13 = *(float *)(param_7 + 300);
      fVar12 = *(float *)(param_7 + 0x128);
      fVar9 = (float)Coffee_UIParticleInternal_Vector3Extensions__Inverse
                               (*(undefined4 *)(param_7 + 0x124),fVar12,fVar13);
      if (0 < (int)uVar1) {
        if (lVar3 == 0) goto LAB_04404cd4;
        uVar4 = 0;
        __src = (void *)(lVar3 + 0x20);
        fVar12 = param_2 * fVar7 * fVar12;
        fVar13 = param_3 * fVar14 * fVar13;
        fVar7 = *(float *)(param_7 + 0x130);
        fVar14 = *(float *)(param_7 + 0x134) * fVar12;
        fVar15 = fVar13 * *(float *)(param_7 + 0x138);
        do {
          if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_04404cd0:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          memmove(auStack_124,__src,0x84);
          fVar10 = (float)UnityEngine_ParticleSystem_Particle__get_position(auStack_124,0);
          fVar12 = fVar14 * fVar12;
          fVar13 = fVar15 * fVar13;
          UnityEngine_ParticleSystem_Particle__set_position
                    (fVar7 * param_1 * fVar8 * fVar9 * fVar10,fVar12,fVar13,auStack_124,0);
          if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_04404cd0;
          memmove(__src,auStack_124,0x84);
          uVar4 = uVar4 + 1;
          __src = (void *)((long)__src + 0x84);
        } while (uVar1 != uVar4);
      }
      if (*(long *)(param_7 + 0x118) == 0) goto LAB_04404cd4;
      UnityEngine_ParticleSystem__SetParticles(*(long *)(param_7 + 0x118),lVar3,uVar1,0);
      *(undefined4 *)(param_7 + 0x130) = param_4;
      *(undefined1 *)(param_7 + 0xd8) = 1;
      *(float *)(param_7 + 0x134) = param_5;
      *(float *)(param_7 + 0x138) = param_6;
      *(float *)(param_7 + 0x124) = param_1;
      *(float *)(param_7 + 0x128) = param_2;
      *(float *)(param_7 + 300) = param_3;
      *(undefined1 *)(param_7 + 0xe0) = 1;
    }
  }
  uVar6 = UnityEngine_UI_Graphic__get_canvas(param_7,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
  uVar11 = 0x3f800000;
  if ((uVar4 & 1) != 0) {
    lVar3 = UnityEngine_UI_Graphic__get_canvas(param_7,0);
    if (lVar3 == 0) {
LAB_04404cd4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar11 = UnityEngine_Canvas__get_scaleFactor(lVar3,0);
  }
  *(undefined4 *)(param_7 + 0x120) = uVar11;
  *(ulong *)(param_7 + 0x13c) = uVar2;
  return;
}

