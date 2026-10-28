// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$Bind
// address: 0x40cbafc
// body: available
// range: 0x40cbafc-0x40cbccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40cbccc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Bind
               (long param_1,long param_2,long param_3,undefined4 param_4,undefined8 *param_5,
               undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09515fc2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09196bd0);
    FUN_03f5c2a4(&DAT_091b4388);
    FUN_03f5c2a4(&DAT_091b71b0);
    DAT_09515fc2 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09196bd0);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_2);
    *(long *)(lVar2 + 0x18) = param_3;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),param_3);
    if (param_3 != 0) {
      uVar3 = AnhPD_FoodOrder_FCustomerLine__get_SpawnData(param_3,0);
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      thunk_FUN_03f5d7b8();
      *(undefined4 *)(lVar2 + 0x28) = param_4;
      uVar3 = param_5[2];
      uVar9 = param_5[1];
      uVar8 = *param_5;
      *(undefined8 *)(lVar2 + 0x48) = param_6;
      *(undefined8 *)(lVar2 + 0x40) = uVar3;
      *(undefined8 *)(lVar2 + 0x38) = uVar9;
      *(undefined8 *)(lVar2 + 0x30) = uVar8;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x48),param_6);
      lVar7 = DAT_091b4388;
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
            *plVar6 = lVar2;
            thunk_FUN_03f5d7b8(plVar6,lVar2);
          }
          else {
            FUN_057e0c68(lVar4,lVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          uStack_68 = param_5[1];
          uStack_70 = *param_5;
          local_60 = param_5[2];
          uStack_78 = 0;
          local_80 = 0;
          uStack_88 = 0;
          local_90 = 0;
          FUN_05c331e0(&local_90,&uStack_70,DAT_091b71b0);
          if (param_2 != 0) {
            *(undefined8 *)(param_2 + 0x90) = uStack_88;
            *(undefined8 *)(param_2 + 0x88) = local_90;
            *(undefined8 *)(param_2 + 0xa0) = uStack_78;
            *(undefined8 *)(param_2 + 0x98) = local_80;
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xa8), lVar7 != 0)) {
              *(undefined1 *)(lVar7 + 0x78) = 1;
              return lVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

