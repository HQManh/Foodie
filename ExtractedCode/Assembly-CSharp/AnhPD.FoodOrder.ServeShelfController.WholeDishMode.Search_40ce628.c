// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$Search
// address: 0x40ce628
// body: available
// range: 0x40ce628-0x40ce9c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ce994 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Search
               (long param_1,byte *param_2,undefined8 *param_3,undefined8 param_4,undefined4 param_5
               ,undefined8 param_6,void *param_7)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined1 auStack_260 [80];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [80];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 auStack_120 [24];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09515fcb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adce8);
    FUN_03f5c2a4(&DAT_091b43d0);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091b43d8);
    FUN_03f5c2a4(&DAT_091ab408);
    FUN_03f5c2a4(&DAT_091ab410);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515fcb = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  memmove(param_7,param_2,0x50);
  thunk_FUN_03f5d7b8((long)param_7 + 8,0);
  if ((*param_2 & 1) != 0) {
    memcpy(auStack_120,param_2,0x50);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_130 = local_f8;
    uStack_138 = uStack_100;
    local_140 = local_108;
    AnhPD_FoodOrder_PieceSet__Subtract(&local_170,param_3,&local_140,0);
    uStack_78 = uStack_168;
    local_80 = local_170;
    local_70 = local_160;
    uVar3 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_80,0);
    if ((uVar3 & 1) != 0) {
      if (-1 < *(int *)(param_1 + 0x4c)) {
        if (*(long *)(param_1 + 0x28) != 0) {
          bVar2 = FUN_0571bde4(*(long *)(param_1 + 0x28),*(int *)(param_1 + 0x4c),DAT_091ab408);
          goto LAB_040ce9a4;
        }
        goto LAB_040ce994;
      }
      bVar2 = 1;
      goto LAB_040ce9a4;
    }
  }
  iVar7 = *(int *)(param_1 + 0x48) + -1;
  *(int *)(param_1 + 0x48) = iVar7;
  if (-1 < iVar7) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      iVar7 = 0;
      do {
        bVar2 = iVar7 < *(int *)(lVar5 + 0x18);
        if (*(int *)(lVar5 + 0x18) <= iVar7) goto LAB_040ce9a4;
        if (*(long *)(param_1 + 0x28) == 0) break;
        uVar3 = FUN_0571bde4(*(long *)(param_1 + 0x28),iVar7,DAT_091ab408);
        if (((uVar3 & 1) == 0) &&
           (uVar3 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__WasTriedAtThisDepth
                              (param_1,iVar7), (uVar3 & 1) == 0)) {
          memcpy(auStack_120,param_2,0x50);
          if (*(long *)(param_1 + 0x20) == 0) break;
          FUN_05a07ee8(&local_170,*(long *)(param_1 + 0x20),iVar7,DAT_091b43d8);
          uStack_208 = param_3[1];
          local_210 = *param_3;
          local_200 = param_3[2];
          memcpy(auStack_1c0,auStack_120,0x50);
          uStack_1e8 = uStack_168;
          local_1f0 = local_170;
          uStack_1d8 = uStack_158;
          uStack_1e0 = local_160;
          uStack_1c8 = uStack_148;
          local_1d0 = local_150;
          uVar3 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__TryStep
                            (auStack_1c0,&local_1f0,&local_210,param_4,param_5,param_6,&local_d0);
          if ((uVar3 & 1) != 0) {
            if (*(long *)(param_1 + 0x28) == 0) break;
            FUN_0571be38(*(long *)(param_1 + 0x28),iVar7,1,DAT_091ab410);
            lVar5 = DAT_091adc88;
            lVar4 = *(long *)(param_1 + 0x30);
            if (lVar4 == 0) break;
            lVar6 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar6 == 0) break;
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = iVar7;
            }
            else {
              FUN_057971a8(lVar4,iVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            memcpy(auStack_260,&local_d0,0x50);
            uStack_278 = param_3[1];
            local_280 = *param_3;
            local_270 = param_3[2];
            uVar3 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Search
                              (param_1,auStack_260,&local_280,param_4,param_5,param_6,param_7);
            if ((uVar3 & 1) != 0) goto LAB_040ce9a4;
            lVar5 = *(long *)(param_1 + 0x30);
            if (lVar5 == 0) break;
            FUN_05798a08(lVar5,*(int *)(lVar5 + 0x18) + -1,DAT_091adce8);
            if (*(long *)(param_1 + 0x28) == 0) break;
            FUN_0571be38(*(long *)(param_1 + 0x28),iVar7,0,DAT_091ab410);
          }
        }
        lVar5 = *(long *)(param_1 + 0x20);
        iVar7 = iVar7 + 1;
      } while (lVar5 != 0);
    }
LAB_040ce994:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  bVar2 = 0;
LAB_040ce9a4:
  return bVar2 & 1;
}

