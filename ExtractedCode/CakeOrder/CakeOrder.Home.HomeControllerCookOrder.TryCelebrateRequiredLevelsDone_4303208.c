// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder$$TryCelebrateRequiredLevelsDone
// address: 0x4303208
// body: available
// range: 0x4303208-0x4303407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4303404 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder__TryCelebrateRequiredLevelsDone
               (undefined8 param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_34 [4];
  
  if ((DAT_09517562 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_092189b8);
    DAT_09517562 = 1;
  }
  local_34[0] = 0;
  lVar2 = CakeOrderSubsystem_Base_CakeOrderSessionState__get_Instance(0);
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x38);
    if (((lVar2 != 0) && (*(char *)(lVar2 + 0x1c) == '\0')) && (*(int *)(lVar2 + 0x20) == 2)) {
      lVar3 = *(long *)(DAT_091b4b60 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_04303404;
      lVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO
                        (**(long **)(lVar3 + 0xb8),*(undefined8 *)(lVar2 + 0x10),0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Equality(lVar3,0,0);
      if ((uVar4 & 1) == 0) {
        if (lVar3 == 0) goto LAB_04303404;
        if ((0 < *(int *)(lVar3 + 0x50)) && (*(int *)(lVar2 + 0x18) + 1 == *(int *)(lVar3 + 0x50)))
        {
          uVar5 = System_String__Concat(DAT_092189b8,*(undefined8 *)(lVar2 + 0x10),0);
          iVar1 = UnityEngine_PlayerPrefs__GetInt(uVar5,0,0);
          if (iVar1 == 0) {
            lVar2 = CakeOrder_Home_HomeControllerCookOrder__GetTabPageMain(param_1);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar4 = UnityEngine_Object__op_Equality(lVar2,0,0);
            if ((uVar4 & 1) == 0) {
              if (lVar2 == 0) goto LAB_04303404;
              uVar6 = *(undefined8 *)(lVar2 + 200);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = UnityEngine_Object__op_Equality(uVar6,0,0);
              if ((uVar4 & 1) == 0) {
                UnityEngine_PlayerPrefs__SetInt(uVar5,1,0);
                UnityEngine_PlayerPrefs__Save(0);
                if (*(long *)(lVar2 + 200) == 0) goto LAB_04303404;
                local_34[0] = CakeOrder_Home_HomeRestaurantsBuildingControl__PlayCelebrationOnSelectedWhenReady
                                        (*(long *)(lVar2 + 200),param_2 & 1,0);
                Cysharp_Threading_Tasks_UniTaskVoid__Forget(local_34,0);
              }
            }
          }
        }
      }
    }
    return;
  }
LAB_04303404:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

