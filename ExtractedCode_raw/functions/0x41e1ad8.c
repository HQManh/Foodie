// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$PieceCandidatesFor
// address: 0x41e1ad8
// body: available
// range: 0x41e1ad8-0x41e1d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e1d14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e1d18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_AutoCompleteOrderFx__PieceCandidatesFor
               (long param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09516ada & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_091a4f70);
    FUN_03f5c2a4(&DAT_091a4f78);
    FUN_03f5c2a4(&DAT_091a4f80);
    FUN_03f5c2a4(&DAT_091b20e8);
    FUN_03f5c2a4(&DAT_091b20f0);
    FUN_03f5c2a4(&DAT_091b20e0);
    FUN_03f5c2a4(&DAT_091b2108);
    FUN_03f5c2a4(&DAT_0917d198);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516ada = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (param_3 != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(param_4,0);
    if ((uVar5 & 1) != 0) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      lVar6 = thunk_FUN_03f9944c(DAT_0917d198);
      FUN_057e0478(lVar6,uVar1,DAT_091b20e0);
      FUN_057e185c(&local_88,param_1,DAT_091b20f0);
      uStack_68 = puStack_80;
      local_70 = local_88;
      puStack_80 = &local_70;
      local_60 = local_78;
      local_88 = 0;
LAB_041e1c38:
      uVar5 = FUN_071bd28c(&local_70,DAT_091a4f78);
      uVar4 = local_60;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(DAT_09181918 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = AnhPD_FoodOrder_AutoCompleteOrderFx__IsWrongForm(uVar4,param_2,param_3,param_4);
        lVar3 = DAT_091b20e8;
        if ((uVar5 & 1) == 0) {
          if (lVar6 != 0) {
            lVar8 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                *puVar7 = uVar4;
                thunk_FUN_03f5d7b8(puVar7,uVar4);
              }
              else {
                FUN_057e0c68(lVar6,uVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_041e1c38;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_041e1c38;
      }
      FUN_071bd288(&local_70,DAT_091a4f70);
      param_1 = lVar6;
    }
  }
  return param_1;
}

