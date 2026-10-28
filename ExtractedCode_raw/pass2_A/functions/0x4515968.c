// rea decompile_all
// name: Utilities.ExportPlayCameraToImage$$Capture
// address: 0x4515968
// body: available
// range: 0x4515968-0x4515cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4515cf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4515cf4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_ExportPlayCameraToImage__Capture(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_09518564 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0918bc08);
    FUN_03f5c2a4(&DAT_091f9400);
    FUN_03f5c2a4(&DAT_091f93a0);
    FUN_03f5c2a4(&DAT_0920c750);
    DAT_09518564 = 1;
  }
  uVar5 = UnityEngine_RenderTexture__GetActive(0);
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar6 = UnityEngine_Camera__get_targetTexture(*(long *)(param_1 + 0x38),0);
    UnityEngine_RenderTexture__set_active(uVar6,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      UnityEngine_Camera__Render(*(long *)(param_1 + 0x38),0);
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (plVar7 = (long *)UnityEngine_Camera__get_targetTexture(*(long *)(param_1 + 0x38),0),
         plVar7 != (long *)0x0)) {
        uVar1 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
        if (*(long *)(param_1 + 0x38) != 0) {
          plVar7 = (long *)UnityEngine_Camera__get_targetTexture(*(long *)(param_1 + 0x38),0);
          if (plVar7 != (long *)0x0) {
            uVar2 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
            lVar8 = thunk_FUN_03f9944c(DAT_0918bc08);
            UnityEngine_Texture2D___ctor(lVar8,uVar1,uVar2,0);
            if ((*(long *)(param_1 + 0x38) != 0) &&
               (plVar7 = (long *)UnityEngine_Camera__get_targetTexture(*(long *)(param_1 + 0x38),0),
               plVar7 != (long *)0x0)) {
              iVar3 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
              if (*(long *)(param_1 + 0x38) != 0) {
                plVar7 = (long *)UnityEngine_Camera__get_targetTexture(*(long *)(param_1 + 0x38),0);
                if (plVar7 != (long *)0x0) {
                  iVar4 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
                  if (lVar8 != 0) {
                    UnityEngine_Texture2D__ReadPixels(0,0,(float)iVar3,(float)iVar4,lVar8,0,0,0);
                    UnityEngine_Texture2D__Apply(lVar8,0);
                    UnityEngine_RenderTexture__set_active(uVar5,0);
                    uVar5 = UnityEngine_ImageConversion__EncodeToPNG(lVar8,0);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_09188ad0);
                    }
                    UnityEngine_Object__Destroy(lVar8,0);
                    lVar8 = FUN_03f5c394(DAT_091805f8,6);
                    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_091814b0);
                    }
                    uVar6 = UnityEngine_Application__get_dataPath(0);
                    if (lVar8 != 0) {
                      if (*(int *)(lVar8 + 0x18) != 0) {
                        *(undefined8 *)(lVar8 + 0x20) = uVar6;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x20),uVar6);
                        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(param_1 + 0x20);
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x28));
                          if (2 < *(uint *)(lVar8 + 0x18)) {
                            *(undefined8 *)(lVar8 + 0x30) = DAT_091f9400;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x30));
                            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
                              *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(param_1 + 0x28);
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x38));
                              uVar6 = System_Int32__ToString(param_1 + 0x30,0);
                              if (4 < *(uint *)(lVar8 + 0x18)) {
                                *(undefined8 *)(lVar8 + 0x40) = uVar6;
                                thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x40),uVar6);
                                if (5 < *(uint *)(lVar8 + 0x18)) {
                                  *(undefined8 *)(lVar8 + 0x48) = DAT_091f93a0;
                                  thunk_FUN_03f5d7b8();
                                  uVar6 = System_String__Concat(lVar8,0);
                                  System_IO_File__WriteAllBytes(uVar6,uVar5,0);
                                  uVar5 = System_String__Concat(DAT_0920c750,uVar6,0);
                                  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                                    FUN_03f5c424(DAT_091835d0);
                                  }
                                  UnityEngine_Debug__Log(uVar5,0);
                                  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
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
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

