// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourney$$BuildMilestonesFor
// address: 0x4356150
// body: available
// range: 0x4356150-0x435634f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4356340 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4356344 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4356348 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435634c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIHomeTabPageJourney__BuildMilestonesFor
               (long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_095177de & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174ac8);
    FUN_03f5c2a4(&DAT_091a5558);
    FUN_03f5c2a4(&DAT_091a5560);
    FUN_03f5c2a4(&DAT_091a5568);
    FUN_03f5c2a4(&DAT_091b3170);
    FUN_03f5c2a4(&DAT_091d4b40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dca70);
    DAT_095177de = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_98,*(long *)(param_1 + 0x128),DAT_091b3170);
  local_70 = local_88;
  uStack_78 = puStack_90;
  local_80 = local_98;
  local_98 = 0;
  puStack_90 = &local_80;
  while( true ) {
    uVar2 = FUN_071bd28c(&local_80,DAT_091a5560);
    lVar1 = local_70;
    if ((uVar2 & 1) == 0) {
      FUN_071bd288(&local_80,DAT_091a5558);
      return;
    }
    if (local_70 == 0) break;
    if (((0 < *(int *)(param_3 + 0xc)) && (*(int *)(param_3 + 0x10) <= *(int *)(local_70 + 0x10)))
       && (*(int *)(local_70 + 0x10) <= *(int *)(param_3 + 0x14))) {
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = FUN_04c350c8(uVar4,DAT_091d4b40);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_Home_Journey_UIJourneyMilestoneItem__SetUp(lVar3,lVar1,0);
      uVar4 = thunk_FUN_03f9944c(DAT_09174ac8);
      FUN_070a8c30(uVar4,param_1,DAT_091dca70,0);
      CakeOrder_Home_Journey_UIJourneyMilestoneItem__add_onClickClaim(lVar3,uVar4,0);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_Home_Journey_UIJourneyChapterSection__AddMilestone(param_2,lVar3,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

