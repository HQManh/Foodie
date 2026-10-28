// rea decompile_all
// name: System.IO.Stream$$WriteAsync
// address: 0x757f440
// body: available
// range: 0x757f440-0x757f707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x757f6c8 to 0x75c7dec System.ThrowHelper$$ThrowArgumentNullException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757f704 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
System_IO_Stream__WriteAsync(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined5 uStack_45;
  
  local_60 = param_2;
  uStack_58 = param_3;
  if ((DAT_09521aca & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_091971c0);
    FUN_03f5c2a4(&DAT_091971c8);
    FUN_03f5c2a4(&DAT_091971d0);
    FUN_03f5c2a4(&DAT_09175040);
    FUN_03f5c2a4(&DAT_091d3058);
    FUN_03f5c2a4(&DAT_091b9648);
    FUN_03f5c2a4(&DAT_091b9650);
    FUN_03f5c2a4(&DAT_091b9760);
    FUN_03f5c2a4(&DAT_091ba938);
    DAT_09521aca = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  uVar2 = FUN_04c07544(param_2,param_3,&local_70,DAT_091d3058);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_09175020 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = DAT_09197190;
    lVar3 = *(long *)(DAT_09197190 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    plVar7 = (long *)**(undefined8 **)(lVar4 + 0xb8);
    uVar1 = FUN_05fd6900(&local_60,DAT_091b9648);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = (**(code **)(*plVar7 + 0x178))(plVar7,uVar1,*(undefined8 *)(*plVar7 + 0x180));
    local_80 = FUN_04a6d544(&local_60,DAT_091b9650);
    auVar8 = FUN_0610892c(uVar5,DAT_091ba938);
    FUN_05ff5c28(local_80,auVar8._0_8_,auVar8._8_8_,DAT_091b9760);
    uVar1 = FUN_05fd6900(&local_60,DAT_091b9648);
    uVar6 = (**(code **)(*param_1 + 0x328))
                      (param_1,uVar5,0,uVar1,param_4,*(undefined8 *)(*param_1 + 0x330));
    uVar2 = System_IO_Stream__FinishWriteAsync(uVar6,uVar6,uVar5);
  }
  else {
    if (*(int *)(DAT_09175040 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = (**(code **)(*param_1 + 0x328))
                      (param_1,local_70,local_68 & 0xffffffff,local_68._4_4_,param_4,
                       *(undefined8 *)(*param_1 + 0x330));
  }
  local_50 = 0;
  local_48 = 0;
  local_46 = 0;
  uStack_45 = 0;
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException(0x26,0);
  }
  local_50 = uVar2;
  thunk_FUN_03f5d7b8(&local_50,uVar2);
  auVar8._8_2_ = 0;
  auVar8._0_8_ = local_50;
  auVar8[10] = 1;
  auVar8._11_5_ = uStack_45;
  return auVar8;
}

