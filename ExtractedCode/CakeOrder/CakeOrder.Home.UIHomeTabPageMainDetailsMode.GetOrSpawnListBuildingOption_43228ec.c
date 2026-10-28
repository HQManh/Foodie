// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainDetailsMode$$GetOrSpawnListBuildingOption
// address: 0x43228ec
// body: available
// range: 0x43228ec-0x4322ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4322cc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4322cc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4322cc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_Home_UIHomeTabPageMainDetailsMode__GetOrSpawnListBuildingOption
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  long local_38;
  
  if ((DAT_09517662 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09174c50);
    FUN_03f5c2a4(&DAT_091a00f8);
    FUN_03f5c2a4(&DAT_091a0100);
    FUN_03f5c2a4(&DAT_091a4b38);
    FUN_03f5c2a4(&DAT_091a4b40);
    FUN_03f5c2a4(&DAT_091a4b48);
    FUN_03f5c2a4(&DAT_091b10e8);
    FUN_03f5c2a4(&DAT_091b14e0);
    FUN_03f5c2a4(&DAT_091b10e0);
    FUN_03f5c2a4(&DAT_0917ceb8);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091d4d28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba270);
    FUN_03f5c2a4(&DAT_091dcb30);
    FUN_03f5c2a4(&DAT_091dcb38);
    DAT_09517662 = 1;
  }
  local_38 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    uVar2 = FUN_06fd9fbc(*(long *)(param_1 + 0x98),param_2,&local_38,DAT_091a0100);
    if ((uVar2 & 1) != 0) {
      return local_38;
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x68) + 0x20), lVar3 != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x90);
      uVar4 = UnityEngine_Component__get_transform(lVar3,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      lVar3 = FUN_04c35338(uVar9,uVar4,DAT_091d4d28);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      lVar6 = *(long *)(DAT_091b4a58 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c(lVar6);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if ((((*(long *)(param_1 + 0x48) != 0) &&
           (lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar7 != 0)) &&
          (lVar7 = *(long *)(lVar7 + 0x30), lVar7 != 0)) &&
         ((lVar7 = *(long *)(lVar7 + 0x30), lVar7 != 0 && (lVar3 != 0)))) {
        CakeOrder_UI_UIListUpgradeBuildingOptionCards__SetUp
                  (lVar3,uVar4,**(undefined8 **)(lVar6 + 0xb8),param_2,*(undefined8 *)(lVar7 + 0x60)
                   ,0);
        uVar4 = thunk_FUN_03f9944c(DAT_09174980);
        FUN_070a8c30(uVar4,param_1,DAT_091dcb38,0);
        CakeOrder_UI_UIListUpgradeBuildingOptionCards__add_onUpgradePresentationCompleted
                  (lVar3,uVar4,0);
        uVar4 = thunk_FUN_03f9944c(DAT_09174c50);
        FUN_071cd244(uVar4,param_1,DAT_091dcb30,0);
        CakeOrder_UI_UIListUpgradeBuildingOptionCards__add_onToolPartUpgradePresented(lVar3,uVar4,0)
        ;
        if (*(long *)(param_1 + 0x98) != 0) {
          FUN_06fd8454(*(long *)(param_1 + 0x98),param_2,lVar3,DAT_091a00f8);
          lVar6 = CakeOrder_UI_UIListUpgradeBuildingOptionCards__GetUpgradableItems(lVar3,0);
          lVar7 = thunk_FUN_03f9944c(DAT_0917ceb8);
          FUN_057e0400(lVar7,DAT_091b10e0);
          if (lVar6 != 0) {
            FUN_057e185c(&local_58,lVar6,DAT_091b14e0);
            while( true ) {
              do {
                uVar2 = FUN_071bd28c(&local_58,DAT_091a4b40);
                lVar6 = DAT_091b10e8;
                if ((uVar2 & 1) == 0) {
                  FUN_071bd288(&local_58,DAT_091a4b38);
                  *(long *)(param_1 + 0xd8) = lVar7;
                  thunk_FUN_03f5d7b8((long *)(param_1 + 0xd8),lVar7);
                  return lVar3;
                }
                if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar5 = *(long *)(local_48 + 0xb0);
              } while (lVar5 == 0);
              if (lVar7 == 0) break;
              lVar8 = *(long *)(lVar7 + 0x10);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar8 == 0) break;
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar7,lVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

