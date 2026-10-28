// rea decompile_all
// name: IapAdsSystem.InAppManager$$SetUp
// address: 0x73160cc
// body: available
// range: 0x73160cc-0x731685b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7316854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7316858 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_InAppManager__SetUp(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined4 local_64;
  
  if ((DAT_09520552 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091744a0);
    FUN_03f5c2a4(&DAT_091748a0);
    FUN_03f5c2a4(&DAT_091748d8);
    FUN_03f5c2a4(&DAT_09174880);
    FUN_03f5c2a4(&DAT_09174698);
    FUN_03f5c2a4(&DAT_091748e8);
    FUN_03f5c2a4(&DAT_09174970);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09182430);
    FUN_03f5c2a4(&DAT_0919feb8);
    FUN_03f5c2a4(&DAT_0919fe90);
    FUN_03f5c2a4(&DAT_09176c28);
    FUN_03f5c2a4(&DAT_09185e50);
    FUN_03f5c2a4(&DAT_091cfc68);
    FUN_03f5c2a4(&DAT_091cfc70);
    FUN_03f5c2a4(&DAT_091cfc78);
    FUN_03f5c2a4(&DAT_091cfc80);
    FUN_03f5c2a4(&DAT_091cfc88);
    FUN_03f5c2a4(&DAT_091cfc90);
    FUN_03f5c2a4(&DAT_091cfc98);
    FUN_03f5c2a4(&DAT_091cfca0);
    FUN_03f5c2a4(&DAT_0918b2d8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09202150);
    FUN_03f5c2a4(&DAT_092037f0);
    FUN_03f5c2a4(&DAT_091fbca0);
    FUN_03f5c2a4(&DAT_091f70a0);
    DAT_09520552 = 1;
  }
  local_64 = 0;
  puVar11 = (undefined8 *)(param_1 + 0x20);
  *puVar11 = param_2;
  thunk_FUN_03f5d7b8(puVar11,param_2);
  plVar12 = (long *)*puVar11;
  if (plVar12 != (long *)0x0) {
    lVar7 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185e50) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_073162d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185e50,0);
LAB_073162d4:
    lVar7 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    lVar4 = thunk_FUN_03f9944c(DAT_09182430);
    UnityEngine_Purchasing_CatalogProvider___ctor(lVar4,0);
    plVar12 = (long *)(param_1 + 0x38);
    *plVar12 = lVar4;
    thunk_FUN_03f5d7b8(plVar12,lVar4);
    lVar4 = thunk_FUN_03f9944c(DAT_09176c28);
    FUN_06fd76bc(lVar4,DAT_0919fe90);
    plVar13 = (long *)(param_1 + 0x48);
    *plVar13 = lVar4;
    thunk_FUN_03f5d7b8(plVar13,lVar4);
    if (lVar7 != 0) {
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar9 = 0;
        uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar9) {
LAB_07316858:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar15 = (long *)*puVar11;
          if (plVar15 == (long *)0x0) goto LAB_07316854;
          lVar4 = *plVar15;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          uVar14 = *(undefined8 *)(lVar7 + uVar9 * 8 + 0x20);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185e50) {
                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_073163bc;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar15,DAT_09185e50,1);
LAB_073163bc:
          uVar2 = (*(code *)*puVar3)(plVar15,uVar14,puVar3[1]);
          uVar8 = IapAdsSystem_IapAdsGlobalConfig__get_IsFakeIAPNonConsumable();
          plVar15 = (long *)*puVar11;
          if (uVar2 != 2) {
            uVar2 = (uint)(uVar2 == 1);
          }
          uVar1 = 0;
          if ((uVar8 & 1) == 0) {
            uVar1 = uVar2;
          }
          if (plVar15 == (long *)0x0) goto LAB_07316854;
          lVar4 = *plVar15;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185e50) {
                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                goto LAB_07316444;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar15,DAT_09185e50,4);
