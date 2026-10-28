// rea decompile_all
// name: Coffee.UIParticleInternal.ParticleSystemExtensions.<>c__DisplayClass7_0$$<SortForRendering>b__0
// address: 0x43fe13c
// body: available
// range: 0x43fe13c-0x43fe55b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43fe558 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Coffee_UIParticleInternal_ParticleSystemExtensions_<>c__DisplayClass7_0__<SortForRendering>b__0
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_09517e67 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5410);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188ee8);
    DAT_09517e67 = 1;
  }
  if (((param_5 != 0) && (lVar4 = FUN_04a6a14c(param_5,DAT_091c5410), param_6 != 0)) &&
     (lVar5 = FUN_04a6a14c(param_6,DAT_091c5410), lVar4 != 0)) {
    uVar6 = UnityEngine_Renderer__GetSharedMaterial(lVar4,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar7 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar7 & 1) == 0) {
      lVar8 = UnityEngine_ParticleSystemRenderer__get_trailMaterial(lVar4,0);
    }
    else {
      lVar8 = UnityEngine_Renderer__GetSharedMaterial(lVar4,0);
    }
    if (lVar5 != 0) {
      uVar6 = UnityEngine_Renderer__GetSharedMaterial(lVar5,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar7 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar7 & 1) == 0) {
        lVar9 = UnityEngine_ParticleSystemRenderer__get_trailMaterial(lVar5,0);
      }
      else {
        lVar9 = UnityEngine_Renderer__GetSharedMaterial(lVar5,0);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = UnityEngine_Object__op_Implicit(lVar8,0);
      if ((uVar7 & 1) == 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Implicit(lVar9,0);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = UnityEngine_Object__op_Implicit(lVar8,0);
      if ((uVar7 & 1) == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Implicit(lVar9,0);
        if ((uVar7 & 1) == 0) {
          uVar3 = 1;
        }
        else {
          if (*(char *)(param_4 + 0x10) == '\0') {
            if ((lVar8 == 0) || (iVar1 = UnityEngine_Material__get_renderQueue(lVar8,0), lVar9 == 0)
               ) goto LAB_043fe558;
            iVar2 = UnityEngine_Material__get_renderQueue(lVar9,0);
            if (iVar1 == iVar2) {
              iVar1 = UnityEngine_Renderer__get_sortingLayerID(lVar4,0);
              iVar2 = UnityEngine_Renderer__get_sortingLayerID(lVar5,0);
              if (iVar1 == iVar2) {
                iVar1 = UnityEngine_Renderer__get_sortingOrder(lVar4,0);
                iVar2 = UnityEngine_Renderer__get_sortingOrder(lVar5,0);
                if (iVar1 == iVar2) {
                  lVar8 = UnityEngine_Component__get_transform(param_5,0);
                  lVar9 = UnityEngine_Component__get_transform(param_6,0);
                  if (lVar8 != 0) {
                    lVar10 = *(long *)(param_4 + 0x18);
                    UnityEngine_Transform__get_position(lVar8,0);
                    if (lVar10 != 0) {
                      UnityEngine_Transform__InverseTransformPoint(lVar10,0);
                      fVar14 = param_3;
                      fVar11 = (float)UnityEngine_ParticleSystemRenderer__get_sortingFudge(lVar4,0);
                      if (lVar9 != 0) {
                        lVar4 = *(long *)(param_4 + 0x18);
                        UnityEngine_Transform__get_position(lVar9,0);
                        if (lVar4 != 0) {
                          UnityEngine_Transform__InverseTransformPoint(lVar4,0);
                          fVar12 = (float)UnityEngine_ParticleSystemRenderer__get_sortingFudge
                                                    (lVar5,0);
                          uVar7 = FUN_04406560(param_3 + fVar11,fVar14 + fVar12,0);
                          if ((uVar7 & 1) != 0) {
                            uVar6 = *(undefined8 *)(param_4 + 0x20);
                            if (*(int *)(DAT_09188ee8 + 0xe4) == 0) {
                              FUN_03f5c424();
                            }
                            iVar1 = Coffee_UIParticleInternal_ParticleSystemExtensions__GetIndex
                                              (uVar6,param_5);
                            iVar2 = Coffee_UIParticleInternal_ParticleSystemExtensions__GetIndex
                                              (*(undefined8 *)(param_4 + 0x20),param_6);
                            return iVar1 - iVar2 >> 0x1f | 1;
                          }
                          fVar13 = -1.0;
                          if (0.0 <= (fVar14 + fVar12) - (param_3 + fVar11)) {
                            fVar13 = 1.0;
                          }
                          return (int)fVar13;
                        }
                      }
                    }
                  }
                  goto LAB_043fe558;
                }
                iVar1 = UnityEngine_Renderer__get_sortingOrder(lVar4,0);
                iVar2 = UnityEngine_Renderer__get_sortingOrder(lVar5,0);
              }
              else {
                uVar6 = UnityEngine_Renderer__get_sortingLayerID(lVar4,0);
                iVar1 = UnityEngine_SortingLayer__GetLayerValueFromID(uVar6,0);
                uVar6 = UnityEngine_Renderer__get_sortingLayerID(lVar5,0);
                iVar2 = UnityEngine_SortingLayer__GetLayerValueFromID(uVar6,0);
              }
            }
            else {
              iVar1 = UnityEngine_Material__get_renderQueue(lVar8,0);
              iVar2 = UnityEngine_Material__get_renderQueue(lVar9,0);
            }
          }
          else {
            if ((lVar8 == 0) || (iVar1 = UnityEngine_Object__GetInstanceID(lVar8,0), lVar9 == 0))
            goto LAB_043fe558;
            iVar2 = UnityEngine_Object__GetInstanceID(lVar9,0);
          }
          uVar3 = iVar1 - iVar2;
        }
      }
      return uVar3;
    }
  }
LAB_043fe558:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

