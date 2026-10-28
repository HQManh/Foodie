// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaBlenderView$$PlayIntake
// address: 0x407b3f0
// body: available
// range: 0x407b3f0-0x407b60b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407b5e8 to 0x78c7448 Spine.AnimationState$$AddAnimation (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x407b608 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Pasta_PastaBlenderView__PlayIntake
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  if ((DAT_09515c41 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d5838);
    FUN_03f5c2a4(&DAT_0918e418);
    DAT_09515c41 = 1;
  }
  lVar2 = CakeOrder_InGame_Pasta_PastaBlenderView__StateOf(param_1);
  lVar3 = CakeOrder_InGame_Pasta_PastaBlenderView__AnimationOf(param_1,param_2);
  if ((lVar2 == 0) || (lVar3 == 0)) {
    *(undefined1 *)(param_1 + 0x9d) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x9d) = 1;
  lVar3 = Spine_AnimationState__SetAnimation(lVar2,0,lVar3,0,0);
  *(long *)(param_1 + 0xa8) = lVar3;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0xa8),lVar3);
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = 0x3f800000;
    if (*(char *)(param_1 + 0x9e) != '\0') {
      uVar7 = 0;
    }
    iVar1 = *(int *)(DAT_09188ad0 + 0xe4);
    *(undefined4 *)(lVar3 + 0xa4) = uVar7;
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar4 & 1) != 0) {
      fVar8 = 0.0;
      if (*(char *)(param_1 + 0x9e) == '\0') {
        fVar8 = 0.01;
        if (0.01 <= *(float *)(param_1 + 0x78)) {
          fVar8 = *(float *)(param_1 + 0x78);
        }
      }
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0407b608;
      *(float *)(*(long *)(param_1 + 0x20) + 0x15c) = fVar8;
    }
    lVar5 = CakeOrder_InGame_Pasta_PastaBlenderView__get_SfxPlayer(param_1);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Implicit(param_4,0);
    uVar7 = 0;
    if ((uVar4 & 1) != 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x68);
    }
    if (lVar5 != 0) {
      fVar8 = 0.01;
      if (0.01 <= *(float *)(param_1 + 0x78)) {
        fVar8 = *(float *)(param_1 + 0x78);
      }
      CakeOrder_InGame_Pasta_PastaSpineSfxPlayer__Play(0,uVar7,fVar8,lVar5,param_4);
      uVar6 = thunk_FUN_03f9944c(DAT_0918e418);
      Spine_AnimationState_TrackEntryDelegate___ctor(uVar6,param_1,DAT_091d5838,0);
      Spine_TrackEntry__add_Complete(lVar3,uVar6,0);
      lVar3 = CakeOrder_InGame_Pasta_PastaBlenderView__AnimationOf(param_1,param_3);
      if (lVar3 == 0) {
        return;
      }
      Spine_AnimationState__AddAnimation(0,lVar2,0,lVar3,1,0);
      return;
    }
  }
LAB_0407b608:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

