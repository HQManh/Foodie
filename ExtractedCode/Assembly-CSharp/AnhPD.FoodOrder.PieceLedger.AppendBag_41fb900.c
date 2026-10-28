// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$AppendBag
// address: 0x41fb900
// body: available
// range: 0x41fb900-0x41fbce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41fbce0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLedger__AppendBag(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09516baf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_091fad20);
    FUN_03f5c2a4(&DAT_09226df8);
    FUN_03f5c2a4(&DAT_0921df90);
    FUN_03f5c2a4(&DAT_0921caf0);
    FUN_03f5c2a4(&DAT_091f5c18);
    FUN_03f5c2a4(&DAT_091f68a8);
    DAT_09516baf = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_a4 = *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x90);
  uVar3 = FUN_03f5c42c(DAT_09535420,&local_a4);
  local_a8 = *(undefined4 *)(*(long *)(DAT_09189140 + 0xb8) + 0x94);
  uVar4 = FUN_03f5c42c(DAT_09535420,&local_a8);
  local_ac = param_3;
  uVar5 = FUN_03f5c42c(DAT_09535420,&local_ac);
  uVar3 = System_String__Format(DAT_091fad20,uVar3,uVar4,uVar5,0);
  if (param_1 == 0) {
LAB_041fbce0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Text_StringBuilder__AppendLine(param_1,uVar3,0);
  if (DAT_09515fad == '\0') {
    FUN_03f5c2a4(&DAT_0918aec0);
    DAT_09515fad = '\x01';
  }
  uVar3 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  lVar9 = **(long **)(DAT_0918aec0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar3,0);
  lVar10 = 0;
  if ((uVar6 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_041fbce0;
    lVar10 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(lVar9,0);
  if ((lVar10 != 0) && ((uVar6 & 1) != 0)) {
    if (param_2 == 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar8 = *(undefined8 **)(DAT_09189158 + 0xb8);
      uStack_98 = puVar8[1];
      local_a0 = *puVar8;
      local_90 = puVar8[2];
    }
    else {
      AnhPD_FoodOrder_LevelPieceBook__OpenOrderMissing(&local_a0,param_2);
    }
    uStack_78 = uStack_98;
    local_80 = local_a0;
    local_70 = local_90;
    if (lVar9 == 0) goto LAB_041fbce0;
    iVar1 = AnhPD_FoodOrder_SpawnBagSaveMe__get_EntryCount(lVar9,0);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar3 = AnhPD_FoodOrder_SpawnBagSaveMe__EntryIdAt(lVar9,iVar1,0);
        if ((param_2 == 0) ||
           (uVar6 = AnhPD_FoodOrder_LevelPieceBook__TakeWantedAsIs(param_2,uVar3,&local_80),
           uVar4 = DAT_0921df90, (uVar6 & 1) == 0)) {
          lVar7 = UnityEngine_Component__get_transform(lVar9,0);
          if (lVar7 == 0) goto LAB_041fbce0;
          UnityEngine_Transform__get_position(lVar7,0);
          uVar6 = AnhPD_FoodOrder_LevelInfo__TryGetInteractableStation(lVar10,uVar3,&local_88);
          uVar4 = DAT_0921caf0;
          if (((uVar6 & 1) != 0) &&
             (uVar6 = AnhPD_FoodOrder_LevelInfo__WantsAutoFeed(lVar10,local_88,uVar3),
             uVar4 = DAT_0921caf0, (uVar6 & 1) != 0)) {
            if (local_88 == 0) goto LAB_041fbce0;
            uVar4 = UnityEngine_Object__GetName(local_88,0);
            uVar4 = System_String__Concat(DAT_09226df8,uVar4,DAT_091f68a8,0);
          }
        }
        local_a4 = iVar1;
        uVar5 = FUN_03f5c42c(DAT_09535420,&local_a4);
        uVar3 = System_String__Format(DAT_091f5c18,uVar5,uVar3,uVar4,0);
        System_Text_StringBuilder__AppendLine(param_1,uVar3,0);
        iVar1 = iVar1 + 1;
        iVar2 = AnhPD_FoodOrder_SpawnBagSaveMe__get_EntryCount(lVar9,0);
      } while (iVar1 < iVar2);
    }
  }
  System_Text_StringBuilder__AppendLine(param_1,0);
  return;
}

