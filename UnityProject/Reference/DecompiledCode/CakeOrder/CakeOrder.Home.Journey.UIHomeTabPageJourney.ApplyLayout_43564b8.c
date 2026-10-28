// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourney$$ApplyLayout
// address: 0x43564b8
// body: available
// range: 0x43564b8-0x4356697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435668c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4356690 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4356694 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIHomeTabPageJourney__ApplyLayout(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  long local_40;
  
  if ((DAT_095177e2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4b50);
    FUN_03f5c2a4(&DAT_091a4b58);
    FUN_03f5c2a4(&DAT_091a4b60);
    FUN_03f5c2a4(&DAT_091b1500);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177e2 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    fVar5 = *(float *)(param_1 + 0xc4);
    FUN_057e185c(&local_68,*(long *)(param_1 + 0x120),DAT_091b1500);
    puStack_48 = puStack_60;
    local_50 = local_68;
    local_40 = local_58;
    local_68 = 0;
    puStack_60 = &local_50;
    while (uVar1 = FUN_071bd28c(&local_50,DAT_091a4b58), lVar2 = local_40, (uVar1 & 1) != 0) {
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar4 = (float)CakeOrder_Home_Journey_UIJourneyChapterSection__Layout
                               (*(undefined4 *)(param_1 + 0xc0),local_40,0);
      lVar2 = CakeOrder_Home_Journey_UIJourneyChapterSection__get_RectTransform(lVar2,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_RectTransform__set_anchorMin(0,0x3f800000,lVar2,0);
      UnityEngine_RectTransform__set_anchorMax(0x3f800000,0x3f800000,lVar2,0);
      UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f800000,lVar2,0);
      UnityEngine_RectTransform__set_sizeDelta(0,fVar4,lVar2,0);
      UnityEngine_RectTransform__set_anchoredPosition(0,-fVar5,lVar2,0);
      fVar5 = fVar5 + fVar4;
    }
    FUN_071bd288(&local_50,DAT_091a4b50);
    lVar2 = *(long *)(param_1 + 0xa8);
    if (lVar2 != 0) {
      uVar3 = UnityEngine_RectTransform__get_sizeDelta(lVar2,0);
      UnityEngine_RectTransform__set_sizeDelta(uVar3,fVar5 + *(float *)(param_1 + 200),lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

