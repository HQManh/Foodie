// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingQueueTile$$Bind
// address: 0x44de55c
// body: available
// range: 0x44de55c-0x44de9e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44de9e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingQueueTile__Bind
               (long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_68;
  int local_34;
  
  if ((DAT_09518345 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09518345 = 1;
  }
  local_34 = 0;
  local_68 = 0;
  *(long *)(param_1 + 0x58) = param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x58),param_2);
  *(long *)(param_1 + 0x88) = param_3;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x88),param_3);
  CookOrder_Cooking_Implement_CookingQueueTile__ShowTray(param_1,1);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar1 & 1) != 0) {
    if ((param_3 == 0) || (param_4 == 0)) goto LAB_044de9e4;
    lVar9 = *(long *)(param_1 + 0x20);
    lVar2 = CookOrder_Cooking_Implement_CookingMapPresentation__Art
                      (param_4,*(undefined4 *)(param_3 + 0x20),0);
    if (lVar2 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar2 + 0x20);
    }
    if (lVar9 == 0) goto LAB_044de9e4;
    UnityEngine_SpriteRenderer__set_sprite(lVar9,uVar8,0);
    if ((((*(long *)(param_1 + 0x20) == 0) ||
         (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x20),0), param_2 == 0))
        || (*(long *)(param_2 + 0xd8) == 0)) || (lVar2 == 0)) goto LAB_044de9e4;
    uVar10 = *(undefined4 *)(*(long *)(param_2 + 0xd8) + 0x2b0);
    UnityEngine_Transform__set_localScale(uVar10,uVar10,0x3f800000,lVar2,0);
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x20),0), lVar2 == 0))
    goto LAB_044de9e4;
    UnityEngine_GameObject__SetActive(lVar2,*(char *)(param_3 + 0x38) == '\0',0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar1 & 1) != 0) {
    if ((param_3 == 0) || (*(long *)(param_1 + 0x38) == 0)) goto LAB_044de9e4;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x38),*(undefined1 *)(param_3 + 0x38),0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar1 & 1) != 0) {
    if (((*(long *)(param_1 + 0x28) == 0) ||
        (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x28),0), param_3 == 0))
       || (lVar2 == 0)) goto LAB_044de9e4;
    UnityEngine_GameObject__SetActive(lVar2,0 < *(int *)(param_3 + 0x34),0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar1 & 1) != 0) {
    if (param_3 == 0) goto LAB_044de9e4;
    plVar7 = *(long **)(param_1 + 0x40);
    uVar8 = DAT_091f5700;
    if (1 < *(int *)(param_3 + 0x24)) {
      local_34 = *(int *)(param_3 + 0x24);
      uVar8 = System_Int32__ToString(&local_34,0);
    }
    if (plVar7 == (long *)0x0) goto LAB_044de9e4;
    (**(code **)(*plVar7 + 0x558))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x560));
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x40),0), lVar2 == 0))
    goto LAB_044de9e4;
    UnityEngine_GameObject__SetActive(lVar2,1 < *(int *)(param_3 + 0x24),0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar1 & 1) != 0) {
    if (param_3 == 0) goto LAB_044de9e4;
    local_34 = *(int *)(param_3 + 0x34);
    plVar7 = *(long **)(param_1 + 0x48);
    uVar8 = System_Int32__ToString(&local_34,0);
    if (plVar7 == (long *)0x0) goto LAB_044de9e4;
    (**(code **)(*plVar7 + 0x558))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x560));
    if ((*(long *)(param_1 + 0x48) == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x48),0), lVar2 == 0))
    goto LAB_044de9e4;
    UnityEngine_GameObject__SetActive(lVar2,0 < *(int *)(param_3 + 0x34),0);
  }
  if (((param_2 == 0) || (param_3 == 0)) || (*(long *)(param_2 + 0x118) == 0)) goto LAB_044de9e4;
  uVar1 = CookingGraph_CookingLevelSimulation__CanPick
                    (*(long *)(param_2 + 0x118),*(undefined4 *)(param_3 + 0x18),&local_68,0);
  if (((uVar1 & 1) == 0) || (*(int *)(param_3 + 0x1c) != 0)) {
    lVar2 = *(long *)(param_2 + 0xd8);
    if (lVar2 == 0) goto LAB_044de9e4;
    if (*(char *)(lVar2 + 0x2b4) != '\0') goto LAB_044de8b4;
    pfVar3 = (float *)(lVar2 + 0x288);
    pfVar4 = (float *)(lVar2 + 0x28c);
    pfVar5 = (float *)(lVar2 + 0x290);
    pfVar6 = (float *)(lVar2 + 0x294);
  }
  else {
    lVar2 = *(long *)(param_2 + 0xd8);
    if (lVar2 == 0) goto LAB_044de9e4;
LAB_044de8b4:
    pfVar3 = (float *)(lVar2 + 0x278);
    pfVar4 = (float *)(lVar2 + 0x27c);
    pfVar5 = (float *)(lVar2 + 0x280);
    pfVar6 = (float *)(lVar2 + 0x284);
  }
  fVar11 = *pfVar3;
  fVar12 = *pfVar4;
  fVar13 = *pfVar5;
  fVar14 = *pfVar6;
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_044de9e4;
    UnityEngine_SpriteRenderer__set_color
              (fVar11 * *(float *)(param_1 + 0x70),fVar12 * *(float *)(param_1 + 0x74),
               fVar13 * *(float *)(param_1 + 0x78),fVar14 * *(float *)(param_1 + 0x7c),
               *(long *)(param_1 + 0x30),0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_044de9e4;
    UnityEngine_SpriteRenderer__set_color(fVar11,fVar12,fVar13,fVar14,*(long *)(param_1 + 0x20),0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar1 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0x40);
    if (plVar7 == (long *)0x0) {
LAB_044de9e4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar7 + 0x2a8))
              (fVar11 * *(float *)(param_1 + 0x60),fVar12 * *(float *)(param_1 + 100),
               fVar13 * *(float *)(param_1 + 0x68),fVar14 * *(float *)(param_1 + 0x6c),plVar7,
               *(undefined8 *)(*plVar7 + 0x2b0));
  }
  CookOrder_Cooking_Implement_CookingQueueTile__SetConsumed(param_1,*(undefined1 *)(param_1 + 0x80))
  ;
  return;
}

