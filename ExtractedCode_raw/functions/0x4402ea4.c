// rea decompile_all
// name: Coffee.UIExtensions.UIParticleAttractor$$Attract
// address: 0x4402ea4
// body: available
// range: 0x4402ea4-0x4403233 inclusive
// range: 0x44032c0-0x440331f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44032e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440331c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticleAttractor__Attract
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  void *__src;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_124 [132];
  
  if ((DAT_09517e81 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aeee0);
    FUN_03f5c2a4(&DAT_091b1608);
    FUN_03f5c2a4(&DAT_091aeee8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188ee8);
    DAT_09517e81 = 1;
  }
  memset(auStack_124,0,0x84);
  Coffee_UIExtensions_UIParticleAttractor__CollectUIParticlesIfNeeded(param_4);
  lVar2 = *(long *)(param_4 + 0x28);
  if (lVar2 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar6) {
        return;
      }
      lVar2 = FUN_057e0998(lVar2,iVar6,DAT_091aeee8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Equality(lVar2,0,0);
      if ((uVar3 & 1) == 0) {
        if ((lVar2 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar2,0), lVar4 == 0))
        break;
        uVar3 = UnityEngine_GameObject__get_activeInHierarchy(lVar4,0);
        if (((uVar3 & 1) != 0) &&
           (uVar1 = UnityEngine_ParticleSystem__get_particleCount(lVar2,0), uVar1 != 0)) {
          fVar11 = param_2;
          fVar12 = param_3;
          if (*(int *)(DAT_09188ee8 + 0xe4) == 0) {
            FUN_03f5c424();
            fVar11 = param_2;
            fVar12 = param_3;
          }
          lVar4 = Coffee_UIParticleInternal_ParticleSystemExtensions__GetParticleArray(uVar1);
          UnityEngine_ParticleSystem__GetParticles(lVar2,lVar4,uVar1,0);
          if (*(long *)(param_4 + 0x50) == 0) break;
          uVar5 = FUN_057e0998(*(long *)(param_4 + 0x50),iVar6,DAT_091b1608);
          fVar7 = (float)Coffee_UIExtensions_UIParticleAttractor__GetDestinationPosition
                                   (param_4,uVar5,lVar2);
          param_2 = fVar11;
          param_3 = fVar12;
          if (0 < (int)uVar1) {
            if (lVar4 == 0) break;
            uVar3 = 0;
            __src = (void *)(lVar4 + 0x20);
            do {
              if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_0440331c;
              memmove(auStack_124,__src,0x84);
              fVar8 = (float)UnityEngine_ParticleSystem_Particle__get_remainingLifetime
                                       (auStack_124,0);
              if (fVar8 <= 0.0) {
LAB_04403150:
                fVar10 = (float)UnityEngine_ParticleSystem_Particle__get_startLifetime
                                          (auStack_124,0);
                param_2 = *(float *)(param_4 + 0x34);
                fVar10 = fVar10 * param_2;
                UnityEngine_ParticleSystem_Particle__get_startLifetime(auStack_124,0);
                fVar8 = (float)UnityEngine_ParticleSystem_Particle__get_startLifetime(auStack_124,0)
                ;
                fVar9 = (float)UnityEngine_ParticleSystem_Particle__get_remainingLifetime
                                         (auStack_124,0);
                fVar10 = (fVar8 - fVar9) - fVar10;
                fVar8 = 0.0;
                if (0.0 <= fVar10) {
                  fVar8 = fVar10;
                }
                if (0.0 < fVar8) {
                  UnityEngine_ParticleSystem_Particle__get_position(auStack_124,0);
                  Coffee_UIExtensions_UIParticleAttractor__GetAttractedPosition(param_4);
                  UnityEngine_ParticleSystem_Particle__set_position(auStack_124,0);
                  fVar8 = (float)UnityEngine_ParticleSystem_Particle__get_velocity(auStack_124,0);
                  param_2 = param_2 * 0.5;
                  param_3 = param_3 * 0.5;
                  UnityEngine_ParticleSystem_Particle__set_velocity(fVar8 * 0.5,auStack_124,0);
                  if (*(uint *)(lVar4 + 0x18) <= uVar3) {
LAB_0440331c:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  memmove(__src,auStack_124,0x84);
                }
              }
              else {
                fVar8 = (float)UnityEngine_ParticleSystem_Particle__get_position(auStack_124,0);
                if (DAT_09517ea7 == '\0') {
                  FUN_03f5c2a4(&DAT_09187e80);
                  DAT_09517ea7 = '\x01';
                }
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                fVar9 = param_2 - fVar11;
                param_3 = param_3 - fVar12;
                param_2 = *(float *)(param_4 + 0x30);
                if (param_2 <=
                    SQRT(param_3 * param_3 + (fVar8 - fVar7) * (fVar8 - fVar7) + fVar9 * fVar9))
                goto LAB_04403150;
                UnityEngine_ParticleSystem_Particle__set_remainingLifetime(0,auStack_124,0);
                if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_0440331c;
                memmove(__src,auStack_124,0x84);
                if (*(long *)(param_4 + 0x48) != 0) {
                  UnityEngine_Events_UnityEvent__Invoke(*(long *)(param_4 + 0x48),0);
                }
              }
              uVar3 = uVar3 + 1;
              __src = (void *)((long)__src + 0x84);
            } while (uVar1 != uVar3);
          }
          UnityEngine_ParticleSystem__SetParticles(lVar2,lVar4,uVar1,0);
        }
      }
      lVar2 = *(long *)(param_4 + 0x28);
      iVar6 = iVar6 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

