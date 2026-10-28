// rea decompile_all
// name: System.IO.Stream$$ReadAsync
// address: 0x757e8c8
// body: available
// range: 0x757e8c8-0x757eb7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x757ea08 to 0x75c7dec System.ThrowHelper$$ThrowArgumentNullException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757eb78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_IO_Stream__ReadAsync
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50 [2];
  
  local_60 = param_2;
  uStack_58 = param_3;
  if ((DAT_09521ac2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_091971c0);
    FUN_03f5c2a4(&DAT_091971c8);
    FUN_03f5c2a4(&DAT_091971d0);
    FUN_03f5c2a4(&DAT_09175040);
    FUN_03f5c2a4(&DAT_091d3058);
    FUN_03f5c2a4(&DAT_091b4738);
    FUN_03f5c2a4(&DAT_091b4750);
    FUN_03f5c2a4(&DAT_0918b308);
    FUN_03f5c2a4(&DAT_091beb68);
    DAT_09521ac2 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  auVar10 = FUN_05a49a78(param_2,param_3,DAT_091b4750);
  uVar4 = FUN_04c07544(auVar10._0_8_,auVar10._8_8_,&local_70,DAT_091d3058);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_09175020 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = DAT_09197190;
    lVar6 = *(long *)(DAT_09197190 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    plVar9 = (long *)**(undefined8 **)(lVar5 + 0xb8);
    uVar3 = FUN_05a49a7c(&local_60,DAT_091b4738);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = (**(code **)(*plVar9 + 0x178))(plVar9,uVar3,*(undefined8 *)(*plVar9 + 0x180));
    uVar3 = FUN_05a49a7c(&local_60,DAT_091b4738);
    uVar8 = (**(code **)(*param_1 + 0x2e8))
                      (param_1,uVar7,0,uVar3,param_4,*(undefined8 *)(*param_1 + 0x2f0));
    uVar2 = uStack_58;
    uVar1 = local_60;
    if (*(int *)(DAT_0918b308 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918b308);
    }
    local_50[0] = System_IO_Stream__<ReadAsync>g__FinishReadAsync_44_0(uVar8,uVar7,uVar1,uVar2);
  }
  else {
    if (*(int *)(DAT_09175040 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = (**(code **)(*param_1 + 0x2e8))
                      (param_1,local_70,local_68 & 0xffffffff,local_68._4_4_,param_4,
                       *(undefined8 *)(*param_1 + 0x2f0));
    local_50[0] = 0;
    local_50[1] = 0;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentNullException(0x26,0);
    }
    local_50[0] = lVar5;
    thunk_FUN_03f5d7b8(local_50,lVar5);
  }
  return local_50[0];
}

