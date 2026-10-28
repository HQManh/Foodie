// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess$$ValidateAllLevelUnlockStatus
// address: 0x4282cd0
// body: available
// range: 0x4282cd0-0x428315f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428314c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4283150 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428315c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__ValidateAllLevelUnlockStatus
               (long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x1;
  long lVar7;
  int iVar8;
  bool bVar9;
  int local_64;
  
  if ((DAT_0951710b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091b9d50);
    FUN_03f5c2a4(&DAT_091b9d80);
    FUN_03f5c2a4(&DAT_092124d0);
    FUN_03f5c2a4(&DAT_092124c8);
    FUN_03f5c2a4(&DAT_092124c0);
    DAT_0951710b = 1;
  }
  iVar8 = 0;
  bVar1 = false;
  bVar9 = true;
  while( true ) {
    lVar3 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0428314c;
    iVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(**(long **)(lVar3 + 0xb8),0);
    if (iVar2 <= iVar8) break;
    lVar3 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0428314c;
    lVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId(**(long **)(lVar3 + 0xb8),iVar8,0);
    lVar7 = *(long *)(param_1 + 0x20);
    if (bVar9) {
      if (((lVar7 == 0) || (*(long *)(lVar7 + 0x48) == 0)) ||
         (lVar7 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_RuntimeData__GetOrCreateMapData
                            (*(long *)(lVar7 + 0x48),lVar3), uVar6 = DAT_09180318, lVar7 == 0))
      goto LAB_0428314c;
      if (*(int *)(lVar7 + 0x18) < 2) {
        *(undefined4 *)(lVar7 + 0x18) = 2;
        plVar4 = (long *)FUN_03f5c394(uVar6,1);
        if (plVar4 == (long *)0x0) goto LAB_0428314c;
        if ((lVar3 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_04283154;
        if ((int)plVar4[3] == 0) goto LAB_04283150;
        plVar4[4] = lVar3;
        thunk_FUN_03f5d7b8(plVar4 + 4,lVar3);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogFormat(DAT_092124d0,plVar4,0);
        bVar1 = true;
      }
      lVar5 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_MapData__GetOrCreateLevelData
                        (lVar7,0);
      uVar6 = DAT_09180318;
      if (lVar5 == 0) goto LAB_0428314c;
      if (*(int *)(lVar5 + 0x14) < 1) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
        plVar4 = (long *)FUN_03f5c394(uVar6,1);
        if (plVar4 == (long *)0x0) goto LAB_0428314c;
        if ((lVar3 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_04283154;
        if ((int)plVar4[3] == 0) goto LAB_04283150;
        plVar4[4] = lVar3;
        thunk_FUN_03f5d7b8(plVar4 + 4,lVar3);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogFormat(DAT_092124c0,plVar4,0);
        bVar1 = true;
      }
    }
    else if (((lVar7 == 0) || (*(long *)(lVar7 + 0x48) == 0)) ||
            (lVar7 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_RuntimeData__GetOrCreateMapData
                               (*(long *)(lVar7 + 0x48),lVar3), lVar7 == 0)) goto LAB_0428314c;
    if (((*(int *)(lVar7 + 0x18) < 2) ||
        (iVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetHighestLevelPlayableData
                           (param_1,lVar3), extraout_x1 == 0)) || (*(int *)(extraout_x1 + 0x14) < 3)
       ) {
LAB_04283024:
      bVar9 = false;
    }
    else {
      lVar5 = *(long *)(DAT_091b4b60 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      if ((**(long **)(lVar5 + 0xb8) == 0) ||
         (lVar5 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(**(long **)(lVar5 + 0xb8),lVar3,0),
         lVar5 == 0)) goto LAB_0428314c;
      iVar2 = iVar2 + 1;
      if (iVar2 < *(int *)(lVar5 + 0x4c)) {
        lVar7 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_MapData__GetOrCreateLevelData
                          (lVar7,iVar2);
        uVar6 = DAT_09180318;
        if (lVar7 == 0) goto LAB_0428314c;
        if (0 < *(int *)(lVar7 + 0x14)) goto LAB_04283024;
        *(undefined4 *)(lVar7 + 0x14) = 1;
        plVar4 = (long *)FUN_03f5c394(uVar6,2);
        local_64 = iVar2;
        lVar7 = FUN_03f5c42c(DAT_09535420,&local_64);
        if (plVar4 == (long *)0x0) goto LAB_0428314c;
        if ((lVar7 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_04283154:
          uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,0);
        }
        if ((int)plVar4[3] == 0) {
LAB_04283150:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar4[4] = lVar7;
        thunk_FUN_03f5d7b8(plVar4 + 4,lVar7);
        if ((lVar3 != 0) &&
           (lVar7 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
        goto LAB_04283154;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) goto LAB_04283150;
        plVar4[5] = lVar3;
        thunk_FUN_03f5d7b8(plVar4 + 5,lVar3);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogFormat(DAT_092124c8,plVar4,0);
        bVar9 = false;
        bVar1 = true;
      }
      else {
        bVar9 = true;
      }
    }
    iVar8 = iVar8 + 1;
  }
  if (bVar1) {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_0428314c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06077998(*(long *)(param_1 + 0x20),0,DAT_091b9d50);
  }
  return;
}

