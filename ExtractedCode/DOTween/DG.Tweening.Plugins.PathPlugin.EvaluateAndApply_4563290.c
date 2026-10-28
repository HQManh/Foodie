// rea decompile_all
// name: DG.Tweening.Plugins.PathPlugin$$EvaluateAndApply
// address: 0x4563290
// body: available
// range: 0x4563290-0x456359b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4563594 to 0x4d8d618 FUN_04d8d618 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4563598 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_PathPlugin__EvaluateAndApply
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,int *param_4,long param_5,
               undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,long param_10,
               byte param_11,int param_12,undefined4 param_13)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_e0 [112];
  
  if ((DAT_09518840 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dbc68);
    DAT_09518840 = 1;
  }
  if (param_5 == 0) goto LAB_04563598;
  if (((*(int *)(param_5 + 0xa8) == 2) && ((*(byte *)(param_4 + 4) & 1) == 0)) &&
     (0 < *(int *)(param_5 + 0x10c) - (int)*(char *)(param_5 + 0x111))) {
    if (param_10 == 0) goto LAB_04563598;
    param_10 = DG_Tweening_Plugins_Core_PathCore_Path__CloneIncremental(param_10);
  }
  uVar9 = *(undefined4 *)(param_5 + 0xc0);
  uVar6 = DG_Tweening_Core_Easing_EaseManager__Evaluate
                    (param_1,param_2,uVar9,*(undefined4 *)(param_5 + 0xc4),
                     *(undefined4 *)(param_5 + 0xb4),*(undefined8 *)(param_5 + 0xb8),0);
  if (param_10 == 0) goto LAB_04563598;
  uVar7 = DG_Tweening_Plugins_Core_PathCore_Path__ConvertToConstantPathPerc(param_10);
  uVar8 = DG_Tweening_Plugins_Core_PathCore_Path__GetPoint(param_10,0);
  *(undefined4 *)(param_10 + 0xf0) = uVar8;
  *(undefined4 *)(param_10 + 0xf4) = param_2;
  *(undefined4 *)(param_10 + 0xf8) = uVar9;
  if (param_8 == 0) goto LAB_04563598;
  (**(code **)(param_8 + 0x18))(*(undefined8 *)(param_8 + 0x40),*(undefined8 *)(param_8 + 0x28));
  if ((*param_4 != 0) && (param_4[1] != 0)) {
    pvVar3 = memcpy(auStack_e0,param_4,0x70);
    DG_Tweening_Plugins_PathPlugin__SetOrientation
              (uVar7,uVar8,param_2,uVar9,pvVar3,auStack_e0,param_5,param_10,param_13);
  }
  iVar2 = DG_Tweening_Plugins_Core_PathCore_Path__GetWaypointIndexFromPerc
                    (uVar6,param_10,(*(char *)(param_5 + 0x2c) == '\0' ^ param_11) & 1);
  iVar5 = *(int *)(param_5 + 0x11c);
  if ((iVar2 == iVar5) || (*(int *)(param_5 + 0x11c) = iVar2, *(long *)(param_5 + 0x90) == 0)) {
    return;
  }
  cVar1 = *(char *)(param_5 + 0x2c);
  uVar4 = DG_Tweening_Tween__get_hasLoops(param_5,0);
  if (((uVar4 & 1) == 0) || (*(int *)(param_5 + 0xa8) != 1)) {
    if (cVar1 == '\0') goto LAB_04563448;
LAB_045634ac:
    while (iVar5 = iVar5 + -1, iVar2 + -1 < iVar5) {
      if (iVar2 != iVar5) {
        FUN_04d8d618(*(undefined8 *)(param_5 + 0x90),param_5,iVar5,DAT_091dbc68);
      }
    }
  }
  else {
    if (*(char *)(param_5 + 0x2c) == '\0') {
      if ((*(uint *)(param_5 + 0x10c) & 1) == 0) goto LAB_04563448;
      goto LAB_045634ac;
    }
    if ((*(uint *)(param_5 + 0x10c) & 1) == 0) goto LAB_045634ac;
LAB_04563448:
    iVar5 = iVar5 + 1;
    if (iVar5 < iVar2) {
      do {
        FUN_04d8d618(*(undefined8 *)(param_5 + 0x90),param_5,iVar5,DAT_091dbc68);
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
  }
  if ((0 < param_12) && (*(char *)(param_5 + 0x111) == '\0')) {
    if (((*(int *)(param_5 + 0xa8) == 1) && ((*(byte *)(param_5 + 0x10c) & 1) == 0)) ||
       (*(char *)(param_5 + 0x2c) != '\0')) {
      iVar5 = 0;
    }
    else {
      if (*(long *)(param_10 + 0x18) == 0) {
LAB_04563598:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar5 = *(int *)(*(long *)(param_10 + 0x18) + 0x18) + -1;
    }
    if (iVar5 != iVar2) {
      FUN_04d8d618(*(undefined8 *)(param_5 + 0x90),param_5,iVar5,DAT_091dbc68);
    }
  }
  FUN_04d8d618(*(undefined8 *)(param_5 + 0x90),param_5,iVar2,DAT_091dbc68);
  return;
}

