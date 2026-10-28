// rea decompile_all
// name: AnhPD.FoodOrder.UIHintFlexibleHelper$$FitToCamera
// address: 0x4129960
// body: available
// range: 0x4129960-0x4129b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4129b70 to 0x866c8b0 UnityEngine.Transform$$set_position (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4129b74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIHintFlexibleHelper__FitToCamera
               (float param_1,float param_2,float param_3,long param_4,long param_5,int param_6,
               int param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  if ((DAT_095162f2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095162f2 = 1;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  if (param_5 == 0) goto LAB_04129b74;
  lVar1 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_5,0);
  if ((*(long *)(param_4 + 0x20) == 0) ||
     (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x20),0), lVar2 == 0))
  goto LAB_04129b74;
  fVar5 = (float)UnityEngine_Transform__get_position(lVar2,0);
  fVar9 = param_2;
  uVar3 = AnhPD_FoodOrder_UIHintFlexibleHelper__TryGetFrameBounds(param_5,param_8,&local_88);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
    lVar2 = lVar1;
    if ((uVar3 & 1) != 0) {
      lVar2 = *(long *)(param_5 + 0x20);
    }
    if ((lVar2 == 0) || (fVar10 = (float)UnityEngine_Transform__get_position(lVar2,0), lVar1 == 0))
    goto LAB_04129b74;
    goto LAB_04129b20;
  }
  if (*(long *)(param_4 + 0x20) == 0) goto LAB_04129b74;
  uVar3 = UnityEngine_Camera__get_orthographic(*(long *)(param_4 + 0x20),0);
  if ((uVar3 & 1) == 0) {
LAB_04129b18:
    if (lVar1 == 0) {
LAB_04129b74:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    fVar9 = uStack_80._4_4_ + uStack_80._4_4_;
    if (fVar9 <= 0.0) goto LAB_04129b18;
    fVar10 = (float)local_78 + (float)local_78;
    if (fVar10 <= 0.0) goto LAB_04129b18;
    if ((*(long *)(param_4 + 0x20) == 0) ||
       (fVar6 = (float)UnityEngine_Camera__get_orthographicSize(*(long *)(param_4 + 0x20),0),
       lVar1 == 0)) goto LAB_04129b74;
    param_3 = *(float *)(param_4 + 0x30);
    fVar11 = (fVar6 + fVar6) * (1.0 - param_3);
    fVar8 = (float)param_7;
    fVar6 = (fVar11 * (float)param_6) / fVar8;
    fVar7 = (float)UnityEngine_Transform__get_localScale(lVar1,0);
    fVar6 = fVar6 / fVar9;
    fVar11 = fVar11 / fVar10;
    if (fVar11 <= fVar6) {
      fVar6 = fVar11;
    }
    fVar6 = fVar6 * param_1;
    param_3 = param_3 * fVar6;
    UnityEngine_Transform__set_localScale(fVar7 * fVar6,fVar8 * fVar6,param_3,lVar1,0);
    AnhPD_FoodOrder_UIHintFlexibleHelper__TryGetFrameBounds(param_5,param_8,&local_88);
  }
  fVar10 = (float)local_88;
  fVar9 = local_88._4_4_;
LAB_04129b20:
  param_2 = param_2 - fVar9;
  fVar6 = (float)UnityEngine_Transform__get_position(lVar1,0);
  UnityEngine_Transform__set_position
            ((fVar5 - fVar10) + fVar6,param_2 + fVar9,param_3 + 0.0,lVar1,0);
  return;
}

