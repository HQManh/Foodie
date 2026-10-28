// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess$$BuyHomeBuildingItem
// address: 0x4280454
// body: available
// range: 0x4280454-0x42805ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42805fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__BuyHomeBuildingItem
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if ((DAT_095170e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091b9d50);
    FUN_03f5c2a4(&DAT_091b9d80);
    DAT_095170e7 = 1;
  }
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x48), lVar2 != 0)) &&
     (lVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_RuntimeData__GetOrCreateMapData
                        (lVar2,param_2), lVar2 != 0)) {
    plVar7 = (long *)(lVar2 + 0x48);
    lVar2 = *plVar7;
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
      FUN_057e0400(lVar2,DAT_091b0558);
      *plVar7 = lVar2;
      thunk_FUN_03f5d7b8(plVar7,lVar2);
      lVar2 = *plVar7;
      if (lVar2 == 0) goto LAB_042805fc;
    }
    uVar3 = FUN_057e1004(lVar2,param_3,DAT_091b0590);
    lVar2 = DAT_091b0570;
    if ((uVar3 & 1) != 0) {
      return;
    }
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *puVar6 = param_3;
          thunk_FUN_03f5d7b8(puVar6,param_3);
        }
        else {
          FUN_057e0c68(lVar4,param_3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_06077998(*(long *)(param_1 + 0x20),0,DAT_091b9d50);
          lVar2 = *(long *)(param_1 + 0x48);
          if (lVar2 == 0) {
            return;
          }
          (**(code **)(lVar2 + 0x18))
                    (*(undefined8 *)(lVar2 + 0x40),param_2,param_3,*(undefined8 *)(lVar2 + 0x28));
          return;
        }
      }
    }
  }
LAB_042805fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

