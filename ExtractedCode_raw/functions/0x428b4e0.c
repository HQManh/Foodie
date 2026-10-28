// rea decompile_all
// name: CakeOrder.InGame.CustomerScheduleBuilder$$TryBuildQueueItem
// address: 0x428b4e0
// body: available
// range: 0x428b4e0-0x428b7e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428b7dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428b7e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_CustomerScheduleBuilder__TryBuildQueueItem
          (long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_0951716f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f7758);
    FUN_03f5c2a4(&DAT_091f6cd0);
    FUN_03f5c2a4(&DAT_09226db0);
    FUN_03f5c2a4(&DAT_09213ff8);
    FUN_03f5c2a4(&DAT_09214000);
    DAT_0951716f = 1;
  }
  local_24 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_50 = 0;
  local_48 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) == 1) {
      local_24 = 0xffffffff;
LAB_0428b5a0:
      CakeOrder_InGame_CustomerScheduleBuilder__BuildSlotStatuses
                (param_1,*(undefined8 *)(param_2 + 0x28),&local_38,&local_40);
      local_48 = 0;
      uStack_50 = local_38;
      local_58 = CONCAT44(*(undefined4 *)(param_2 + 0x18),local_24);
      thunk_FUN_03f5d7b8(&uStack_50);
      local_48 = local_40;
      thunk_FUN_03f5d7b8(&local_48);
      param_3[1] = uStack_50;
      *param_3 = local_58;
      param_3[2] = local_48;
      thunk_FUN_03f5d7b8(param_3 + 1,0);
      return 1;
    }
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
LAB_0428b7dc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = CakeOrder_MapIngredientLookupTable__TryGetPickupableRecipePieceIndex
                        (*(long *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x20),&local_24,0);
      if ((uVar1 & 1) != 0) goto LAB_0428b5a0;
      lVar2 = FUN_03f5c394(DAT_091805f8,5);
      if (lVar2 == 0) goto LAB_0428b7dc;
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0428b7e0;
      *(undefined8 *)(lVar2 + 0x20) = DAT_09213ff8;
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_2 + 0x20) == 0) goto LAB_0428b7dc;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) {
LAB_0428b7e0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x28));
      if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_0428b7e0;
      *(undefined8 *)(lVar2 + 0x30) = DAT_091f7758;
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0428b7dc;
      uVar4 = UnityEngine_Object__GetName(*(long *)(param_1 + 0x10),0);
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_0428b7e0;
      *(undefined8 *)(lVar2 + 0x38) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x38),uVar4);
      if (*(uint *)(lVar2 + 0x18) < 5) goto LAB_0428b7e0;
      *(undefined8 *)(lVar2 + 0x40) = DAT_091f6cd0;
      thunk_FUN_03f5d7b8();
      uVar4 = System_String__Concat(lVar2,0);
    }
    else {
      local_28 = *(undefined4 *)(param_2 + 0x14);
      uVar4 = FUN_03f5c42c(DAT_09535420,&local_28);
      uVar4 = System_String__Format(DAT_09214000,uVar4,0);
      uVar4 = System_String__Concat(uVar4,DAT_09226db0,0);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogWarning(uVar4,uVar3,0);
  }
  return 0;
}

