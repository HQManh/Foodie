// rea decompile_all
// name: Coffee.UIExtensions.UIParticle$$GetBakeCamera
// address: 0x4400bb0
// body: available
// range: 0x4400bb0-0x4401073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4400cac to 0x85f442c UnityEngine.Camera$$get_main (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4400de0 to 0x8991908 UnityEngine.Canvas$$get_worldCamera (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4401070 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Coffee_UIExtensions_UIParticle__GetBakeCamera(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  long local_38;
  
  if ((DAT_09517e7a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c58c0);
    FUN_03f5c2a4(&DAT_091cd5f8);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09214548);
    DAT_09517e7a = 1;
  }
  local_38 = 0;
  uVar2 = UnityEngine_UI_Graphic__get_canvas(param_1,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar3 & 1) == 0) {
    uVar2 = UnityEngine_Camera__get_main(0);
    return uVar2;
  }
  if (*(char *)(param_1 + 0x110) == '\0') {
    lVar4 = UnityEngine_UI_Graphic__get_canvas(param_1,0);
    if (lVar4 == 0) goto LAB_04401070;
    iVar1 = UnityEngine_Canvas__get_renderMode(lVar4,0);
    if (iVar1 != 0) {
      lVar4 = UnityEngine_UI_Graphic__get_canvas(param_1,0);
      if ((lVar4 == 0) || (lVar4 = UnityEngine_Canvas__get_rootCanvas(lVar4,0), lVar4 == 0))
      goto LAB_04401070;
      uVar2 = UnityEngine_Canvas__get_worldCamera(lVar4,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = UnityEngine_UI_Graphic__get_canvas(param_1,0);
        if ((lVar4 != 0) && (lVar4 = UnityEngine_Canvas__get_rootCanvas(lVar4,0), lVar4 != 0)) {
          uVar2 = UnityEngine_Canvas__get_worldCamera(lVar4,0);
          return uVar2;
        }
        goto LAB_04401070;
      }
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(param_1 + 0x110) == '\0') {
      uVar8 = 0x41200000;
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + 0x114);
    }
    if (*(long *)(param_1 + 0x128) == 0) goto LAB_04401070;
    UnityEngine_Camera__set_orthographicSize(uVar8,*(long *)(param_1 + 0x128),0);
LAB_04401058:
    return *(undefined8 *)(param_1 + 0x128);
  }
  lVar4 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar4 == 0) goto LAB_04401070;
  iVar1 = UnityEngine_Transform__get_childCount(lVar4,0);
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      lVar4 = UnityEngine_Component__get_transform(param_1,0);
      if ((lVar4 == 0) || (lVar4 = UnityEngine_Transform__GetChild(lVar4,iVar7,0), lVar4 == 0))
      goto LAB_04401070;
      uVar3 = FUN_04a6b048(lVar4,&local_38,DAT_091c58c0);
      if ((uVar3 & 1) != 0) {
        if (local_38 == 0) goto LAB_04401070;
        uVar2 = UnityEngine_Object__GetName(local_38,0);
        uVar3 = System_String__op_Equality(uVar2,DAT_09214548,0);
        if ((uVar3 & 1) != 0) {
          *(long *)(param_1 + 0x128) = local_38;
          thunk_FUN_03f5d7b8(param_1 + 0x128);
          break;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_09184b68);
    UnityEngine_GameObject___ctor(lVar4,DAT_09214548,0);
    if (lVar4 == 0) goto LAB_04401070;
    UnityEngine_GameObject__SetActive(lVar4,0,0);
    lVar5 = UnityEngine_GameObject__get_transform(lVar4,0);
    uVar2 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar5 == 0) goto LAB_04401070;
    UnityEngine_Transform__SetParent(lVar5,uVar2,0,0);
    uVar2 = FUN_04b7c294(lVar4,DAT_091cd5f8);
    *(undefined8 *)(param_1 + 0x128) = uVar2;
    thunk_FUN_03f5d7b8(param_1 + 0x128,uVar2);
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    UnityEngine_Behaviour__set_enabled(*(long *)(param_1 + 0x128),0,0);
    if (*(char *)(param_1 + 0x110) == '\0') {
      uVar8 = 0x41200000;
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + 0x114);
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      UnityEngine_Camera__set_orthographicSize(uVar8,*(long *)(param_1 + 0x128),0);
      if (*(long *)(param_1 + 0x128) != 0) {
        lVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x128),0);
        if (DAT_09515ed5 == '\0') {
          FUN_03f5c2a4(&DAT_091898c0);
          DAT_09515ed5 = '\x01';
        }
        if (lVar4 != 0) {
          puVar6 = *(undefined4 **)(DAT_091898c0 + 0xb8);
          UnityEngine_Transform__SetPositionAndRotation
                    (0,0,0xc47a0000,*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar4,0);
          if (*(long *)(param_1 + 0x128) != 0) {
            UnityEngine_Camera__set_orthographic(*(long *)(param_1 + 0x128),1,0);
            if (*(long *)(param_1 + 0x128) != 0) {
              UnityEngine_Camera__set_farClipPlane(0x44fa0000,*(long *)(param_1 + 0x128),0);
              if (*(long *)(param_1 + 0x128) != 0) {
                UnityEngine_Camera__set_clearFlags(*(long *)(param_1 + 0x128),4,0);
                if (*(long *)(param_1 + 0x128) != 0) {
                  UnityEngine_Camera__set_cullingMask(*(long *)(param_1 + 0x128),0,0);
                  if (*(long *)(param_1 + 0x128) != 0) {
                    UnityEngine_Camera__set_allowHDR(*(long *)(param_1 + 0x128),0,0);
                    if (*(long *)(param_1 + 0x128) != 0) {
                      UnityEngine_Camera__set_allowMSAA(*(long *)(param_1 + 0x128),0,0);
                      if (*(long *)(param_1 + 0x128) != 0) {
                        UnityEngine_Camera__set_renderingPath(*(long *)(param_1 + 0x128),1,0);
                        if (*(long *)(param_1 + 0x128) != 0) {
                          UnityEngine_Camera__set_useOcclusionCulling
                                    (*(long *)(param_1 + 0x128),0,0);
                          if ((*(long *)(param_1 + 0x128) != 0) &&
                             (lVar4 = UnityEngine_Component__get_gameObject
                                                (*(long *)(param_1 + 0x128),0), lVar4 != 0)) {
                            UnityEngine_GameObject__SetActive(lVar4,0,0);
                            if (*(long *)(param_1 + 0x128) != 0) {
                              lVar4 = UnityEngine_Component__get_gameObject
                                                (*(long *)(param_1 + 0x128),0);
                              uVar8 = Coffee_UIExtensions_UIParticleProjectSettings__get_globalHideFlags
                                                ();
                              if (lVar4 != 0) {
                                UnityEngine_Object__set_hideFlags(lVar4,uVar8,0);
                                goto LAB_04401058;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04401070:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

