// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess$$RecordLevelPlay
// address: 0x4282204
// body: available
// range: 0x4282204-0x4282443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4282430 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4282434 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4282440 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__RecordLevelPlay
               (long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 local_24;
  
  if ((DAT_09517105 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_091892f8);
    FUN_03f5c2a4(&DAT_091b9d50);
    FUN_03f5c2a4(&DAT_091b9d80);
    FUN_03f5c2a4(&DAT_0920b720);
    DAT_09517105 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x18) = uVar1;
      if (((*(long *)(param_1 + 0x20) != 0) && (param_2 != 0)) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x48), lVar5 != 0)) {
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(param_2 + 0x10);
        thunk_FUN_03f5d7b8();
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x48), lVar5 != 0)) {
          uVar1 = *(undefined8 *)(param_2 + 0x10);
          *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(param_2 + 0x1c);
          lVar5 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_RuntimeData__GetOrCreateMapData
                            (lVar5,uVar1);
          if ((lVar5 != 0) &&
             (lVar5 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_MapData__GetOrCreateLevelData
                                (lVar5,*(undefined4 *)(param_2 + 0x1c)), lVar5 != 0)) {
            if (*(int *)(lVar5 + 0x14) < 2) {
              *(undefined4 *)(lVar5 + 0x14) = 2;
            }
            lVar4 = *(long *)(param_1 + 0x20);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar4 != 0) {
              FUN_06077998(lVar4,0,DAT_091b9d50);
              if (*(int *)(DAT_091892f8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar5 = **(long **)(DAT_091892f8 + 0xb8);
              plVar2 = (long *)FUN_03f5c394(DAT_09180318,2);
              if (plVar2 != (long *)0x0) {
                lVar4 = *(long *)(param_2 + 0x10);
                if ((lVar4 != 0) &&
                   (lVar3 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
                {
LAB_04282438:
                  uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar1,0);
                }
                if ((int)plVar2[3] != 0) {
                  plVar2[4] = lVar4;
                  thunk_FUN_03f5d7b8(plVar2 + 4,lVar4);
                  local_24 = *(undefined4 *)(param_2 + 0x1c);
                  lVar4 = FUN_03f5c42c(DAT_09535420,&local_24);
                  if ((lVar4 != 0) &&
                     (lVar3 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)
                     ) goto LAB_04282438;
                  if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
                    plVar2[5] = lVar4;
                    thunk_FUN_03f5d7b8(plVar2 + 5,lVar4);
                    if (lVar5 != 0) {
                      EssentialSystemR1_R1Logger__LogFormat(lVar5,DAT_0920b720,plVar2,0);
                      return;
                    }
                    goto LAB_04282430;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
            }
          }
        }
      }
    }
  }
LAB_04282430:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

