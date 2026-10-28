// rea decompile_all
// name: CakeOrder.Boot.BootGameCookOrder$$LastSetupBeforePlay
// address: 0x42feb24
// body: available
// range: 0x42feb24-0x42fee0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42fedac to 0x7da3494 Cysharp.Threading.Tasks.UniTaskExtensions$$Forget (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42fee04 to 0x42616e0 CakeOrder.CakeOrderSceneLoader$$LoadHome (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42fee08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Boot_BootGameCookOrder__LastSetupBeforePlay(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_0951753a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181e90);
    FUN_03f5c2a4(&DAT_091923f0);
    FUN_03f5c2a4(&DAT_091b4948);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b80);
    FUN_03f5c2a4(&DAT_091b4c48);
    DAT_0951753a = 1;
  }
  lVar1 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    uVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId(**(long **)(lVar1 + 0xb8),0,0);
    lVar1 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c(lVar1);
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    if (**(long **)(lVar1 + 0xb8) != 0) {
      CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__ValidateAllLevelUnlockStatus
                (**(long **)(lVar1 + 0xb8),0);
      lVar1 = *(long *)(DAT_091b4a58 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03f95a6c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03f95a6c();
      }
      if (**(long **)(lVar1 + 0xb8) != 0) {
        uVar3 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetHighestMapAndLevelIndexPlayable
                          (**(long **)(lVar1 + 0xb8),0);
        lVar1 = *(long *)(DAT_091b4948 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03f95a6c(lVar1);
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03f95a6c();
        }
        if ((**(long **)(lVar1 + 0xb8) != 0) &&
           (lVar1 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x30), lVar1 != 0)) {
          uVar4 = CakeOrder_BaseUI_UIFlowPolicy__SkipHomeAtBoot
                            (**(undefined1 **)(DAT_09181e90 + 0xb8),uVar3 & 0xffffffff,uVar3 >> 0x20
                             ,*(undefined4 *)(lVar1 + 0x10),0);
          if ((uVar4 & 1) == 0) {
            lVar1 = *(long *)(DAT_091b4b80 + 0x20);
            if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_03f95a6c();
            }
            lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_03f95a6c();
            }
            if (**(long **)(lVar1 + 0xb8) != 0) {
              CakeOrder_CakeOrderSceneLoader__LoadHome(**(long **)(lVar1 + 0xb8),0);
              return;
            }
          }
          else {
            lVar1 = *(long *)(DAT_091b4c48 + 0x20);
            if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_03f95a6c();
            }
            lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_03f95a6c();
            }
            lVar5 = **(long **)(lVar1 + 0xb8);
            lVar1 = thunk_FUN_03f9944c(DAT_091923f0);
            CakeOrder_InGame_LevelPlayLoadAndSetupControl_MainLevelPlayConfig___ctor(lVar1,0);
            if (lVar1 != 0) {
              *(undefined8 *)(lVar1 + 0x18) = uVar2;
              *(undefined4 *)(lVar1 + 0x10) = 0;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),uVar2);
              *(int *)(lVar1 + 0x20) = (int)(uVar3 >> 0x20);
              if (lVar5 != 0) {
                auVar6 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__PlayLevel(lVar5,lVar1,0);
                Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar6._0_8_,auVar6._8_8_,0);
                return;
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

