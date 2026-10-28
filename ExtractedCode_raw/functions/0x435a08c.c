// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyRestaurantCard$$SetUp
// address: 0x435a08c
// body: available
// range: 0x435a08c-0x435a283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435a27c to 0x43601d4 CakeOrder.Home.Journey.UIJourneyRestaurantCard$$ApplyPreview (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x435a280 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIJourneyRestaurantCard__SetUp
               (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_0951783f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091fecd8);
    FUN_03f5c2a4(&DAT_092195f0);
    FUN_03f5c2a4(&DAT_09211650);
    FUN_03f5c2a4(&DAT_091fadf8);
    DAT_0951783f = 1;
  }
  uVar6 = *param_2;
  uVar5 = param_2[3];
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0xd8) = param_2[1];
  *(undefined8 *)(param_1 + 0xd0) = uVar6;
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  thunk_FUN_03f5d7b8(param_1 + 0xd0,0);
  lVar1 = DAT_09188ad0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(byte *)(param_1 + 0xf0) = param_5 & 1;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar2 & 1) != 0) {
    plVar4 = *(long **)(param_1 + 0x28);
    if ((param_5 & 1) == 0) {
      uVar2 = System_String__IsNullOrEmpty(param_3,0);
      if ((uVar2 & 1) != 0) goto LAB_0435a17c;
    }
    else {
      param_2 = &DAT_091fadf8;
LAB_0435a17c:
      param_3 = *param_2;
    }
    if (plVar4 == (long *)0x0) goto LAB_0435a280;
    (**(code **)(*plVar4 + 0x558))(plVar4,param_3,*(undefined8 *)(*plVar4 + 0x560));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_0435a280;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x58),param_5 & 1,0);
  }
  if ((param_5 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar2 & 1) != 0) {
      plVar4 = *(long **)(param_1 + 0x60);
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = CakeOrder_Localization_CakeLocalization__Get(DAT_09211650,DAT_092195f0,DAT_091fecd8,0)
      ;
      if (plVar4 == (long *)0x0) {
LAB_0435a280:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
    }
  }
  CakeOrder_Home_Journey_UIJourneyRestaurantCard__ApplyPreview(param_1,param_4);
  return;
}

