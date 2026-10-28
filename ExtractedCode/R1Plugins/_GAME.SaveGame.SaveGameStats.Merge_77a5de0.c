// rea decompile_all
// name: _GAME.SaveGame.SaveGameStats$$Merge
// address: 0x77a5de0
// body: available
// range: 0x77a5de0-0x77a60e7 inclusive
// range: 0x77a618c-0x77a618f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a60cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a60e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a618c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GAME_SaveGame_SaveGameStats__Merge(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 local_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_09522e42 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4d38);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0919f660);
    FUN_03f5c2a4(&DAT_0919f658);
    FUN_03f5c2a4(&DAT_0919f670);
    FUN_03f5c2a4(&DAT_09176a58);
    FUN_03f5c2a4(&DAT_091a6690);
    FUN_03f5c2a4(&DAT_091a6698);
    FUN_03f5c2a4(&DAT_091a66a0);
    FUN_03f5c2a4(&DAT_091a97a8);
    FUN_03f5c2a4(&DAT_091a97b0);
    FUN_03f5c2a4(&DAT_0918a5a8);
    DAT_09522e42 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  if (param_1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
  }
  if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = _GAME_SaveGame_SaveGameStats__Counters(param_1,uVar7);
  lVar5 = thunk_FUN_03f9944c(DAT_09176a58);
  FUN_06fc25d8(lVar5,uVar7,DAT_0919f658);
  if (param_2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    FUN_06fc382c(&local_d0,param_2,DAT_0919f660);
    local_a0 = local_d0;
    local_d0 = 0;
    puStack_98 = puStack_c8;
    uStack_88 = uStack_b8;
    local_90 = uStack_c0;
    uStack_78 = uStack_a8;
    local_80 = local_b0;
    puStack_c8 = &local_a0;
    while (uVar6 = FUN_07271e30(&local_a0,DAT_091a6698), uVar4 = local_80, uVar3 = uStack_88,
          uVar2 = local_90, auVar9._8_8_ = local_80, auVar9._0_8_ = uStack_88, (uVar6 & 1) != 0) {
      auVar8 = FUN_04a5f8f0(param_3,local_90,DAT_091c4d38);
      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Decimal__op_GreaterThanOrEqual(uVar3,uVar4,auVar8._0_8_,auVar8._8_8_,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar9 = System_Decimal__op_Subtraction(uVar3,uVar4,auVar8._0_8_,auVar8._8_8_,0);
      }
      auVar8 = FUN_04a5f8f0(uVar7,uVar2,DAT_091c4d38);
      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar9 = System_Decimal__op_Addition(auVar8._0_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_,0);
      if (lVar5 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_077a618c;
      }
      FUN_06fc3390(lVar5,uVar2,auVar9._0_8_,auVar9._8_8_,DAT_0919f670);
    }
    FUN_07271fac(&local_a0,DAT_091a6690);
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return lVar5;
    }
  }
LAB_077a618c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

