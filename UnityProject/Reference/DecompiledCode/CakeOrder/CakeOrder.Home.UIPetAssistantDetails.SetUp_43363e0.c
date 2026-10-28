// rea decompile_all
// name: CakeOrder.Home.UIPetAssistantDetails$$SetUp
// address: 0x43363e0
// body: available
// range: 0x43363e0-0x4336717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4336710 to 0x4336718 CakeOrder.Home.UIPetAssistantDetails$$CleanPet (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4336714 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIPetAssistantDetails__SetUp(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if ((DAT_095176f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09174e08);
    FUN_03f5c2a4(&DAT_09174df8);
    FUN_03f5c2a4(&DAT_09174f60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_0918ea68);
    FUN_03f5c2a4(&DAT_091dce70);
    FUN_03f5c2a4(&DAT_091dce78);
    FUN_03f5c2a4(&DAT_091dce80);
    FUN_03f5c2a4(&DAT_091dce88);
    FUN_03f5c2a4(&DAT_091dce90);
    FUN_03f5c2a4(&DAT_091dce98);
    FUN_03f5c2a4(&DAT_091dcea0);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_095176f8 = 1;
  }
  *(undefined8 *)(param_1 + 0x58) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),param_2);
  plVar3 = (long *)(param_1 + 0x60);
  *plVar3 = param_3;
  thunk_FUN_03f5d7b8(plVar3,param_3);
  lVar2 = *plVar3;
  uVar1 = thunk_FUN_03f9944c(DAT_09174980);
  FUN_070a8c30(uVar1,param_1,DAT_091dce98,0);
  if (lVar2 != 0) {
    CakeOrder_SaveProfile_PetAssistantDataAccess__add_onOwnPet(lVar2,uVar1,0);
    lVar2 = *(long *)(param_1 + 0x60);
    uVar1 = thunk_FUN_03f9944c(DAT_09174f60);
    FUN_071cfb6c(uVar1,param_1,DAT_091dcea0,0);
    if (lVar2 != 0) {
      CakeOrder_SaveProfile_PetAssistantDataAccess__add_onUpgradePetSkill(lVar2,uVar1,0);
      lVar2 = *(long *)(param_1 + 0x60);
      uVar1 = thunk_FUN_03f9944c(DAT_09174e08);
      FUN_071cd244(uVar1,param_1,DAT_091dce70,0);
      if (lVar2 != 0) {
        CakeOrder_SaveProfile_PetAssistantDataAccess__add_onAssignPet(lVar2,uVar1,0);
        lVar2 = *(long *)(param_1 + 0x60);
        uVar1 = thunk_FUN_03f9944c(DAT_09174df8);
        FUN_071ccc78(uVar1,param_1,DAT_091dce78,0);
        if (lVar2 != 0) {
          CakeOrder_SaveProfile_PetAssistantDataAccess__add_onChangeRemainingUses(lVar2,uVar1,0);
          lVar2 = *(long *)(DAT_091b4b48 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03f95a6c();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03f95a6c();
          }
          lVar2 = **(long **)(lVar2 + 0xb8);
          uVar1 = thunk_FUN_03f9944c(DAT_0918ea68);
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess_OnItemChangedDelegate___ctor
                    (uVar1,param_1,DAT_091dce90,0);
          if (lVar2 != 0) {
            CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__add_onItemChanged(lVar2,uVar1,0);
            if (*(long *)(param_1 + 0xe8) != 0) {
              lVar2 = *(long *)(*(long *)(param_1 + 0xe8) + 0x100);
              uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
              UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dce88,0);
              if (lVar2 != 0) {
                UnityEngine_Events_UnityEvent__AddListener(lVar2,uVar1,0);
                if (*(long *)(param_1 + 0xf8) != 0) {
                  lVar2 = *(long *)(*(long *)(param_1 + 0xf8) + 0x100);
                  uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                  UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dce80,0);
                  if (lVar2 != 0) {
                    UnityEngine_Events_UnityEvent__AddListener(lVar2,uVar1,0);
                    CakeOrder_Home_UIPetAssistantDetails__CleanPet(param_1);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

