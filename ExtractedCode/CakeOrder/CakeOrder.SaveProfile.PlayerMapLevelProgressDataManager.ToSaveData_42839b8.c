// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager$$ToSaveData
// address: 0x42839b8
// body: available
// range: 0x42839b8-0x4283bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4283bbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4283bc0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager__ToSaveData
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_09517115 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a04c8);
    FUN_03f5c2a4(&DAT_091a04e8);
    FUN_03f5c2a4(&DAT_091a04e0);
    FUN_03f5c2a4(&DAT_091a04c0);
    FUN_03f5c2a4(&DAT_09176d48);
    FUN_03f5c2a4(&DAT_09176d50);
    FUN_03f5c2a4(&DAT_091934b8);
    DAT_09517115 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_091934b8);
  CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_RuntimeData___ctor();
  lVar4 = thunk_FUN_03f9944c(DAT_09176d48);
  FUN_06fd76bc(lVar4,DAT_091a04c0);
  if (lVar3 != 0) {
    plVar7 = (long *)(lVar3 + 0x10);
    *plVar7 = lVar4;
    thunk_FUN_03f5d7b8(plVar7,lVar4);
    if (param_2 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      thunk_FUN_03f5d7b8();
      uVar2 = DAT_09176d50;
      *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      lVar4 = thunk_FUN_03f9944c(uVar2);
      FUN_06fd76bc(lVar4,DAT_091a04e0);
      plVar6 = (long *)(lVar3 + 0x30);
      *plVar6 = lVar4;
      thunk_FUN_03f5d7b8(plVar6,lVar4);
      lVar4 = *(long *)(param_2 + 0x10);
      *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar1) {
          lVar8 = 0;
          do {
            if (uVar1 <= (uint)lVar8) goto LAB_04283bc0;
            lVar5 = *(long *)(lVar4 + 0x20 + lVar8 * 8);
            if ((lVar5 == 0) || (*plVar7 == 0)) goto LAB_04283bbc;
            FUN_06fd8454(*plVar7,*(undefined8 *)(lVar5 + 0x10),lVar5,DAT_091a04c8);
            uVar1 = *(uint *)(lVar4 + 0x18);
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < (int)uVar1);
        }
        lVar4 = *(long *)(param_2 + 0x30);
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (0 < (int)uVar1) {
            lVar8 = 0;
            do {
              if (uVar1 <= (uint)lVar8) {
LAB_04283bc0:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar5 = *(long *)(lVar4 + 0x20 + lVar8 * 8);
              if ((lVar5 == 0) || (*plVar6 == 0)) goto LAB_04283bbc;
              FUN_06fd8454(*plVar6,*(undefined8 *)(lVar5 + 0x10),lVar5,DAT_091a04e8);
              uVar1 = *(uint *)(lVar4 + 0x18);
              lVar8 = lVar8 + 1;
            } while ((int)lVar8 < (int)uVar1);
          }
          return lVar3;
        }
      }
    }
  }
LAB_04283bbc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

