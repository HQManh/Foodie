// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyChapterSection$$SetUpChapter
// address: 0x435c190
// body: available
// range: 0x435c190-0x435c2e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435c2c4 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x435c2e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIJourneyChapterSection__SetUpChapter
               (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_0951780f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951780f = 1;
  }
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x70) = param_2[3];
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  thunk_FUN_03f5d7b8(param_1 + 0x58,0);
  *(bool *)(param_1 + 0x78) = 1 < *(int *)((long)param_2 + 0xc);
  uVar1 = System_String__IsNullOrEmpty(param_3,0);
  uVar3 = param_3;
  if ((uVar1 & 1) != 0) {
    uVar3 = *param_2;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x80));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0435c2e0;
    uStack_58 = param_2[1];
    local_60 = *param_2;
    uStack_48 = param_2[3];
    uStack_50 = param_2[2];
    CakeOrder_Home_Journey_UIJourneyChapterCard__SetUp
              (*(long *)(param_1 + 0x20),&local_60,param_3,param_4);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x28),0), lVar2 != 0)) {
    UnityEngine_GameObject__SetActive(lVar2,*(undefined1 *)(param_1 + 0x78),0);
    return;
  }
LAB_0435c2e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