LAB_07316444:
          uVar5 = (*(code *)*puVar3)(plVar15,uVar14,puVar3[1]);
          lVar4 = thunk_FUN_03f9944c(DAT_0918b2d8);
          UnityEngine_Purchasing_StoreSpecificIds___ctor(lVar4,0);
          lVar6 = FUN_03f5c394(DAT_091805f8,2);
          if (lVar6 == 0) goto LAB_07316854;
          if (*(int *)(lVar6 + 0x18) == 0) goto LAB_07316858;
          *(undefined8 *)(lVar6 + 0x20) = DAT_092037f0;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x20));
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_07316858;
          *(undefined8 *)(lVar6 + 0x28) = DAT_091fbca0;
          thunk_FUN_03f5d7b8();
          if (lVar4 == 0) goto LAB_07316854;
          UnityEngine_Purchasing_StoreSpecificIds__Add(lVar4,uVar5,lVar6,0);
          if (*plVar12 == 0) goto LAB_07316854;
          UnityEngine_Purchasing_CatalogProvider__AddProduct(*plVar12,uVar14,uVar1,lVar4,0);
          plVar15 = (long *)*puVar11;
          if (plVar15 == (long *)0x0) goto LAB_07316854;
          lVar4 = *plVar15;
          lVar6 = *plVar13;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185e50) {
                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_07316570;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar15,DAT_09185e50,3);
LAB_07316570:
          local_64 = (*(code *)*puVar3)(plVar15,uVar14,puVar3[1]);
          uVar5 = System_Single__ToString(&local_64,DAT_09202150,0);
          uVar5 = System_String__Concat(uVar5,DAT_091f70a0,0);
          if (lVar6 == 0) goto LAB_07316854;
          FUN_06fd8454(lVar6,uVar14,uVar5,DAT_0919feb8);
          uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      lVar7 = UnityEngine_Purchasing_UnityIAPServices__StoreController(0,0);
      plVar12 = (long *)(param_1 + 0x30);
      *plVar12 = lVar7;
      thunk_FUN_03f5d7b8(plVar12,lVar7);
      lVar7 = *plVar12;
      uVar14 = thunk_FUN_03f9944c(DAT_09174970);
      FUN_070a8c30(uVar14,param_1,DAT_091cfca0,0);
      if (lVar7 != 0) {
        UnityEngine_Purchasing_StoreController__add_OnStoreDisconnected(lVar7,uVar14,0);
        lVar7 = *(long *)(param_1 + 0x30);
        uVar14 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar14,param_1,DAT_091cfc98,0);
        if (lVar7 != 0) {
          UnityEngine_Purchasing_StoreController__add_OnStoreConnected(lVar7,uVar14,0);
          lVar7 = *(long *)(param_1 + 0x30);
          uVar14 = thunk_FUN_03f9944c(DAT_091744a0);
          FUN_070a8c30(uVar14,param_1,DAT_091cfc70,0);
          if (lVar7 != 0) {
            UnityEngine_Purchasing_StoreController__add_OnProductsFetched(lVar7,uVar14,0);
            lVar7 = *(long *)(param_1 + 0x30);
            uVar14 = thunk_FUN_03f9944c(DAT_091748d8);
            FUN_070a8c30(uVar14,param_1,DAT_091cfc68,0);
            if (lVar7 != 0) {
              UnityEngine_Purchasing_StoreController__add_OnProductsFetchFailed(lVar7,uVar14,0);
              lVar7 = *(long *)(param_1 + 0x30);
              uVar14 = thunk_FUN_03f9944c(DAT_091748e8);
              FUN_070a8c30(uVar14,param_1,DAT_091cfc88,0);
              if (lVar7 != 0) {
                UnityEngine_Purchasing_StoreController__add_OnPurchasesFetchFailed(lVar7,uVar14,0);
                lVar7 = *(long *)(param_1 + 0x30);
                uVar14 = thunk_FUN_03f9944c(DAT_09174880);
                FUN_070a8c30(uVar14,param_1,DAT_091cfc90,0);
                if (lVar7 != 0) {
                  UnityEngine_Purchasing_StoreController__add_OnPurchasesFetched(lVar7,uVar14,0);
                  lVar7 = *(long *)(param_1 + 0x30);
                  uVar14 = thunk_FUN_03f9944c(DAT_091748a0);
                  FUN_070a8c30(uVar14,param_1,DAT_091cfc80,0);
                  if (lVar7 != 0) {
                    UnityEngine_Purchasing_StoreController__add_OnPurchasePending(lVar7,uVar14,0);
                    lVar7 = *(long *)(param_1 + 0x30);
                    uVar14 = thunk_FUN_03f9944c(DAT_09174698);
                    FUN_070a8c30(uVar14,param_1,DAT_091cfc78,0);
                    if (lVar7 != 0) {
                      UnityEngine_Purchasing_StoreController__add_OnPurchaseFailed(lVar7,uVar14,0);
                      if (*plVar12 != 0) {
                        UnityEngine_Purchasing_StoreController__Connect(*plVar12,0);
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
    }
  }
LAB_07316854:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

