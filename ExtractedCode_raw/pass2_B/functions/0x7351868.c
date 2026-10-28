// rea decompile_all
// name: Lean.Touch.LeanTwistRotate$$TranslateUI
// address: 0x7351868
// body: available
// range: 0x7351868-0x7351ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7351ab0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanTwistRotate__TranslateUI(float param_1,float param_2,float param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  float local_58;
  
  fVar8 = param_2;
  fVar7 = param_3;
  if ((DAT_09520778 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5630);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189ca0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09520778 = 1;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x28);
  local_68 = 0;
  local_70 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar3 == 0) goto LAB_07351ab0;
    lVar3 = FUN_04a6a6d8(lVar3,DAT_091c5630);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar3 == 0) goto LAB_07351ab0;
      iVar1 = UnityEngine_Canvas__get_renderMode(lVar3,0);
      if (iVar1 != 0) {
        uVar5 = UnityEngine_Canvas__get_worldCamera(lVar3,0);
      }
    }
  }
  lVar3 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar3 != 0) {
    uVar6 = UnityEngine_Transform__get_position(lVar3,0);
    if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_RectTransformUtility__WorldToScreenPoint(uVar6,fVar8,fVar7,uVar5,0);
    local_60 = 0;
    local_58 = param_1 * 0.017453292;
    UnityEngine_Quaternion__Internal_FromEulerRad(&local_60,0);
    fVar7 = (float)UnityEngine_Quaternion__op_Multiply(0);
    local_70 = 0;
    local_68 = 0;
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar3 != 0) {
      plVar4 = (long *)UnityEngine_Transform__GetParent(lVar3,0);
      if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09189c98)) {
        plVar4 = (long *)0x0;
      }
      uVar2 = UnityEngine_RectTransformUtility__ScreenPointToWorldPointInRectangle
                        (param_2 + fVar7,param_3 + fVar8,plVar4,uVar5,&local_70,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = UnityEngine_Component__get_transform(param_4,0);
        if (lVar3 == 0) goto LAB_07351ab0;
        UnityEngine_Transform__set_position((undefined4)local_70,local_70._4_4_,local_68,lVar3,0);
      }
      return;
    }
  }
LAB_07351ab0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

