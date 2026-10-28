// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess$$RecordLevelEnd
// address: 0x4282604
// body: available
// range: 0x4282604-0x428283b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4282828 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428282c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4282838 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__RecordLevelEnd
               (long param_1,long param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_44 [3];
  undefined4 local_38;
  
  if ((DAT_09517106 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091892f8);
    FUN_03f5c2a4(&DAT_091b9d50);
    FUN_03f5c2a4(&DAT_091b9d80);
    FUN_03f5c2a4(&DAT_0920b710);
    DAT_09517106 = 1;
  }
  local_38 = 0;
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x48), lVar2 != 0)) &&
     (lVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_RuntimeData__GetOrCreateMapData
                        (lVar2,param_2), lVar2 != 0)) {
    *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
    lVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_MapData__GetOrCreateLevelData
                      (lVar2,param_3);
    if (param_4 != 0) {
      if ((*(uint *)(param_4 + 0x10) & 0xfffffffe) == 2) {
        if (lVar2 == 0) goto LAB_04282828;
        iVar1 = *(int *)(param_4 + 0x20);
        *(undefined4 *)(lVar2 + 0x14) = 3;
        *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
        if (*(int *)(lVar2 + 0x18) < iVar1) {
          *(int *)(lVar2 + 0x18) = iVar1;
        }
      }
      else {
        if (lVar2 == 0) goto LAB_04282828;
        *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_06077998(*(long *)(param_1 + 0x20),0,DAT_091b9d50);
        if (*(int *)(DAT_091892f8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = **(long **)(DAT_091892f8 + 0xb8);
        plVar3 = (long *)FUN_03f5c394(DAT_09180318,2);
        if (plVar3 != (long *)0x0) {
          if ((param_2 != 0) &&
             (lVar4 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_04282830:
            uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar6,0);
          }
          if ((int)plVar3[3] != 0) {
            plVar3[4] = param_2;
            thunk_FUN_03f5d7b8(plVar3 + 4,param_2);
            local_44[0] = param_3;
            lVar4 = FUN_03f5c42c(DAT_09535420,local_44);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_04282830;
            if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
              plVar3[5] = lVar4;
              thunk_FUN_03f5d7b8(plVar3 + 5,lVar4);
              if (lVar2 != 0) {
                EssentialSystemR1_R1Logger__LogFormat(lVar2,DAT_0920b710,plVar3,0);
                lVar2 = *(long *)(param_1 + 0x58);
                if (lVar2 != 0) {
                  (**(code **)(lVar2 + 0x18))
                            (*(undefined8 *)(lVar2 + 0x40),param_2,*(undefined8 *)(lVar2 + 0x28));
                }
                return;
              }
              goto LAB_04282828;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
      }
    }
  }
LAB_04282828:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

