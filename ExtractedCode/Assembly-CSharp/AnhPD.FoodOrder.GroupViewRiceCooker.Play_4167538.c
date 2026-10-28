// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewRiceCooker$$Play
// address: 0x4167538
// body: available
// range: 0x4167538-0x416775f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4167704 to 0x78c8244 Spine.TrackEntry$$add_Start (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4167738 to 0x4167768 AnhPD.FoodOrder.GroupViewRiceCooker$$OnFillWaterStart (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x416775c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewRiceCooker__Play(float param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  float fVar10;
  
  if ((DAT_0951657c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918e418);
    FUN_03f5c2a4(&DAT_091eaf78);
    FUN_03f5c2a4(&DAT_09191140);
    DAT_0951657c = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_09191140);
  System_Object___ctor(lVar4,0);
  if (lVar4 == 0) goto LAB_0416775c;
  *(long *)(lVar4 + 0x10) = param_2;
  thunk_FUN_03f5d7b8((long *)(lVar4 + 0x10),param_2);
  lVar5 = UnityEngine_Component__get_gameObject(param_2,0);
  if (lVar5 == 0) goto LAB_0416775c;
  UnityEngine_GameObject__SetActive(lVar5,1,0);
  lVar5 = AnhPD_FoodOrder_GroupViewRiceCooker__StateOf(param_2);
  if (lVar5 == 0) {
    return;
  }
  uVar6 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x48),0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar7 = Spine_AnimationState__GetCurrent(lVar5,0,0);
  if (lVar7 == 0) {
LAB_04167640:
    lVar7 = Spine_AnimationState__SetAnimation(lVar5,0,*(undefined8 *)(param_2 + 0x48),0,0);
  }
  else {
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x10);
    }
    uVar6 = System_String__op_Equality(uVar8,*(undefined8 *)(param_2 + 0x38),0);
    if (((uVar6 & 1) == 0) || (uVar6 = Spine_TrackEntry__get_IsComplete(lVar7,0), (uVar6 & 1) != 0))
    goto LAB_04167640;
    lVar7 = Spine_AnimationState__AddAnimation(0,lVar5,0,*(undefined8 *)(param_2 + 0x48),0,0);
  }
  plVar9 = (long *)(lVar4 + 0x18);
  *plVar9 = lVar7;
  thunk_FUN_03f5d7b8(plVar9,lVar7);
  lVar7 = *plVar9;
  if (lVar7 == 0) {
    return;
  }
  if (*(long *)(lVar7 + 0x10) != 0) {
    fVar10 = *(float *)(*(long *)(lVar7 + 0x10) + 0x28);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (0.0 < fVar10) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < 0.0;
        bVar2 = param_1 == 0.0;
        bVar3 = false;
      }
    }
    fVar10 = fVar10 / param_1;
    if (bVar2 || bVar1 != bVar3) {
      fVar10 = 1.0;
    }
    *(float *)(lVar7 + 0xa4) = fVar10;
    lVar5 = Spine_AnimationState__GetCurrent(lVar5,0,0);
    lVar7 = *plVar9;
    if (lVar5 == lVar7) {
      if (lVar5 != 0) {
        AnhPD_FoodOrder_GroupViewRiceCooker__OnFillWaterStart(*(undefined4 *)(lVar5 + 0xa4),param_2)
        ;
        return;
      }
    }
    else {
      uVar8 = thunk_FUN_03f9944c(DAT_0918e418);
      Spine_AnimationState_TrackEntryDelegate___ctor(uVar8,lVar4,DAT_091eaf78,0);
      if (lVar7 != 0) {
        Spine_TrackEntry__add_Start(lVar7,uVar8,0);
        return;
      }
    }
  }
LAB_0416775c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

