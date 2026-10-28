// rea decompile_all
// name: AnhPD.FoodOrder.ShelfSnapshot$$PushVirtualPlate
// address: 0x40d64fc
// body: available
// range: 0x40d64fc-0x40d67d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d67d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
AnhPD_FoodOrder_ShelfSnapshot__PushVirtualPlate
          (long param_1,undefined8 *param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_09516016 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091aa8a8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091aa8c0);
    FUN_03f5c2a4(&DAT_091b71b0);
    DAT_09516016 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    uStack_58 = param_2[1];
    local_60 = *param_2;
    local_50 = param_2[2];
    uVar1 = *(undefined4 *)(lVar6 + 0x18);
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_05c331e0(&local_a0,&local_60,DAT_091b71b0);
    lVar4 = DAT_091aa8a8;
    lVar3 = *(long *)(lVar6 + 0x10);
    uStack_78 = uStack_98;
    local_80 = local_a0;
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar2 * 0x20;
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar3 + 0x28) = uStack_98;
        *(undefined8 *)(lVar3 + 0x20) = local_a0;
        *(undefined8 *)(lVar3 + 0x38) = uStack_88;
        *(undefined8 *)(lVar3 + 0x30) = uStack_90;
      }
      else {
        uStack_58 = uStack_98;
        local_60 = local_a0;
        uStack_48 = uStack_88;
        local_50 = uStack_90;
        FUN_0568fce8(lVar6,&local_60,
                     *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = DAT_091aa8a8;
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar2 = *(uint *)(lVar3 + 0x18);
          if (uVar2 < *(uint *)(lVar4 + 0x18)) {
            lVar4 = lVar4 + (long)(int)uVar2 * 0x20;
            *(uint *)(lVar3 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar4 + 0x28) = 0;
            *(undefined8 *)(lVar4 + 0x20) = 0;
            *(undefined8 *)(lVar4 + 0x38) = 0;
            *(undefined8 *)(lVar4 + 0x30) = 0;
          }
          else {
            uStack_58 = 0;
            local_60 = 0;
            uStack_48 = 0;
            local_50 = 0;
            FUN_0568fce8(lVar3,&local_60,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = DAT_091adc88;
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != 0) {
            lVar4 = *(long *)(lVar3 + 0x10);
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar2 = *(uint *)(lVar3 + 0x18);
              if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = param_3;
              }
              else {
                FUN_057971a8(lVar3,param_3,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              lVar6 = DAT_091b0570;
              lVar3 = *(long *)(param_1 + 0x58);
              if (param_4 == 0) {
                param_4 = **(long **)(DAT_09535468 + 0xb8);
              }
              if (lVar3 != 0) {
                lVar4 = *(long *)(lVar3 + 0x10);
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar2 = *(uint *)(lVar3 + 0x18);
                  if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                    *(uint *)(lVar3 + 0x18) = uVar2 + 1;
                    plVar5 = (long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar5 = param_4;
                    thunk_FUN_03f5d7b8(plVar5,param_4);
                  }
                  else {
                    FUN_057e0c68(lVar3,param_4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                  }
                  plVar5 = (long *)(param_1 + 0x70);
                  if ((*plVar5 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
                    if (*(int *)(*plVar5 + 0x18) < *(int *)(*(long *)(param_1 + 0x10) + 0x18)) {
                      lVar6 = FUN_03f5c394(DAT_091801b8);
                      *plVar5 = lVar6;
                      thunk_FUN_03f5d7b8(plVar5,lVar6);
                    }
                    return uVar1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

