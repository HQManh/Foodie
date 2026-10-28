// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$ApplyCustomerScheduleAndIngredientQueue
// address: 0x43949d8
// body: available
// range: 0x43949d8-0x4394deb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4394de4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4394de8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl__ApplyCustomerScheduleAndIngredientQueue
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 local_54;
  ulong local_48;
  
  if ((DAT_09517a4e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091ac200);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_0917dc80);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f5c48);
    FUN_03f5c2a4(&DAT_091f5890);
    FUN_03f5c2a4(&DAT_091f5898);
    FUN_03f5c2a4(&DAT_09213c18);
    FUN_03f5c2a4(&DAT_09220088);
    FUN_03f5c2a4(&DAT_0921d1f0);
    DAT_09517a4e = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x30) + 0x98);
    *plVar1 = param_3;
    thunk_FUN_03f5d7b8(plVar1,param_3);
    if (*(long *)(param_1 + 0x30) != 0) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + 0xa0);
      *puVar2 = param_4;
      thunk_FUN_03f5d7b8(puVar2,param_4);
      if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
        uVar7 = 0xffffffff;
      }
      else {
        local_48 = 0;
        FUN_05c3078c(&local_48,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x18),DAT_091b6f98);
        uVar7 = (undefined4)(local_48 >> 0x20);
        if ((local_48 & 0xff) == 0) {
          uVar7 = 0xffffffff;
        }
      }
      lVar3 = FUN_03f5c394(DAT_091805f8,9);
      local_48 = CONCAT44(local_48._4_4_,uVar7);
      uVar4 = FUN_03f5c42c(DAT_09535420,&local_48);
      if (param_3 != 0) {
        local_54 = (undefined4)*(undefined8 *)(param_3 + 0x18);
        uVar5 = FUN_03f5c42c(DAT_09535420,&local_54);
        uVar4 = System_String__Format(DAT_09213c18,uVar4,uVar5,0);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) != 0) {
            *(undefined8 *)(lVar3 + 0x20) = uVar4;
            thunk_FUN_03f5d7b8();
            uVar4 = DAT_09220088;
            if (*(long *)(param_1 + 0x30) == 0) goto LAB_04394de8;
            lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
            local_48 = 0;
            if (lVar6 != 0) {
              local_48 = 0;
              FUN_05c3078c(&local_48,*(undefined4 *)(lVar6 + 0x18),DAT_091b6f98);
            }
            uVar5 = FUN_03f5c42c(DAT_0917dc80,&local_48);
            uVar4 = System_String__Format(uVar4,uVar5,0);
            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar3 + 0x28) = uVar4;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28),uVar4);
              local_54 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__CountExplicitIds(param_3);
              uVar4 = FUN_03f5c42c(DAT_09535420,&local_54);
              uVar4 = System_String__Format(DAT_0921d1f0,uVar4,0);
              if (2 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x30) = uVar4;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30),uVar4);
                if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar3 + 0x38) = DAT_091f5c48;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38));
                  uVar4 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__DescribeGraphIds(param_2);
                  if (4 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x40) = uVar4;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x40),uVar4);
                    if (5 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x48) = DAT_091f5898;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x48));
                      uVar4 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__DescribeSpawnIds
                                        (param_3);
                      if (6 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x50) = uVar4;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x50),uVar4);
                        if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                          *(undefined8 *)(lVar3 + 0x58) = DAT_091f5890;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x58));
                          uVar4 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__DescribeDatabaseIds
                                            ();
                          if (8 < *(uint *)(lVar3 + 0x18)) {
                            *(undefined8 *)(lVar3 + 0x60) = uVar4;
                            thunk_FUN_03f5d7b8();
                            uVar4 = System_String__Concat(lVar3,0);
                            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                              FUN_03f5c424(DAT_091835d0);
                            }
                            UnityEngine_Debug__Log(uVar4,0);
                            if ((*(long *)(param_3 + 0x18) != 0) && (*(long *)(param_1 + 0x38) != 0)
                               ) {
                              lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
                              if (lVar3 == 0) goto LAB_04394de8;
                              lVar6 = *(long *)(lVar3 + 0x30);
                              *(int *)(lVar3 + 0x10) = (int)*(long *)(param_3 + 0x18);
                              if (lVar6 != 0) {
                                (**(code **)(lVar6 + 0x18))
                                          (*(undefined8 *)(lVar6 + 0x40),
                                           *(undefined8 *)(lVar6 + 0x28));
                              }
                            }
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
          FUN_03f5c558();
        }
      }
    }
  }
LAB_04394de8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

