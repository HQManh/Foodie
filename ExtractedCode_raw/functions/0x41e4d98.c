// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$Deliver
// address: 0x41e4d98
// body: available
// range: 0x41e4d98-0x41e529b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e5294 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e5298 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AutoCompleteOrderFx__Deliver
               (undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4,long *param_5,
               undefined8 param_6)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  long *local_50;
  undefined8 local_48;
  
  if ((DAT_09516af5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091cd4c8);
    FUN_03f5c2a4(&DAT_09184b58);
    FUN_03f5c2a4(&DAT_09184fd8);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0921a018);
    FUN_03f5c2a4(&DAT_0920c2a8);
    FUN_03f5c2a4(&DAT_091fadd0);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_09214758);
    FUN_03f5c2a4(&DAT_091f6bf0);
    FUN_03f5c2a4(&DAT_09217c48);
    DAT_09516af5 = 1;
  }
  local_50 = (long *)0x0;
  local_48 = 0;
  puVar7 = (undefined8 *)(param_3 + 0x38);
  uVar6 = *puVar7;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  *puVar7 = 0;
  thunk_FUN_03f5d7b8(puVar7,0);
  if (*(long *)(param_3 + 0x28) == 0) goto LAB_041e5294;
  bVar2 = AnhPD_FoodOrder_ServeService__CanDeliverOrder(*(long *)(param_3 + 0x28),uVar6,0);
  *(byte *)(param_3 + 0x40) = bVar2 & 1;
  AnhPD_FoodOrder_AutoCompleteOrderFx__Finish(param_3);
  if (*(char *)(param_3 + 0x40) == '\0') {
LAB_041e4ff8:
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_041e5294;
    AnhPD_FoodOrder_ServeService__Release(*(long *)(param_3 + 0x28),uVar6,0);
    AnhPD_FoodOrder_AutoCompleteOrderFx__ReturnSpent(param_3,param_6);
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceLedger__Finish(param_5,6,DAT_0921a018,0,0);
  }
  else {
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_041e5294;
    uVar3 = AnhPD_FoodOrder_ServeService__DeliverOrder(*(long *)(param_3 + 0x28),uVar6,0);
    if ((uVar3 & 1) == 0) goto LAB_041e4ff8;
    if (*(int *)(DAT_09184fd8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Lofelt_NiceVibrations_HapticPatterns__PlayPreset(4,0);
    local_48 = 0;
    local_50 = param_5;
    thunk_FUN_03f5d7b8(&local_50,param_5);
    if ((param_5 == (long *)0x0) ||
       (lVar4 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_5,0), lVar4 == 0)) goto LAB_041e5294;
    uVar8 = UnityEngine_Transform__get_position(lVar4,0);
    plVar1 = local_50;
    local_48 = CONCAT44(param_2,uVar8);
    uVar6 = local_48;
    if (*(int *)(DAT_09184b58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b788e4(plVar1,uVar6,DAT_091cd4c8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(param_4,0);
    uVar6 = DAT_09217c48;
    uVar5 = DAT_091fadd0;
    if ((uVar3 & 1) != 0) {
      if (param_4 == 0) goto LAB_041e5294;
      uVar5 = UnityEngine_Object__GetName(param_4,0);
    }
    uVar6 = System_String__Concat(uVar6,uVar5,0);
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189140);
    }
    AnhPD_FoodOrder_PieceLedger__Finish(param_5,3,uVar6,0,0);
    if (*(long *)(param_3 + 0x10) == 0) goto LAB_041e5294;
    lVar4 = *(long *)(*(long *)(param_3 + 0x10) + 0x18);
    if (lVar4 != 0) {
      if (*(long *)(param_3 + 0x78) == 0) goto LAB_041e5294;
      FUN_057e185c(&local_88,*(long *)(param_3 + 0x78),DAT_091b05a8);
      puStack_68 = puStack_80;
      local_70 = local_88;
      local_60 = local_78;
      local_88 = 0;
      puStack_80 = &local_70;
      while (uVar3 = FUN_071bd28c(&local_70,DAT_091a45a0), (uVar3 & 1) != 0) {
        AnhPD_FoodOrder_LevelPieceBook__RecordAutoBuilt(lVar4,local_60,0);
      }
      FUN_071bd288(&local_70,DAT_091a4598);
    }
    if (*(long *)(param_3 + 0x80) == 0) goto LAB_041e5294;
    if (0 < *(int *)(*(long *)(param_3 + 0x80) + 0x18)) {
      lVar4 = FUN_03f5c394(DAT_091805f8,5);
      if (lVar4 == 0) goto LAB_041e5294;
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_041e5298:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar4 + 0x20) = DAT_0920c2a8;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20));
      uVar6 = (**(code **)(*param_5 + 0x1b8))(param_5,*(undefined8 *)(*param_5 + 0x1c0));
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_041e5298;
      *(undefined8 *)(lVar4 + 0x28) = uVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x28),uVar6);
      if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_041e5298;
      *(undefined8 *)(lVar4 + 0x30) = DAT_091f6bf0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x30));
      uVar6 = System_String__Join(DAT_091f86e8,*(undefined8 *)(param_3 + 0x80),0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) == 0) goto LAB_041e5298;
      *(undefined8 *)(lVar4 + 0x38) = uVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38),uVar6);
      if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_041e5298;
      *(undefined8 *)(lVar4 + 0x40) = DAT_09214758;
      thunk_FUN_03f5d7b8();
      uVar6 = System_String__Concat(lVar4,0);
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189140);
      }
      AnhPD_FoodOrder_PieceLedger__Alert(uVar6,0);
    }
  }
  if (**(long **)(DAT_091881a0 + 0xb8) != 0) {
    AnhPD_FoodOrder_MessyController__DespawnItem(**(long **)(DAT_091881a0 + 0xb8),param_5);
    return;
  }
LAB_041e5294:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

