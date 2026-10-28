// rea decompile_all
// name: AnhPD.FoodOrder.TutorialHandleTap$$Show
// address: 0x411fcac
// body: available
// range: 0x411fcac-0x411fe53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411fe4c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x411fe50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialHandleTap__Show
               (undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  if ((DAT_09516286 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b19b8);
    FUN_03f5c2a4(&DAT_091b19a0);
    FUN_03f5c2a4(&DAT_091b10a8);
    FUN_03f5c2a4(&DAT_091b10b0);
    FUN_03f5c2a4(&DAT_0917d050);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516286 = 1;
  }
  lVar2 = 0;
  if (param_4 != 0) {
    if (*(int *)(param_4 + 0x18) < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_057e0998(param_4,0,DAT_091b10b0);
    }
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917d050);
  FUN_058abd7c(lVar3,DAT_091b19a0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(lVar2,0);
  lVar5 = lVar2;
  if ((uVar4 & 1) == 0) {
    lVar5 = UnityEngine_Component__get_transform(param_3,0);
  }
  if ((lVar5 != 0) &&
     (uVar7 = UnityEngine_Transform__get_position(lVar5,0), lVar5 = DAT_091b19b8, lVar3 != 0)) {
    lVar6 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 8;
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar6 + 0x20) = uVar7;
        *(undefined4 *)(lVar6 + 0x24) = param_2;
      }
      else {
        FUN_058ac614(lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      if (param_3 != (long *)0x0) {
        (**(code **)(*param_3 + 0x178))(param_3,lVar3,*(undefined8 *)(*param_3 + 0x180));
        param_3[7] = lVar2;
        thunk_FUN_03f5d7b8(param_3 + 7,lVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

