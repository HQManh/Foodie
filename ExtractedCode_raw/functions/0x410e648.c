// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewSpineMixer$$Apply
// address: 0x410e648
// body: available
// range: 0x410e648-0x410e813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410e7a4 to 0x410ec70 AnhPD.FoodOrder.GroupViewSpineMixer$$PlaySfx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x410e80c to 0x78c8244 Spine.TrackEntry$$add_Start (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x410e810 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewSpineMixer__Apply
               (float param_1,undefined4 param_2,long param_3,long param_4,long param_5,
               ulong param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((DAT_095161de & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918e418);
    FUN_03f5c2a4(&DAT_091eafe8);
    FUN_03f5c2a4(&DAT_09191198);
    DAT_095161de = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09191198);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar4 = (long *)(lVar2 + 0x10);
    *plVar4 = param_5;
    thunk_FUN_03f5d7b8(plVar4,param_5);
    *(undefined4 *)(lVar2 + 0x18) = param_2;
    if (param_4 == 0) {
      return;
    }
    if (*plVar4 != 0) {
      fVar6 = *(float *)(*plVar4 + 0x18);
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      if (fVar6 <= 0.01) {
        fVar6 = 0.01;
      }
      iVar1 = *(int *)(DAT_09188ad0 + 0xe4);
      *(float *)(param_4 + 0xa4) = fVar6 * param_1;
      if (iVar1 == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_3 + 0x20) == 0) goto LAB_0410e810;
        *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x15c) = 0x3f800000;
      }
      if (*plVar4 != 0) {
        uVar5 = *(undefined8 *)(*plVar4 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if ((param_6 & 1) == 0) {
          uVar5 = thunk_FUN_03f9944c(DAT_0918e418);
          Spine_AnimationState_TrackEntryDelegate___ctor(uVar5,lVar2,DAT_091eafe8,0);
          Spine_TrackEntry__add_Start(param_4,uVar5,0);
          return;
        }
        if (*plVar4 != 0) {
          AnhPD_FoodOrder_GroupViewSpineMixer__PlaySfx
                    (*(undefined4 *)(lVar2 + 0x18),*(undefined8 *)(*plVar4 + 0x20));
          return;
        }
      }
    }
  }
LAB_0410e810:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

