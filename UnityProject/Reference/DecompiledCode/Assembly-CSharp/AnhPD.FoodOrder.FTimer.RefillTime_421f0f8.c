// rea decompile_all
// name: AnhPD.FoodOrder.FTimer$$RefillTime
// address: 0x421f0f8
// body: available
// range: 0x421f0f8-0x421f3ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421f340 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x421f3a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FTimer__RefillTime(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  float fVar6;
  undefined4 uVar7;
  
  if ((DAT_09516d14 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e18);
    FUN_03f5c2a4(&DAT_09175e68);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091cc128);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd30);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dc008);
    FUN_03f5c2a4(&DAT_091e9f98);
    FUN_03f5c2a4(&DAT_091e9fa0);
    FUN_03f5c2a4(&DAT_091908a8);
    DAT_09516d14 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091908a8);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar1 + 0x10) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
  plVar5 = (long *)(lVar1 + 0x18);
  *plVar5 = param_2;
  thunk_FUN_03f5d7b8(plVar5,param_2);
  plVar4 = (long *)(param_1 + 0x90);
  if (*plVar4 != 0) {
    DG_Tweening_TweenExtensions__Kill(*plVar4,0,0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  AnhPD_FoodOrder_FTimer__ChangeEmoji(param_1,3);
  if (0.0 < *(float *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    uVar2 = thunk_FUN_03f9944c(DAT_09175e18);
    FUN_06dfb188(uVar2,lVar1,DAT_091e9f98,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09175e68);
    FUN_06dfc2b4(uVar3,param_1,DAT_091cc128,0);
    uVar7 = *(undefined4 *)(param_1 + 0x44);
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = DG_Tweening_DOTween__To(0x3f800000,uVar7,uVar2,uVar3,0);
    uVar2 = FUN_04d95e8c(uVar2,6,DAT_091dbe80);
    uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc008);
    uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar3,lVar1,DAT_091e9fa0,0);
    lVar1 = FUN_04d956e8(uVar2,uVar3,DAT_091dbd30);
    *plVar4 = lVar1;
    thunk_FUN_03f5d7b8(plVar4);
    return;
  }
  fVar6 = *(float *)(param_1 + 0x7c) +
          (*(float *)(param_1 + 0x78) / *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x7c));
  *(float *)(param_1 + 0x7c) = fVar6;
  AnhPD_FoodOrder_FTimer__SetRadial(1.0 - fVar6,param_1);
  lVar1 = *plVar5;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0421f390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}

