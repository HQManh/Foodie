// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$SetupMaterialTMPro
// address: 0x43bcb54
// body: available
// range: 0x43bcb54-0x43bcdf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bcdec to 0x8619714 UnityEngine.Material$$SetFloat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43bcdf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterStackTextMeshPro__SetupMaterialTMPro
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_09517b65 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c48);
    FUN_03f5c2a4(&DAT_0918aac8);
    FUN_03f5c2a4(&DAT_0918c760);
    DAT_09517b65 = 1;
  }
  if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_043bcdf0;
  uVar1 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_1 + 0x30),0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
  fVar6 = 1.0;
  fVar5 = 1.0;
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar3 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_1 + 0x30),0), lVar3 == 0))
    goto LAB_043bcdf0;
    fVar5 = (float)UnityEngine_Canvas__get_scaleFactor(lVar3,0);
    lVar4 = UnityEngine_Component__get_transform(lVar3,0);
    if (lVar4 == 0) goto LAB_043bcdf0;
    fVar6 = (float)UnityEngine_Transform__get_localScale(lVar4,0);
    uVar2 = UnityEngine_Canvas__get_isRootCanvas(lVar3,0);
    if ((uVar2 & 1) == 0) {
      uVar1 = UnityEngine_Canvas__get_rootCanvas(lVar3,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = UnityEngine_Canvas__get_rootCanvas(lVar3,0);
        if ((lVar3 == 0) || (lVar3 = UnityEngine_Component__get_transform(lVar3,0), lVar3 == 0))
        goto LAB_043bcdf0;
        fVar6 = (float)UnityEngine_Transform__get_localScale(lVar3,0);
      }
    }
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar9 = (float)(int)param_5;
  fVar8 = (float)(int)((ulong)param_5 >> 0x20);
  uVar2 = UnityEngine_Object__op_Equality(param_3,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(param_1 + 0xac) == 0) {
      fVar9 = (fVar5 / fVar6) * fVar9;
      fVar8 = (fVar5 / fVar6) * fVar8;
    }
  }
  else {
    fVar9 = fVar5 * fVar9;
    fVar8 = fVar5 * fVar8;
  }
  if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Shader__SetGlobalVectorImpl
            (fVar9,fVar8,1.0 / fVar9 + 1.0,1.0 / fVar8 + 1.0,
             *(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 4),0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_3,0);
  if ((uVar2 & 1) == 0) {
LAB_043bcd9c:
    uVar7 = 0;
  }
  else {
    if (param_3 == 0) goto LAB_043bcdf0;
    uVar2 = UnityEngine_Camera__get_orthographic(param_3,0);
    uVar7 = 0x3f600000;
    if ((uVar2 & 1) != 0) goto LAB_043bcd9c;
  }
  if (*(int *)(DAT_0918aac8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_2 != 0) {
    UnityEngine_Material__SetFloat
              (uVar7,param_2,*(undefined4 *)(*(long *)(DAT_0918aac8 + 0xb8) + 0x78),0);
    return;
  }
LAB_043bcdf0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

