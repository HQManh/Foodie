// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.MapData$$AddKeyBool
// address: 0x42809c8
// body: available
// range: 0x42809c8-0x4280aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4280afc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_MapData__AddKeyBool
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if ((DAT_0951711f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_0951711f = 1;
  }
  plVar7 = (long *)(param_1 + 0x40);
  lVar3 = *plVar7;
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar3,DAT_091b0558);
    *plVar7 = lVar3;
    thunk_FUN_03f5d7b8(plVar7,lVar3);
    lVar3 = *plVar7;
    if (lVar3 == 0) goto LAB_04280afc;
  }
  uVar2 = FUN_057e1004(lVar3,param_2,DAT_091b0590);
  lVar3 = DAT_091b0570;
  if ((uVar2 & 1) == 0) {
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *puVar6 = param_2;
          thunk_FUN_03f5d7b8(puVar6,param_2);
        }
        else {
          FUN_057e0c68(lVar4,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_04280ae8;
      }
    }
LAB_04280afc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_04280ae8:
  return (uVar2 ^ 0xffffffff) & 1;
}

