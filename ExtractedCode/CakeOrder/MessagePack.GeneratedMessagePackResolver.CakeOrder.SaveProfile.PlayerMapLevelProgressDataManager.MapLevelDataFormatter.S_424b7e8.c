// rea decompile_all
// name: MessagePack.GeneratedMessagePackResolver.CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.MapLevelDataFormatter$$Serialize
// address: 0x424b7e8
// body: available
// range: 0x424b7e8-0x424b98b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424b900 to 0x739f684 MessagePack.MessagePackWriter$$WriteNil (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x424b984 to 0x4264ed8 FUN_04264ed8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x424b988 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_GeneratedMessagePackResolver_CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_MapLevelDataFormatter__Serialize
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if ((DAT_09516eac & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ccf28);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_0917b1d0);
    DAT_09516eac = 1;
  }
  if (param_3 == 0) {
    MessagePack_MessagePackWriter__WriteNil(param_2,0);
    return;
  }
  if (param_4 != 0) {
    uVar7 = *(undefined8 *)(param_4 + 0x10);
    MessagePack_MessagePackWriter__WriteArrayHeader(param_2,7,0);
    FUN_04264ed8(param_2,*(undefined4 *)(param_3 + 0x10),0);
    if (*(int *)(DAT_09184938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar2 = (long *)FUN_042651bc(uVar7,DAT_091ccf28);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b1d0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0424b910;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b1d0,0);
LAB_0424b910:
      (*(code *)*puVar3)(plVar2,param_2,uVar1,param_4,puVar3[1]);
      FUN_04264ed8(param_2,*(undefined4 *)(param_3 + 0x18),0);
      FUN_04264ed8(param_2,*(undefined4 *)(param_3 + 0x1c),0);
      FUN_04264ed8(param_2,*(undefined4 *)(param_3 + 0x20),0);
      FUN_04264ed8(param_2,*(undefined4 *)(param_3 + 0x24),0);
      FUN_04264ed8(param_2,*(undefined4 *)(param_3 + 0x28),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

