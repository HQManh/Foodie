// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourney$$OnClickChapterCard
// address: 0x43580ec
// body: available
// range: 0x43580ec-0x43582df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4358274 to 0x4d448ec FUN_04d448ec (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43582d8 to 0x42d2044 CakeOrder.BaseUI.SceneMainUI$$ShowToast (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43582dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIHomeTabPageJourney__OnClickChapterCard(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_095177eb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174ac0);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d85a8);
    FUN_03f5c2a4(&DAT_091f1608);
    FUN_03f5c2a4(&DAT_09195620);
    FUN_03f5c2a4(&DAT_09224050);
    DAT_095177eb = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09195620);
  CakeOrder_Home_Journey_UIHomeTabPageJourney_<>c__DisplayClass69_0___ctor(lVar1,0);
  if (lVar1 == 0) {
LAB_043582dc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar6 = (long *)(lVar1 + 0x10);
  *plVar6 = param_2;
  thunk_FUN_03f5d7b8(plVar6,param_2);
  *(long *)(lVar1 + 0x18) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x108);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar2 & 1) != 0) {
      if (*plVar6 != 0) {
        uVar2 = CakeOrder_Home_Journey_JourneyProgress__IsMapUnlocked
                          (*(undefined8 *)(*plVar6 + 0x58));
        lVar5 = *(long *)(param_1 + 0x48);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_09182278 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = CakeOrder_Localization_CakeLocalization__Tr(DAT_09224050,0);
          if (lVar5 != 0) {
            CakeOrder_BaseUI_SceneMainUI__ShowToast(0x40000000,0,lVar5,uVar4,0);
            return;
          }
        }
        else {
          uVar3 = *(undefined8 *)(param_1 + 0x108);
          uVar4 = thunk_FUN_03f9944c(DAT_09174ac0);
          FUN_070a8c30(uVar4,lVar1,DAT_091f1608,0);
          if (lVar5 != 0) {
            FUN_04d448ec(lVar5,uVar3,uVar4,0,0,DAT_091d85a8);
            return;
          }
        }
      }
      goto LAB_043582dc;
    }
  }
  return;
}

