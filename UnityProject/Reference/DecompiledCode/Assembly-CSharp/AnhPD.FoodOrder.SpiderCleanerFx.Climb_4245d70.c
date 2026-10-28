// rea decompile_all
// name: AnhPD.FoodOrder.SpiderCleanerFx$$Climb
// address: 0x4245d70
// body: available
// range: 0x4245d70-0x4245fc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4245fc0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4245fc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SpiderCleanerFx__Climb
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  if ((DAT_09516e70 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d9740);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbeb0);
    DAT_09516e70 = 1;
  }
  AnhPD_FoodOrder_SpiderCleanerFx__KillSeq(param_4);
  lVar1 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar1 == 0) goto LAB_04245fc4;
  UnityEngine_Transform__get_position(lVar1,0);
  fVar6 = *(float *)(param_4 + 0x38);
  uVar2 = AnhPD_FoodOrder_SpiderCleanerFx__get_Cam(param_4);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    param_2 = param_2 + fVar6;
  }
  else {
    lVar1 = AnhPD_FoodOrder_SpiderCleanerFx__get_Cam(param_4);
    if ((lVar1 == 0) || (lVar1 = UnityEngine_Component__get_transform(lVar1,0), lVar1 == 0))
    goto LAB_04245fc4;
    UnityEngine_Transform__get_position(lVar1,0);
    lVar1 = AnhPD_FoodOrder_SpiderCleanerFx__get_Cam(param_4);
    if (lVar1 == 0) goto LAB_04245fc4;
    param_3 = ABS(param_3);
    param_2 = 1.0;
    UnityEngine_Camera__ViewportToWorldPoint(0x3f000000,0x3f800000,param_3,lVar1,0);
    param_2 = param_2 + *(float *)(param_4 + 0x38);
  }
  lVar1 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar1 != 0) {
    uVar5 = UnityEngine_Transform__get_position(lVar1,0);
    lVar1 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__get_position(lVar1,0);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = DG_Tweening_DOTween__Sequence(0);
      uVar4 = UnityEngine_Component__get_transform(param_4,0);
      uVar4 = DG_Tweening_ShortcutExtensions__DOMove
                        (uVar5,param_2 + 2.0,param_3,*(undefined4 *)(param_4 + 0x40),uVar4,0,0);
      uVar4 = FUN_04d95e8c(uVar4,5,DAT_091dbeb0);
      uVar2 = DG_Tweening_TweenSettingsExtensions__Append(uVar2,uVar4,0);
      uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar4,param_4,DAT_091d9740,0);
      uVar2 = FUN_04d956bc(uVar2,uVar4,DAT_091dbd18);
      *(undefined8 *)(param_4 + 0x78) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x78),uVar2);
      return;
    }
  }
LAB_04245fc4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

