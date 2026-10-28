// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$SetupMaterialForRendering
// address: 0x43d577c
// body: available
// range: 0x43d577c-0x43d5a43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d59f8 to 0x43a665c ChocDino.UIFX.UnityShaderProp$$CopyStencilProperties (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43d5a3c to 0x43a656c ChocDino.UIFX.UnityShaderProp$$ResetStencilProperties (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43d5a40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterBase__SetupMaterialForRendering(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((DAT_09517ca0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091845d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c760);
    DAT_09517ca0 = 1;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    UnityEngine_Material__CopyPropertiesFromMaterial(*(long *)(param_1 + 0x90),param_2,0);
    plVar1 = (long *)ChocDino_UIFX_FilterBase__get_GraphicComponent(param_1);
    if (plVar1 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x368))(plVar1,*(undefined8 *)(*plVar1 + 0x370));
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x90) == 0) goto LAB_043d5a40;
        UnityEngine_Material__set_mainTexture(*(long *)(param_1 + 0x90),uVar2,0);
      }
      if (*(long *)(param_1 + 0x90) != 0) {
        uVar2 = UnityEngine_Material__get_mainTexture(*(long *)(param_1 + 0x90),0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
        if ((uVar3 & 1) != 0) {
          lVar5 = *(long *)(param_1 + 0x90);
          if (*(char *)(param_1 + 0x30) == '\0') {
            if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = **(undefined4 **)(DAT_0918c760 + 0xb8);
            if (DAT_09516627 == '\0') {
              FUN_03f5c2a4(&DAT_0918cc38);
              DAT_09516627 = '\x01';
            }
            if (lVar5 == 0) goto LAB_043d5a40;
            plVar1 = &DAT_0918cc38;
          }
          else {
            if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = **(undefined4 **)(DAT_0918c760 + 0xb8);
            if (*(int *)(DAT_091845d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091845d0);
            }
            if (lVar5 == 0) goto LAB_043d5a40;
            plVar1 = &DAT_091845d0;
          }
          puVar4 = *(undefined4 **)(*plVar1 + 0xb8);
          UnityEngine_Material__SetColorImpl(*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar5,uVar7,0);
        }
        if (*(char *)(param_1 + 0xe9) != '\0') {
          uVar2 = *(undefined8 *)(param_1 + 0x90);
          if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          ChocDino_UIFX_UnityShaderProp__ResetClipRect(uVar2,0);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x70);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
        if ((uVar3 & 1) != 0) {
          uVar2 = ChocDino_UIFX_FilterBase__get_MaskableGraphicComponent(param_1);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
          if ((uVar3 & 1) != 0) {
            lVar5 = ChocDino_UIFX_FilterBase__get_MaskableGraphicComponent(param_1);
            if (lVar5 != 0) {
              if (*(char *)(lVar5 + 0xb8) != '\0') {
                uVar6 = *(undefined8 *)(param_1 + 0x90);
                uVar2 = *(undefined8 *)(param_1 + 0x70);
                if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                ChocDino_UIFX_UnityShaderProp__CopyStencilProperties(uVar6,uVar2,0);
                return;
              }
              uVar2 = *(undefined8 *)(param_1 + 0x70);
              if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              ChocDino_UIFX_UnityShaderProp__ResetStencilProperties(uVar2,0);
              return;
            }
            goto LAB_043d5a40;
          }
        }
        return;
      }
    }
  }
LAB_043d5a40:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

