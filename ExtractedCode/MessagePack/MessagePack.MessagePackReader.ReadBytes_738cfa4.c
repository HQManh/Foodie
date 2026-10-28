// rea decompile_all
// name: MessagePack.MessagePackReader$$ReadBytes
// address: 0x738cfa4
// body: available
// range: 0x738cfa4-0x738d18f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x738d18c to 0x738e178 MessagePack.MessagePackReader$$ThrowNotEnoughBytesException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackReader__ReadBytes(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09520a98 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6920);
    FUN_03f5c2a4(&DAT_091b9700);
    FUN_03f5c2a4(&DAT_0917e560);
    FUN_03f5c2a4(&DAT_091b9f90);
    FUN_03f5c2a4(&DAT_091b9fe0);
    FUN_03f5c2a4(&DAT_091b9fe8);
    FUN_03f5c2a4(&DAT_091b9ff0);
    DAT_09520a98 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar2 = MessagePack_MessagePackReader__get_NextCode(param_2);
  if (cVar2 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    uVar3 = MessagePack_MessagePackReader__GetBytesLength(param_2);
    uVar3 = uVar3 & 0xffffffff;
    lVar4 = FUN_06097630(param_2,DAT_091b9fe8);
    if (lVar4 < (long)uVar3) {
                    /* WARNING: Subroutine does not return */
      MessagePack_MessagePackReader__ThrowNotEnoughBytesException();
    }
    FUN_060972b8(&local_98,param_2,DAT_091b9ff0);
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    auVar5 = FUN_06097460(param_2,DAT_091b9fe0);
    if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_05fdd034(&local_b0,&local_80,auVar5._0_8_,auVar5._8_8_,uVar3,DAT_091b9700);
    FUN_042658c0(param_2,uVar3,DAT_091b9f90);
    uVar1 = DAT_091b6920;
    uStack_58 = uStack_a8;
    local_60 = local_b0;
    local_50 = local_a0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    FUN_05c2503c(param_1,&local_60,uVar1);
  }
  return;
}

