// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourney$$StartCatchUpRun
// address: 0x4355894
// body: available
// range: 0x4355894-0x4355b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4355b34 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4355b60 to 0x4356a20 CakeOrder.Home.Journey.UIHomeTabPageJourney$$ApplyDisplayedProgress (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4355b64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIHomeTabPageJourney__StartCatchUpRun(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_095177e8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e18);
    FUN_03f5c2a4(&DAT_09175e68);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b1508);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbc98);
    FUN_03f5c2a4(&DAT_091dbcf8);
    FUN_03f5c2a4(&DAT_091dbe38);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dca60);
    FUN_03f5c2a4(&DAT_091dca50);
    FUN_03f5c2a4(&DAT_091dca58);
    DAT_095177e8 = 1;
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    DG_Tweening_TweenExtensions__Kill(*(long *)(param_1 + 0x150),0,0);
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  thunk_FUN_03f5d7b8(param_1 + 0x150,0);
  lVar2 = UnityEngine_Component__get_gameObject(param_1,0);
  if (lVar2 != 0) {
    uVar3 = UnityEngine_GameObject__get_activeInHierarchy(lVar2,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x120) == 0) goto LAB_04355b64;
      if (*(int *)(*(long *)(param_1 + 0x120) + 0x18) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0xa8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
        if ((uVar3 & 1) != 0) {
          iVar1 = CakeOrder_Home_Journey_JourneyProgress__CountCompletedLevels();
          fVar8 = (float)iVar1;
          fVar9 = *(float *)(param_1 + 0x148);
          if (fVar9 < fVar8) {
            uVar6 = CakeOrder_Home_Journey_UIHomeTabPageJourney__ToDisplayLevel(fVar9);
            *(undefined4 *)(param_1 + 0x158) = uVar6;
            CakeOrder_Home_Journey_JourneyProgress__SetLastSeenCompletedLevels(iVar1);
            fVar7 = (fVar8 - fVar9) * *(float *)(param_1 + 0xf0);
            fVar9 = *(float *)(param_1 + 0xf4);
            if (fVar7 <= *(float *)(param_1 + 0xf4)) {
              fVar9 = fVar7;
            }
            uVar5 = thunk_FUN_03f9944c(DAT_09175e18);
            FUN_06dfb188(uVar5,param_1,DAT_091dca50,0);
            uVar4 = thunk_FUN_03f9944c(DAT_09175e68);
            FUN_06dfc2b4(uVar4,param_1,DAT_091dca58,0);
            if (*(int *)(DAT_09183190 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = DG_Tweening_DOTween__To(fVar8,fVar9,uVar5,uVar4,0);
            uVar5 = FUN_04d95e8c(uVar5,*(undefined4 *)(param_1 + 0xfc),DAT_091dbe80);
            uVar5 = FUN_04d95c7c(*(undefined4 *)(param_1 + 0xf8),uVar5,DAT_091dbe38);
            uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
            DG_Tweening_TweenCallback___ctor(uVar4,param_1,DAT_091dca60,0);
            uVar5 = FUN_04d956bc(uVar5,uVar4,DAT_091dbcf8);
            uVar5 = FUN_04d8dd74(uVar5,DAT_091dbc98);
            *(undefined8 *)(param_1 + 0x150) = uVar5;
            thunk_FUN_03f5d7b8(param_1 + 0x150);
            return;
          }
          CakeOrder_Home_Journey_UIHomeTabPageJourney__ApplyDisplayedProgress(fVar8,param_1,0);
          return;
        }
      }
    }
    return;
  }
LAB_04355b64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

