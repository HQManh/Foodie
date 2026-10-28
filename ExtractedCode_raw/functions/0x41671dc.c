// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewRiceCooker$$PlayDelayedSfx
// address: 0x41671dc
// body: available
// range: 0x41671dc-0x41673c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416738c to 0x4d8dc1c FUN_04d8dc1c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41673c0 to 0x41673d0 AnhPD.FoodOrder.GroupViewRiceCooker$$PlaySfx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41673c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewRiceCooker__PlayDelayedSfx
               (float param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((DAT_0951657a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbc80);
    FUN_03f5c2a4(&DAT_091dbef8);
    FUN_03f5c2a4(&DAT_091eaf70);
    FUN_03f5c2a4(&DAT_09191138);
    DAT_0951657a = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09191138);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  puVar5 = (undefined8 *)(lVar1 + 0x10);
  *puVar5 = param_3;
  thunk_FUN_03f5d7b8(puVar5,param_3);
  if (*param_4 != 0) {
    DG_Tweening_TweenExtensions__Kill(*param_4,0,0);
  }
  *param_4 = 0;
  thunk_FUN_03f5d7b8(param_4,0);
  uVar4 = *puVar5;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) != 0) {
    if (param_1 <= 0.0) {
      AnhPD_FoodOrder_GroupViewRiceCooker__PlaySfx(*puVar5);
      return;
    }
    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar4,lVar1,DAT_091eaf70,0);
    uVar4 = DG_Tweening_DOVirtual__DelayedCall(param_1,uVar4,1,0);
    uVar3 = UnityEngine_Component__get_gameObject(param_2,0);
    lVar1 = FUN_04d960c8(uVar4,uVar3,DAT_091dbef8);
    *param_4 = lVar1;
    thunk_FUN_03f5d7b8(param_4,lVar1);
    if (*(char *)(param_2 + 0x88) != '\0') {
      FUN_04d8dc1c(*param_4,DAT_091dbc80);
      return;
    }
  }
  return;
}

